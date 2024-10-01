#include <iostream>
#include <vector>

using namespace std;

vector<int> A; //숫자 저장용
int N,M;

void rec(int i,int k,vector<int>&comb)
{
    if(i>=N||k==M)
    {
        if(k==M){
            for(auto num:comb){
                cout<<num<<" ";
            }
            cout<<endl;
            return;
        }
        return;
    }

    //숫자 선택할 때
    comb.push_back(A[i]); //comb의 끝에 A[i]요소 추가
    rec(i+1,k+1,comb);//다음 숫자 선택

    //선택 안 할 때
    comb.pop_back(); //끝 요소 삭제==불려진 숫자 제거
    rec(i+1,k,comb);//선택 안 하고 다음 인덱스로


    /*
    //이 순서로 하면 34 24~~ 이렇게 나옴. 재귀 순서 때문인듯
    rec(i+1,k,comb);
    comb.push_back(A[i]); //comb의 끝에 A[i]요소 추가
    rec(i+1,k+1,comb);
    comb.pop_back(); //끝 요소 삭제
    */


}

int main(){
    cin>>N>>M;

    A.resize(N,0);
    for(int i=0;i<N;i++)
    {
        A[i]=i+1;
    }

    vector<int>comb; //선택된 조합 저장용
    rec(0,0,comb);

}
