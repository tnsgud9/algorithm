#include <iostream>
#include <vector>
using namespace std;

/*
* N          : ������ �ű���� ����
* poleStart  : ������ �ִ� ����� ���
* poleTarget : ������ �����ؾ��ϴ� ���
* poleTemp   : �ű�� �������� �ӽ÷� ����� ���
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
	//2�� ������� ��� �Ű�ٸ�

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