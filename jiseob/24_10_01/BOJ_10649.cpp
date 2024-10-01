#include <bits/stdc++.h>
using namespace std;

vector<int> A;
vector<int> vec;
int N, M;
void rec(int cnt){
    if(cnt == M){
        for(auto i : A){
            cout << i <<" ";
        }
        cout << "\n";
        return;
    }

    for(int i = 0; i < N; i++){
        if(!vec[i]){
            vec[i] = 1;
            A.push_back(i + 1);
            rec(cnt + 1);
            A.pop_back();
            vec[i] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    cin >> N >> M;
    vec.resize(N, 0);
    rec(0);

    return 0;
}
