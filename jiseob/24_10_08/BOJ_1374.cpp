#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
vector<pair<int, int>> order;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int repeat;
    cin >> repeat;
    int num, st, end;
    order.resize(repeat,{0,0});

    for(int i = 0; i < repeat; i++){
        cin >> num >> st >> end;
        order[i] = make_pair(st, end);
    }

    sort(order.begin(), order.end(), greater<pair<int, int>>());

    for(int i = 0; i < repeat; i++){
        if(pq.empty())
            pq.push(order[i].second);
        else if(pq.top() <= order[i].first){
            //if(!pq.empty())
            pq.pop();
            pq.push(order[i].second);
            //cout << end;
        }
        int s = pq.size();
        cout << s;
    }

    return 0;

    return 0;
}
