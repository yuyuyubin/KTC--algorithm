#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(vector<int> menu, vector<int> order, int k) {
    int answer = 0;
    int total_time = 0; // 총 음료 제작 시간 초기화
    queue<int> q; // 음료가 나오는 시간 큐

    // 음료가 나오는 시간을 큐에 저장
    for (auto i : order) {
        total_time += menu[i]; // 총 음료 제작 시간 계산
        q.push(total_time); // 음료가 나오는 시간 큐에 저장
    }

    int son = 0; // 대기 중인 손님 수
    int remain = order.size(); // 남은 주문 개수

    // 총 음료 준비 시간 동안 반복
    for (int i = 0; i <= total_time; i++) {
        // 10초마다 손님 추가
        if (i % k == 0 && remain > 0) {
            ++son; // 손님 추가
            --remain; // 남은 주문 수 감소
        }

        // 음료가 나오는 시간이 되면 손님 수 감소
        if (!q.empty() && q.front() == i) {
            q.pop(); // 음료가 나왔으므로 큐에서 제거
            --son; // 음료를 받은 손님 수 감소
        }

        // 최대 대기 손님 수 갱신
        answer = max(answer, son);
    }

    return answer;
}
