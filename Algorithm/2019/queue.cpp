#include <iostream>
#include <string>
#include <queue>

using namespace std;

queue<string> que;

int main()
{

	while (1)
	{
		int in; string word;
		cout << " 1. Push \n 2. Pop \n 3. front \n 4. back \n 5. size \n 6. empty \n 7. Exit \n >";
		cin >> in;

		//switch를 써도 상관없으나 if가 처리속도가 더 빠르다고 한다.
		if (in == 1) {
			cin >> word;
			que.push(word);
		}
		if (in == 2) {

			if (que.size() != 0) {
				cout << que.front() << " : pop";
				que.pop();
			}
			else {
				cout << "queue : empty \n";
			}
		}
		if (in == 3) {

			if (que.size() != 0) {
				cout << que.front() << '\n';
			}
			else {
				cout << "queue : empty \n";
			}

		}
		if (in == 4) {

			if (que.size() != 0) {
				cout << que.back() << '\n';
			}
			else {
				cout << "queue : empty \n";
			}
		}
		if (in == 5) {
			cout << que.size() << '\n';
		}
		if (in == 6) {
			cout << que.empty() << '\n';
		}
		if (in == 7) {
			return 0;
		}


	}

}