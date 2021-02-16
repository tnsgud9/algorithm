#include <iostream>
#include <vector>

using namespace std;

vector<int> visit;
vector<int> vec;
int N, M; // N�� ���� , M�� ����
void backTracking(int l) { 

	
	//���� ��� �������� ���ٸ� 
	if (l == M) {
		//���
		for (int i = 0; i < M; i++) {
			//vec�� �迭�� l�� ���� 0~N���� ���� ��ġ �ȴ�.
			cout << vec[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (!visit[i]) {
			visit[i] = 1;
			vec[l] = i;
			//��Ͱ� �����鼭 vec�� �ε����� ī��Ʈ �ȴ�.
			backTracking(l + 1);
			//����� ������ �湮���� 0���� �ٲ��ش�.
			visit[i] = 0;
		}
	}
}

int main() {

	cin >> N >> M;
	visit.resize(N+1, 0);
	vec.resize(N+1, 0);
	backTracking(0);

}