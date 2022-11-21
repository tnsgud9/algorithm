#include <iostream>

using namespace std;

void star(int i, int j, int n){
    if( (i / n) % 3 == 1 && (j / n) % 3 == 1) cout << "  "; // n 레벨 나누기
    else {
        if( n / 3 == 0){
            cout << "* ";
        } else {
            star(i, j, n/3); // n/3 레벨로 해당 i j 구역 재검사
        }
    }
}

int main(){
    int N;
    cin >> N;
    for(int i = 0; i<N;i++){
        for(int j = 0; j< N; j++){
            star(i,j,N);
        }
        cout << "\n";
    }
}

