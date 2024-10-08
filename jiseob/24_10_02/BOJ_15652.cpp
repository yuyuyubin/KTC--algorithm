#include <bits/stdc++.h>
using namespace std;

vector<int> A;
int N, M;
void rec(int cnt, int index){
    if(cnt == M){
        for(auto i : A){
            cout << i <<" ";
        }
        cout << "\n";
        return;
    }

    for(int i = index; i < N; i++){
         A.push_back(i + 1);
            rec(cnt + 1, i);
            A.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    rec(0, 0);

    return 0;
}
