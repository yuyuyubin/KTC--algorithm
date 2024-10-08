#include <string>
#include <vector>
#include <iostream>

using namespace std;



int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int hp = health;
    int time = 0;
    int at_index = 0;
    int plus = 0;
    int max = attacks.size();

    for(int i = 1; (i <= attacks[max-1][0]) && (answer != -1); i++){
        ++plus;
        //공격 여부 판단
        if(i == attacks[at_index][0]){
            plus = 0;//연속 힐 끊김
            hp -= attacks[at_index][1];
            //cerr << hp << " "; 
            
            ++at_index;
            cout << " at ";
        }
        else{
            if(hp + bandage[1] > health)
                hp = health;
            else
                hp += bandage[1];

            
            cout << " +" << bandage[1] <<" ";
            if(plus == bandage[2]){ //연속 성공으로 회복
                if(hp + bandage[2] > health)
                    hp = health;
                else
                    hp += bandage[2];
                plus = 0;
                cout << " plus ";
            }
        }
        cout << hp<<" ";

        

    }

    answer = hp;
    if(hp <= 0){ //0이하가 되어 죽음
                answer = -1;
            }

    return answer;
}