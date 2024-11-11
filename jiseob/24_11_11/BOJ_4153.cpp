#include <bits/stdc++.h>
using namespace std;

vector<int> a;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    a.resize(3);
    while(true){
        cin >> a[0] >> a[1] >> a[2];
        if(a[0] == 0 && a[1] == 0 && a[2] == 0)
            break;
        sort(a.begin(), a.end());
        if (a[0]*a[0] + a[1]*a[1] == a[2]*a[2])
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
