#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int tc;
    cin >> tc;
    cin.ignore(); // 첫 줄바꿈 제거

    for (int i = 0; i < tc; i++)
    {
        string input;
        getline(cin, input); // 한 줄 입력 받기

        list<char> L;
        auto cursor = L.begin();

        for (char ch : input)
        {
            if (ch == '<')
            {
                if (cursor != L.begin())
                {
                    cursor--;
                }
            }
            else if (ch == '>')
            {
                if (cursor != L.end())
                {
                    cursor++;
                }
            }
            else if (ch == '-')
            {
                if (cursor != L.begin())
                {
                    cursor = L.erase(--cursor);
                }
            }
            else
            {
                L.insert(cursor, ch);
            }
        }

        for (auto s : L)
        {
            cout << s;
        }
        cout << '\n'; // 각 테스트 케이스 결과 출력 후 줄바꿈
    }

    return 0;
}
