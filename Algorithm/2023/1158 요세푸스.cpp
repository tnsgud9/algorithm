// https://www.acmicpc.net/problem/1158

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    queue<int> que;
    for ( int i = 1; i <= N; i++ ) que.push(i);
    cout << "<";
    while (!que.empty()){
        if(que.size() == 1){
            cout << que.front()<<">";
            break;
        }

        for(int i=0; i<K-1;i++){
            que.push(que.front());
            que.pop();
        }
        cout << que.front()<< ", ";
        que.pop();
    }
}