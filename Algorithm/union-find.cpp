// Union-Find ���Ͽ� ���ε�
/*
�׷��� �˰������� '������ ã��'��� �ǹ̸� ������ �ִ�.
���� ��尡 ������ ��, �� ��(a,b)�� ��带 �����ؼ�
���� �� ���(a,b)�� ���� ���� �׷����� ���ϴ��� �Ǻ��ϴ� �˰����̴�.
*/

// �̹� Union-Find�� �����ϱ� ���� ������
// ���ؿ� �ִ� ������ ǥ���̶� ������ �ڵ带 �ۼ��Ͽ� �����Ѵ�.
// https://www.acmicpc.net/problem/1717 



#include <iostream>
#include <vector>


using namespace std;

int N,M;

vector<int> node;

// �θ� ��带 ã�� ��� �Լ�
int getParent(int x) { 
	if (node[x] == x) return x;
	else return getParent(node[x]); //�ڽ��� ����Ű�� �θ� ���ö� ���� ��� ȣ��.
}

void unionParent(int a, int b) {
	//node[��]�� ���� �θ� ����� �ε���(a)�� �����Ų��.
	a = getParent(a); // node[a]�� �θ� a�� �����Ų��.
	b = getParent(b);

	if (a < b) //a,b �θ� �������� �Ǻ���.
		node[b] = a; // �θ� ���� ���� node�� �����Ѵ�. 
	else node[a] = b;
	// !!!!!!! : a,b ��尡 ���� ����Ǵ� �ε����� ���� ���� �θ��带 ����Ų��.
}

void findParent(int a, int b) { // �ִ��� ã�Ƴ��� �Լ� ��͸� ���
	//node[a]�� node[b]�� ���� ���� �Ǿ� �ִ��� Ȯ���ϴ� �Լ�
	a = getParent(node[a]); //�ش����� �θ� ã�´�.
	b = getParent(node[b]);

	//���
	if (a == b) cout << "YES\n";
	else cout << "NO\n";

}


int main()
{
	freopen("input.txt", "r", stdin);
	cin >> N >> M;
	node.resize(M + 2);
	for (int i = 1; i <= M; i++) node[i] = i; 
	// node�� �� ���� �θ� ����Ų��.
	// ��� �ε����� ���� ��� �� ����
	
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0)
			unionParent(b, c); // ���� ��Ų��.
		else {
			findParent(b,c);
		}
	}
}