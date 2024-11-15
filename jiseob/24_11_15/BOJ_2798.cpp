#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    v.resize(n);
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        v[i] = k;
    }

    int sum;
    int max = 0;
    for (int i = 2; i < n; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            for (int h = 0; h < j; h++)
            {
                sum = 0;
                sum += v[h];
                sum += v[j];
                sum += v[i];
                if (max < sum && sum <= m)
                    max = sum;
            }
        }
    }
    cout << max;

    return 0;
}
