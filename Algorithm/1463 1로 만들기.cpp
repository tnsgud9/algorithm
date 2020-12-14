#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;
int N;
vector<int> vec;
int main() {
	cin >> N;
	vec.resize(N+1);
	//vec[0] 번지는 사용되지 않는다. 아래 for문이 처음 반복문을 돌떄 보면 알 수 있듯이 20번줄이나 21번줄만 실행된다. 
	vec[1] = 0; // 1로 만드는게 목표이기 떄문에 input 1은 0번만으로 1을 만들수 있다. (여기 값을 변경하면 N으로 만들기가 된다)

	//vec에 저장되는 값은 연산했을 때 최소 연산 횟수를 저장한다.
	// /2와 /3이 둘다 0으로 나눠질 경우에도 서로를 비교해야 한다.
	// 그럴때 둘 중 누가 더 작은 횟수로 연산되는지 모르기 떄문에 서로 비교하며 갱신해준다,

	// BOTTOM - UP 방식을 사용해  for문을 이용해서 처음값부터 다음값을 계산해 나가는 방식으로 문제를 풀수 있다.
	for (int i = 2; i <= N; i++) {
		vec[i] = vec[i - 1] + 1; 
		if (i % 2 == 0) vec[i] = min( vec[i],vec[i / 2] + 1);
		if (i % 3 == 0) vec[i] = min(vec[i], vec[i / 3] + 1);

	}
	cout << vec[N];
}