#include <iostream>
#include <stack>
#include <string>

using namespace std;


stack<string> sta;

int main()
{
	while (1)
	{
		int in; string word;
		cout << " 1. Push \n 2. Pop \n 3. top \n 4. size \n 5. empty \n 6. Exit \n >";
		cin >> in;

		//switch를 써도 상관없으나 if가 처리속도가 더 빠르다고 한다.
		if (in == 1) 
		{
			cin >> word;
			sta.push(word);
		}
		if (in == 2)
		{
			if (sta.size() != 0) {
				cout << sta.top() << " : pop\n";
				sta.pop();
			}
			else
				cout << "stack : empty" << '\n';

		}
		if (in == 3)
		{
			if (sta.size() != 0)
				cout << sta.top() << '\n';
			else
				cout << "stack : empty" << '\n';
		}
		if (in == 4)
		{
			cout << sta.size() << '\n';
		}
		if (in == 5)
		{
			cout << sta.empty() << '\n';
		}
		if (in == 6)
		{
			return 0;
		}
	}




}