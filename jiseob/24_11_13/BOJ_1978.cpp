#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        if (k == 0 || k == 1)
            cnt--;
        else
        {
            for (int j = 2; j < k; j++)
            {
                if (k % j == 0)
                {
                    cnt--;
                    break;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}
