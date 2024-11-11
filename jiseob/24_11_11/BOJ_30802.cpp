#include <bits/stdc++.h>
using namespace std;

vector<int> T;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t, p;
    T.resize(6);

    cin >> n;

    for(int i = 0; i < 6; i++){
        cin >> T[i]; 
    }

    cin >> t >> p;

    int cnt = 0;
    for(int i = 0; i < 6; i++){
        
        if(T[i] != 0){
            cnt += T[i] / t + 1; 
            if(T[i] % t == 0)
                cnt--;
        }
    }

    cout << cnt << "\n" << n/p << " " << n%p;

    return 0;
}
