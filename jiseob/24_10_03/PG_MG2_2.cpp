#include <string>
#include <vector>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int solution(vector<int> ability, int number) {
    int answer = 0;

    for(auto i : ability){
        pq.push(i);
    }
    
    int sum;
    for(int i = 0; i < number; i++){
        sum = 0;
        
        sum += pq.top();
        pq.pop();
        sum += pq.top();
        pq.pop();

        pq.push(sum);
        pq.push(sum);
    }
    
    
    while(!pq.empty()){
        answer += pq.top();
        pq.pop();
    }

    

    return answer;
}