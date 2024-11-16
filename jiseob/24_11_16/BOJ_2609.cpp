#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int r = 1;
    while(r!= 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a; 
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    cout << gcd(n,m) << "\n" << n * m / gcd(n, m); 

    return 0;
}
