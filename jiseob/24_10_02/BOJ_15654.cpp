#include <bits/stdc++.h>
using namespace std;

vector<int> vec, A, vis;

int N, M;


void rec(int cnt){
    if(cnt == M){
        for(auto i : A){
            cout << i << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < N; i++){
        if(vis[i] == 0){
            vis[i] = 1;
            A.push_back(vec[i]);
            rec(cnt + 1);
            A.pop_back();
            vis[i] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;
    
    int input;
    
    vis.resize(N, 0);

    for(int i = 0; i < N; i++){
        cin >> input;
        vec.push_back(input);
    }
    sort(vec.begin(), vec.end());

    rec(0);

    return 0;
}
