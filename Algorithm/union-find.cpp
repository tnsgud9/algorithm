// Union-Find 유니온 파인드
/*
그래프 알고리즘으로 '합집합 찾기'라는 의미를 가지고 있다.
여러 노드가 존재할 때, 두 개(a,b)의 노드를 선택해서
현재 두 노드(a,b)가 서로 같은 그래프에 속하는지 판별하는 알고리즘이다.
*/

// 이번 Union-Find는 이해하기 쉬운 예제로
// 백준에 있는 집합의 표현이란 문제의 코드를 작성하여 설명한다.
// https://www.acmicpc.net/problem/1717 



#include <iostream>
#include <vector>


using namespace std;

int N,M;

vector<int> node;

// 부모 노드를 찾는 재귀 함수
int getParent(int x) { 
	if (node[x] == x) return x;
	else return getParent(node[x]); //자신을 가리키는 부모가 나올때 까지 재귀 호출.
}

void unionParent(int a, int b) {
	//node[ㅠ]의 값의 부모 노드의 인덱스(a)를 저장시킨다.
	a = getParent(a); // node[a]의 부모를 a에 저장시킨다.
	b = getParent(b);

	if (a < b) //a,b 부모가 작은것을 판별함.
		node[b] = a; // 부모가 작은 것을 node에 저장한다. 
	else node[a] = b;
	// !!!!!!! : a,b 노드가 서로 연결되는 인덱스는 가장 작은 부모노드를 가리킨다.
}

void findParent(int a, int b) { // 있는지 찾아내는 함수 재귀를 사용
	//node[a]와 node[b]가 서로 연결 되어 있는지 확인하는 함수
	a = getParent(node[a]); //해당노드의 부모를 찾는다.
	b = getParent(node[b]);

	//출력
	if (a == b) cout << "YES\n";
	else cout << "NO\n";

}


int main()
{
	freopen("input.txt", "r", stdin);
	cin >> N >> M;
	node.resize(M + 2);
	for (int i = 1; i <= M; i++) node[i] = i; 
	// node에 들어간 값은 부모를 가리킨다.
	// 노드 인덱스에 따라 노드 값 생성
	
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;

		if (a == 0)
			unionParent(b, c); // 연결 시킨다.
		else {
			findParent(b,c);
		}
	}
}