#include <iostream>
#include <vector>
using namespace std;

/*
* N          : 원반을 옮기려는 개수
* poleStart  : 원반이 있는 출발점 기둥
* poleTarget : 원반이 도착해야하는 기둥
* poleTemp   : 옮기는 과정에서 임시로 사용할 기둥
*/
int K = 1;
vector<pair<int, int>> vec;
void hanoi_tower(int N, int poleStart,int poleTemp, int poleTarget) {
	if (N == 1) {
		vec.push_back(make_pair(poleStart,poleTarget));
		//cout << poleStart << "-> " << poleTarget << "\n";
		return;
	};
	hanoi_tower(N - 1, poleStart,poleTarget,poleTemp); 
	K++;
	//2번 기둥으로 모두 옮겼다면

	vec.push_back(make_pair(poleStart, poleTarget));
	//cout << poleStart << "-> " << poleTarget << "\n";
	hanoi_tower(N - 1, poleTemp, poleStart, poleTarget);
	K++;
}


int main() {
	int N;
	cin >> N;
	hanoi_tower(N, 1, 2, 3);

	cout << K<<"\n";
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i].first << " " << vec[i].second<<"\n";
	}
}