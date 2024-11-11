#include <bits/stdc++.h>
using namespace std;

string S, T; 
string::iterator L, R;
bool rev = false;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> S >> T;

    L = T.begin();
    R = T.end() - 1;

    while(R-L + 1 != S.length()){
        if(rev == true && *L == 'B'){
            rev = false;
            ++L;
        }   
        else if(rev == false && *R == 'B'){ // 뒤집어지지 않고 오른쪽 문자가 B일때
            rev = true;
            --R;
        }
        else if(rev == false && *R == 'A'){ // 뒤집어지지 않고 오른쪽 문자가 A일때
            --R;
        }
        
        else if(rev == true && *L == 'A'){// 뒤집어져 있고 왼쪽 문자가 A일때 
            ++L;
        }
    }

    string str(L, R + 1);

    if(rev == true)
        reverse(str.begin(), str.end());

    
    if(str == S)
        cout << "1";
    else   
        cout << "0";

    return 0;
}
