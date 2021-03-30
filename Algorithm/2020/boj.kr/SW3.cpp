#include <iostream>

using namespace std;

int pow2(int a, int b) {
	if (b == 0) return 1;
	else if (b == 1) return a;
	else return a * pow2(a, b - 1);
}
int main() {
	cout << pow2(2, 5);

}