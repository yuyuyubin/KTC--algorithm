#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, np = 1, kp = 1, nkp = 1;
    cin >> n >> k;
    for(int i = 2; i <= n; i++)
        np *= i;
    for(int i = 2; i <= k; i++)
        kp *= i;
    for(int i = 2; i <= n-k; i++)
        nkp *= i;
    
    int result = np/(kp*nkp);
    cout << result;

    return 0;
}
