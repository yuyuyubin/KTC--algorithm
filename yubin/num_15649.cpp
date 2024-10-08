#include <iostream>
#include <vector>
using namespace std;

int N,M;
int count0 = 0;
vector<int> A;

void rec(int i,  int k, vector<int> subset)
{
    if( i>=N || k==M){
        if(k==M){
            count0++;
            }
        return;
    }
    rec(i+1,k, subset);
    subset.push_back(A[i]);
    rec(i+1,k+1, subset);
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    A.resize(N, 0);
    for(int a=0; a<N; a++){
        A[a]=a+1;
    }
    rec(0,0,vector<int>());

    cout << count0 <<"\n";
}
