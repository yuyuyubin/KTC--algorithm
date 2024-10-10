#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> V;

void rec(int cnt)
{
    if (cnt == M)
    {
        for (auto i : V)
        {
            cout << i << " ";
        }
        cout << "\n";
        return;
    }

    for (int a = 0; a < N; a++)
    {
        V.push_back(a + 1);
        rec(cnt + 1);
        V.pop_back();
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    
    rec(0);

    return 0;
}
