// 이분탐색 (Binary-Search)
/*

탐색할 데이터를 반으로 반으로 계속 나누며 값을 비교해 목표값을 찾는 알고리즘이다.
장점: 모든 값을 탐색하지 않고 빠른속도로 목표 값을 찾을 수 있다.
단점: (조건) 데이터가 정렬이 되어있어야만 이분탐색을 할 수 있다.
시간복잡도 : O(log N)
*/


//input
// 첫번쨰줄 : 입력받을 개수
// 두번째줄 : 배열 입력
// 세번쨰줄 : 찾을 값 입력
/*
6
1 3 4 5 6 2
4
*/

//output
// 찾은값 , 인덱스
/*
Want find Value : 4
Found Value index (sorted array) : 3

종료
*/

#include<iostream>
#include <algorithm>
#include <vector>


using namespace std;

int n; //input Count;
int F; //Find Value;
vector<int> arr; //data

void input()
{
	cin >> n;
	arr.resize(n);
	for (int i = 0; i < arr.size(); i++) {
		cin >> arr[i];
	}
	cin >> F;

	sort(arr.begin(), arr.end()); // 아무렇게 입력받을시 대비해 정렬한다.
}

// 이전에는 재귀함수를 이용해 간단하게 코드를 구현했지만 재귀함수의 특징 중 새로 메모리를 만든다는 점에서
// 메모리 효율성을 높이기 위해 다른 방법으로 해보았다.

void binary_search(vector<int> arr, int findValue) { //findValue == F
	
	// left, right, mid는 모두 arr의 인덱스 값을 저장한다.
	int left = 0,
		right = arr.size() - 1;
	int mid = (left + right) / 2; 
	// left와 right를 더해 left right 구간의 해당하는 mid 인덱스를 구한다.
	// ex) n=10; answer = 7 (index:6); left = 5; right = 9; 
	//     left + right = 14   14 / 2 = 7(index)  

	while (arr[mid] != F) {
		mid = (left + right) / 2;

		if (findValue < arr[mid]) {
			right = mid-1;   
		}
		else { // findValue > mid
			left = mid+1; 
		}
		//  왜 mid +- 1을 넣는가?
		/*
			배열의 앞과 끝의 값을 찾는 경우 발생하는 무한 루프를 없애기 위해서이다.
			ex) n=10; findValue = 10;
				계속 루프를 돌다보면 left=8, right=9 에서 막힌다. (디버그 해보삼)
				left+right = 17, mid = 17/2 = 8
				위 내용처럼 mid 또한 계속 8이란 계산결과가 나온다.

			이러한 문제를 해결하기 위해 findValue가 arr[mid]값보다
			크면 mid+1 , 작으면 mid-1을 해 가장자리 값도 찾을 수 있게한다. 
		*/
	}

	cout << "Want find Value : " << findValue << endl;
	cout << "Found Value index (sorted array) : " << mid << endl;
}

int main() {
	freopen("input.txt", "r", stdin);

	input();

	binary_search(arr, F);

}
