#include <iostream>
#include <vector>
using namespace std;


int main() {
	//��� ����� ���� ���� ���� ���̴�.

	// ���� ����
	/*
	
	���� �� �ǵڿ��� 3���� ���� ���ϸ� ū ���� ã�ư��� ����� �õ��غ�����
	���࿡ ���� 10 �����϶� �����Ͱ� 1 3 4 5 �ΰ�� 345�� �ѱ�� 134�� ���� ū���� �ƴϿ���.
	���� ������ �´� ���� ū ���� 145�̸� �̸� ã�� ���ؼ� ���������� ��� ����� ���� ���ƺ��� ���� ���̿���.


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
			//�� i+1�ΰ�? : i,j,k�� �� �ѹ��� �ߺ��Ǵ� �ε����� ����Ű�� �ȵȴ�.
			
			for (int k = j+1; k < vec.size(); k++) {
				int ex = vec[i] + vec[j] + vec[k];
				if (ex <= M && ex>max) max = ex;
			}
		}
	}

	cout << max;

}