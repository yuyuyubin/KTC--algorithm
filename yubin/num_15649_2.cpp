#include <iostream>
#include <vector>
using namespace std;

vector<int> A;
int n,m;
int count0;
void rec(int i, int k, vector<int> sub){

    if(i >= n || k==m){
        if(k==m){
            for(int j=0; j<k ; j++){
                cout << sub[j] << " ";
            }
            cout << "\n" ;
        }
        return;
    }
    rec(i+1, k, sub);
    sub.push_back(A[i]);
    rec(i+1, k+1, sub);

}

int main(){
    cin >> n >> m;
    A.resize(n,0);
    for (int a= 0; a<n; a++){
        A[a] = a+1;
    }
    rec(0,0,vector<int>());
}