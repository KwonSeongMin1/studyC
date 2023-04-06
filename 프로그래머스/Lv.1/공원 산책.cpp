#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {

    int start[2];
    int startArchive[2];
    int flag = 0;
    vector<vector<int>> obstacle;
    unsigned long end_of_height = park.size();
    unsigned long end_of_weight = park[0].size();

    // 시작점 위치 & 장애물 위치 파악
    for(int i=0;i<end_of_height;i++){
        for(int j=0;j<end_of_weight;j++){
            if(park[i][j] == 'S'){
                start[0] = i;
                start[1] = j;
            }
            if(park[i][j] == 'X'){
                obstacle.push_back({i,j});
            }
        }
    }

    // 명령문 순서대로 실행
    for(int r=0;r<routes.size();r++){
        // 시작점 아카이브
        startArchive[0] = start[0];
        startArchive[1] = start[1];
        
        // 1차 거름망 (장외 파악)
        if(routes[r][0] == 'E' && (start[1] + int(routes[r][2]-48) < end_of_weight)){
            for(int move=0;move<int(routes[r][2])-48;move++){
                start[1]++;
                // 2차 거름망 (장애물 판별)
                for(int obs=0;obs<obstacle.size();obs++){
                    if((start[0] == obstacle[obs][0] && start[1] == obstacle[obs][1])){
                        start[1] = startArchive[1];
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    flag = 0;
                    break;
                }
            }
        }
        if(routes[r][0] == 'W' && (start[1] - int(routes[r][2]-48) >= 0)){
            for(int move=0;move<int(routes[r][2])-48;move++){
                start[1]--;
                for(int obs=0;obs<obstacle.size();obs++){
                    if(start[0] == obstacle[obs][0] && start[1] == obstacle[obs][1]){
                        start[1] = startArchive[1];
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    flag = 0;
                    break;
                }
            }
        }
        if(routes[r][0] == 'N' && (start[0] - int(routes[r][2]-48) >= 0)){
            for(int move=0;move<int(routes[r][2])-48;move++){
                start[0]--;
                for(int obs=0;obs<obstacle.size();obs++){
                    if(start[0] == obstacle[obs][0] && start[1] == obstacle[obs][1]){
                        start[0] = startArchive[0];
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    flag = 0;
                    break;
                }
            }
        }
        if(routes[r][0] == 'S' && (start[0] + int(routes[r][2]-48) < end_of_height)){
            for(int move=0;move<int(routes[r][2])-48;move++){
                start[0]++;
                for(int obs=0;obs<obstacle.size();obs++){
                    if(start[0] == obstacle[obs][0] && start[1] == obstacle[obs][1]){
                        start[0] = startArchive[0];
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    flag = 0;
                    break;
                }
            }
        }
    }

    vector<int> answer;
    answer.push_back(start[0]);
    answer.push_back(start[1]);
    return answer;
}

int main(){
    solution({"OSO", "OOO", "OXO", "OOO"},{"E 2","S 3","W 1"});
}
