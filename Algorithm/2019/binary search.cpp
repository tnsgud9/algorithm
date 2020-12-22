// �̺�Ž�� (Binary-Search)
/*

Ž���� �����͸� ������ ������ ��� ������ ���� ���� ��ǥ���� ã�� �˰����̴�.
����: ��� ���� Ž������ �ʰ� �����ӵ��� ��ǥ ���� ã�� �� �ִ�.
����: (����) �����Ͱ� ������ �Ǿ��־�߸� �̺�Ž���� �� �� �ִ�.
�ð����⵵ : O(log N)
*/


//input
// ù������ : �Է¹��� ����
// �ι�°�� : �迭 �Է�
// �������� : ã�� �� �Է�
/*
6
1 3 4 5 6 2
4
*/

//output
// ã���� , �ε���
/*
Want find Value : 4
Found Value index (sorted array) : 3

����
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

	sort(arr.begin(), arr.end()); // �ƹ����� �Է¹����� ����� �����Ѵ�.
}

// �������� ����Լ��� �̿��� �����ϰ� �ڵ带 ���������� ����Լ��� Ư¡ �� ���� �޸𸮸� ����ٴ� ������
// �޸� ȿ������ ���̱� ���� �ٸ� ������� �غ��Ҵ�.

void binary_search(vector<int> arr, int findValue) { //findValue == F
	
	// left, right, mid�� ��� arr�� �ε��� ���� �����Ѵ�.
	int left = 0,
		right = arr.size() - 1;
	int mid = (left + right) / 2; 
	// left�� right�� ���� left right ������ �ش��ϴ� mid �ε����� ���Ѵ�.
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
		//  �� mid +- 1�� �ִ°�?
		/*
			�迭�� �հ� ���� ���� ã�� ��� �߻��ϴ� ���� ������ ���ֱ� ���ؼ��̴�.
			ex) n=10; findValue = 10;
				��� ������ ���ٺ��� left=8, right=9 ���� ������. (����� �غ���)
				left+right = 17, mid = 17/2 = 8
				�� ����ó�� mid ���� ��� 8�̶� ������� ���´�.

			�̷��� ������ �ذ��ϱ� ���� findValue�� arr[mid]������
			ũ�� mid+1 , ������ mid-1�� �� �����ڸ� ���� ã�� �� �ְ��Ѵ�. 
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
