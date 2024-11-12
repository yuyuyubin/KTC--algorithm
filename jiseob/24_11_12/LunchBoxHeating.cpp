#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    for (int k = 0; k < T; k++)
    {
        int n;
        cin >> n;
        vector<int> e, m;
        e.resize(n);
        m.resize(n);
        for(int i = 0; i < n; i++)
            cin >> m[i];
        for(int i = 0; i < n; i++)
            cin >> e[i];
        vector<pair<int, int>> order;
        for (int i = 0; i < n; ++i)
            order.push_back(make_pair(-e[i], i));
        sort(order.begin(), order.end());
        int ret = 0, beginEat = 0;
        for (int i = 0; i < n; ++i)
        {
            int box = order[i].second;
            beginEat += m[box];
            ret = max(ret, beginEat + e[box]);
        }
        cout << ret << "\n";
    }
    return 0;
}
