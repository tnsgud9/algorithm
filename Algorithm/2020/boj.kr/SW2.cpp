#include <iostream>
#include <vector>


using namespace std;

vector<int> pcTime;
vector<int> maxPlay;
int main() {
	int p, n, h; //피시 개수, 예약 인원수 ,피씨방 운영시간
	cin >> p >> n >> h;
	pcTime.resize(n+1);

	for (int i = 0; i < n; i++) {

		int pc, time;
		cin >> pc >> time;
		if (time <= h) {
			if (pcTime[pc] + time <= h) {
				pcTime[pc] += time;
			}

		}

	}
	for (int i = 1; i <= p; i++) {
		cout << i << " " << pcTime[i]*1000 << "\n";
	}

	

}