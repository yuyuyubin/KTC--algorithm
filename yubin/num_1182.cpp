#include<iostream>
#include<vector>
using namespace std;

vector<int> A;
int N,S,num,count_0;
void res(int i , int sum){
    if(i==N){
        if(sum == S) {
            count_0++;
        }
        return;
    }
    res(i+1, sum+A[i]);
    res(i+1, sum);
}

int main(){
    count_0=0;
    cin>> N>> S;
    A.resize(N,0);
    for(int j=0; j<N; j++){
        cin >> A[j];
    }
    res(0,0);
    if (S == 0) {
    count_0--;
    }
    cout << count_0<<"\n";
}