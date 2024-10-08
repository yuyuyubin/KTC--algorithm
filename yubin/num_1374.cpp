#include<iostream>
#include<vector>
#include<queue>
using namespace std;

priority-queue<int, vector<int>, greater<int>> pq;

int main()
{
    int N, start, end, tmax;
    cin >> N;
    vector<pair<int,int>> class(N);
    
    for (int i = 0 ; i<N; i++){
        cin >> start >> end;
        class[i] = {start, end};
    }

    sort(class.begin(), class.end());

    for(int j= 0; j<N; j++){
        if(pq.empty()){
            pq.push(claas[i].second);
        else{
            while(!pq.empty() && class[i].first >= pq.top()){
                pq.pop()
            }

        }
        pq.push(class[i].second);
        }
    }
    tmax = max(tmax + int(pq.size));
}