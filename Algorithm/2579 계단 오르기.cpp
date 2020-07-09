#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N;
vector<int> origin;
vector<int> arr;
void input() {
	cin >> N;
	origin.resize(N);
	for (int i = 0; i < N; i++) cin >> origin[i];
	arr = origin;
}
void dp() {
	int cnt = 0;
	int i = 0;
	
	arr[1] = arr[0] + origin[1];
	arr[2] = max(origin[0] + origin[2], origin[1] + origin[2]);
	
	for (int i = 3; i < N; i++) {
		arr[i] = max(arr[i - 2] + origin[i], origin[i] + origin[i - 1] + arr[i - 3]); // (1+1) 한칸이동이지만 3칸을 고려해야 한다. 
	}
}
int main() {
	//freopen("input.txt", "r", stdin);
	input();
	dp();
	
}