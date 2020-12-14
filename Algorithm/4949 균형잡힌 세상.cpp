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
					flag = 1; //플레그를 심는 이유? : ( ) ) 없을시 이러한 경우도 yes가 되기 때문에 예외 처리를 해줘야 한다.  
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