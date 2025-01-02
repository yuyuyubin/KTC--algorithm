#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    list<char> L;

    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++){
        L.push_back(str[i]);
    }

    list<char>::iterator cursor = L.end();

    int repeat;
    cin >> repeat;

    for(int i = 0; i < repeat; i++){
        char choice;
        cin >> choice;
        switch (choice)
        {
        case 'L':
                if(cursor != L.begin()){
                    cursor--;
                }
            break;
        case 'D':
                if(cursor != L.end()){
                    cursor++;
                }
            break;
        case 'B':
                if(cursor != L.begin()){
                    cursor = L.erase(--cursor);//erase 함수는 삭제한 다음 위치의 itorator를 반환함
                }
            break;
        case 'P':
                char ch;
                cin >> ch;
                L.insert(cursor, ch);
            break;
        
        
        default:
            break;
        }        
    }

    for(char ch:L){
        cout << ch;
    }

    return 0;
}
