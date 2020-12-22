#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> map;
int main() {
	

	int n;
	cin >> n;
	map.resize(n+1,vector<int>(n+1));

	printStar();

}

void insertStar() {
	for (int i = 0; i < map.size(); i += 3 ) {
		for (int j = 0; j < map.size(); j += 3) {

		}
	}
}

void printStar() {
	for (int i = 0; i < map.size(); i++) {
		for (int j = 0; j < map[i].size(); j++) {
			cout << map[i][j];
		}
		cout << "\n";
	}

}