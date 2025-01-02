#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int repeat;
    cin >> repeat;
    
    for(int i = 0; i<repeat; i++){
        int dat[MX], pre[MX], nxt[MX];
        int unused = 1;
        fill(pre, pre+MX, -1);
        fill(nxt, nxt+MX, -1);
        int ch;
        ch = getchar();
        while(ch!='\n'){
            if(ch == '<'){
                if(pre[unused] != -1)
                    unused = pre[unused];
            }
            else if(ch == '>'){
                if(nxt[unused] != -1)
                    unused = nxt[unused];
            }
            else if(ch == '-'){
                //삭제 연산
                int addr = unused;
                unused = pre[addr];
                nxt[pre[addr]] = nxt[addr];
                if(nxt[addr] != -1)
                    pre[nxt[addr]] = pre[addr];
            }
            else{
                //삽입 연산
                dat[unused] = ch;
                int addr = unused;
                nxt[unused] = nxt[addr];
                nxt[addr] = unused;
                if(nxt[unused] != -1){
                    pre[nxt[unused]] = unused;
                    ++unused;
                }
            }
            ch = getchar();
        }
        int cur = nxt[0];
        while(cur != -1){
            cout << (char)dat[cur];
            cur = nxt[cur];
        }
        cout <<"\n";
    }


    return 0;
}


