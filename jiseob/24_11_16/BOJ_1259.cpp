#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string n;
    cin >> n;
    while (n != "0")
    {
        int flag = 1;
        int len = n.length();
        for (int i = 0; i < (int)len / 2; i++)
        {
            if (n[i] != n[len - i - 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            cout << "no\n";
        else
            cout << "yes\n";

        cin >> n;
    }

    return 0;
}
