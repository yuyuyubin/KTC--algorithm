#include <string>
#include <vector>

using namespace std;

vector<vector<int>> vec;

string solution(string input_string) {
    string answer = "";
    int answer_index = 0;
    int index;
    for(int i = 0; i < input_string.length(); i++){
        index = input_string[i] - 'a';
        vec[index].push_back(i);
    }
    int cnt = 0;
    for(int i = 0; i < 26; i++){
        if(vec[i].size() > 1){
            cnt++;
            for(int j = 0; j < vec[i].size() - 1; j++){
                int dis = vec[i][j+1]-vec[i][j];
                if(dis != 1){
                    answer_index = i + 'a';
                    ++answer_index;
                }
            }
        }
    }

    if(cnt == 0){
        answer = "N";
    }


    return answer;
}