#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	while (true)
	{
		stack<char> sta;
		int flag = 0;
		string words;
		getline(cin, words);
		if (words == ".") return 0;
		
		for (int i = 0; i < words.length(); i++) {
			if (words[i] == '(' || words[i] == '[') sta.push(words[i]);

			if ( words[i] == ')' && !sta.empty()) {
				if (sta.top() == '(') {
					sta.pop();
				}
				else {
					flag = 1; //�÷��׸� �ɴ� ����? : ( ) ) ������ �̷��� ��쵵 yes�� �Ǳ� ������ ���� ó���� ����� �Ѵ�.  
					break;
				}
			}
			if (words[i] == ']' && !sta.empty()) {
				if (sta.top() == '[') {
					sta.pop();
				}
				else {
					flag = 1;
					break;
				}

			}
		}

		if ( flag == 0 && sta.empty()) cout << "yes\n";
		else cout << "no\n";
		while (!sta.empty()) sta.pop();
	}

}