// https://boj.kr/30460
// 시간 초과로 시간 복잡도를 고려한 코드 작성 필요

#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int N;
int maximum = INT_MIN;;
vector<int> vec;

int click(int i){ //T, T+1 ,T+2 의 2배
    int sum = vec[i] * 2;
    if(i+1 < N) sum += vec[i+1]*2;
    if(i+2 < N) sum += vec[i+2]*2;
    return sum;
}
//눌렀을 때
void press(int index, int sum, int cnt){
    //종단점
    if(index >= N) {
        maximum = maximum > sum ? maximum : sum;
        return;
    }

    //눌렀을 경우
    if(cnt >= 3) // 다시 누를수 있을 경우
    {
        //눌러서 더블 포인트를 얻음
        press(index+3,sum+click(index),3);
    }
    //안눌렀을 경우
    press(index+1,sum+vec[index],cnt+1);
};


int main(){

    //input
    cin >> N;
    vec.resize(N);
    for(int i=0;i<N;i++){
        cin >> vec[i];
    }

    //process
    int sum=0;
    for(int i=0;i<N;i++){
        press(i,sum,3);
        sum+=vec[i];
    }

    cout << maximum;
}