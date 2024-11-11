#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> V;
vector<int> input;

void rec(int cnt){
    if(cnt == M){
        for(auto i : V){
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 0; i < N; i++){
        V.push_back(input[i]);
        rec(cnt + 1);
        V.pop_back();
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

    
    
    rec(0);

    return 0;
}
