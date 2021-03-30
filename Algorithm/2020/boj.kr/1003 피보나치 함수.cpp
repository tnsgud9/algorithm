#include<iostream>

using namespace std;
int one = 0, zero = 0;
int fibonacci(int n) {

    for (int i = 2; i < n; i++) {

    }

    if (n == 0) {
        //printf("0");
        zero++;
        return 0;
    }
    else if (n == 1) {
        //printf("1");
        one++;
        return 1;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;
        fibonacci(m);
        cout << zero << " " << one<<"\n";
        one = 0; zero = 0;
    }
}