#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    int flag;   // 판단
    string bab; // 애 옹알이하는거
    string ban_bob; // 이미 했던 옹알이
    
    vector<string> bablist = {"aya","ye","woo","ma"};
    for(int i=0;i<babbling.size();i++){
        bab = "";
        ban_bob = "";
        flag = 0;
        
        for(int j=0;j<babbling[i].size();j++){
            bab += babbling[i][j];
            
            for(int k=0;k<bablist.size();k++){
                if(bab==bablist[k]){    //옹알이 4개중에 판단
                    if(bab==ban_bob) break;
                    else{
                        ban_bob = bab;
                        bab = "";
                        flag = 1;
                        break;
                    }
                }
                else flag = 0;
            }
        }
        if(flag) answer += 1;
    }
    return answer;
}