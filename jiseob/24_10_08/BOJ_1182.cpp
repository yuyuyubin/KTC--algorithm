#include <bits/stdc++.h>
using namespace std;

vector<int> vis;
vector<int> vec;
int N, S;

void rec(int M, int cnt, int index){
    if(cnt == M){

        return;
    }

    for(int i = index; i < N; i++){
        if(!vis[i]){
            vis[i] = 1;
            rec(M, cnt + 1, i + 1);
            vis[i] = 0;
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> S;

    vec.resize(N);
    vis.resize(N);

    for(int i = 0; i < N; i++){
        cin >> vec[i];
    }

    rec(0, )

    return 0;
}
