#include<iostream>
#include <vector>



using namespace std;
int main() {
	int K, N;
	cin >> N >> K;
	N++;
	vector <int> vec;
	int cnt = 0;
	cout <<"<";
	for(int i =1;i<N;i++){
		cnt += K;
		cnt %= N;
		if (i == N - 1)
			cout << cnt;
		else
			cout << cnt << ", ";
	}
	cout << ">";
}