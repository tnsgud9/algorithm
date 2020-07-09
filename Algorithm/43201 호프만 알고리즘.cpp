#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int N;
string CWORD;
struct abc
{
	string code;
	char alpha;
};

bool compareASC(const abc& a1, const abc& a2) {
    if (atoi(a1.code.c_str) < atoi(a2.code.c_str)) {
        return true;
    }
    else if (atoi(a1.code.c_str) == atoi(a2.code.c_str)) {
        return a1.code < a2.code;
    }
    else {
        return false;
    }
}

bool compareDESC(const abc& a1, const abc& a2) {
    if (a1.code > a2.code) {
        return true;
    }
    else if (a1.code == a2.code) {
        return a1.code > a2.code;
    }
    else {
        return false;
    }
}

vector<abc> vec;
int main() {
    freopen("input.txt", "r", stdin);
	cin >> N;
	vec.resize(N);

	for (int i = 0; i < N; i++) {
		cin >> vec[i].alpha >> vec[i].code;
	}
    stable_sort(vec.begin(), vec.end(), compareDESC);

	cin >> CWORD;


    for (int i = 0; i < vec.size(); i++) {
        for (int j = CWORD; j >= 0; j-= vec[i].code.length()) {
            if(vec[j] = substr)
        }
    }
}