#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    const int MX = 1000005;
    int dat[MX], nxt[MX];
    int unused = 1;

    fill(nxt, nxt+MX, -1);

    int N;
    cin >> N;
    for(int i = 0; i<N; i++){
        //dat[i] = i+1; // 번호 넣기
        nxt[i] = i+1;
    }
    nxt[N-1] = 0; // 끝에선 다시 맨 처음으로 (원형)

    int K;
    cin >> K;

    int j = 0;
    cout << "<";
    while(nxt[j] != j){
        for(int m = 0; m < K-1; m++){
            j = nxt[j];
        }
        cout << nxt[j] <<", ";
        nxt[j] = nxt[nxt[j]];

    }

    cout << ">";


    return 0;
}
