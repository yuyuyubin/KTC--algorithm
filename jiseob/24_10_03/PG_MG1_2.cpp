#include <string>
#include <vector>

using namespace std;

int row, col, gmax = 0;
vector<int> vis;

void rec(int j, vector<vector<int>> &ab, int sum){
    if(j >= col){ //j는 종목
        if(gmax < sum)
            gmax = sum;
        return;
    }
    
    rec(j + 1, ab, sum);
    for(int i = 0; i < row; i++){ //i는 학생
        if(!vis[i]){
            vis[i] = 1;
            rec(j + 1, ab, sum + ab[i][j]);
            vis[i] = 0;
        }
    }
}

int solution(vector<vector<int>> ability) {
    int answer = 0;

    row = ability.size(); //행
    col = ability[0].size(); //열
    vis.resize(row);
    rec(0, ability, 0);

    answer = gmax;

    return answer;
}