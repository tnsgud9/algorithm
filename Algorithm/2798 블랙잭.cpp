#include <iostream>
#include <vector>
using namespace std;


int main() {
	//모든 경우의 수를 보는 것이 답이다.

	// 실패 내용
	/*
	
	정렬 후 맨뒤에서 3개의 합을 비교하며 큰 수를 찾아가는 방법을 시도해봤지만
	만약에 합이 10 이하일때 데이터가 1 3 4 5 인경우 345는 넘기며 134는 가장 큰수가 아니였다.
	가장 조건의 맞는 가장 큰 수는 145이며 이를 찾기 위해선 무식하지만 모든 경우의 수를 돌아보는 것이 답이였다.


	*/

	int N, M;
	vector<int> vec;
	cin >> N >> M;

	int max = 0;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}

	for (int i = 0; i < vec.size(); i++) {
		for (int j = i+1; j < vec.size(); j++) { 
			//왜 i+1인가? : i,j,k는 단 한번도 중복되는 인덱스를 가리키면 안된다.
			
			for (int k = j+1; k < vec.size(); k++) {
				int ex = vec[i] + vec[j] + vec[k];
				if (ex <= M && ex>max) max = ex;
			}
		}
	}

	cout << max;

}