#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> V;
vector<int> input;
vector<int> vis;

void rec(int cnt, int index){
    
    if(cnt == M){
        for(auto i : V){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = index; i < N; i++){
        if(vis[i] == 0){
            vis[i] = 1;
            V.push_back(input[i]);
            rec(cnt + 1, i);
            V.pop_back();
            vis[i] = 0;
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;

    input.resize(N);

    for(int i = 0; i < N; i++){
        cin >> input[i];
    }
    
    sort(input.begin(), input.end());
    
    vis.resize(N);

    rec(0, 0);


    return 0;
}
