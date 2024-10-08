#include <bits/stdc++.h> 
using namespace std;

vector<int> vec;
vector<int> subset;
int N, M;
int cnt = 0;


void rec(int i, int k, vector<int> v){
    if(i >= N || k == M){
        if(k == M){
            ++cnt;
        }
        return;
    }
    rec(i + 1, k, v);
    v.push_back(vec[i]);
    rec(i + 1, k + 1, v);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        vec.push_back(i+1);
    } 

    rec(0, 0, subset);

    cout << cnt;

    return 0;
}
