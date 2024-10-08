#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main()
{
    int N, start, end, tmax;
    cin >> N;
    vector<pair<int,int>>lecture(N);
    
    for (int i = 0 ; i<N; i++){
        cin >> start >> end;
        lecture[i] = {start, end};
    }

    sort(lecture.begin(), lecture.end());

    for(int j= 0; j<N; j++){
        if(pq.empty()){
            pq.push(lecture[j].second);
        }
        else{
            while(!pq.empty() && lecture[j].first >= pq.top()){
                pq.pop();
            }

        }
        pq.push(lecture[j].second);
        }
    
    tmax = max(tmax,int(pq.size()));
}