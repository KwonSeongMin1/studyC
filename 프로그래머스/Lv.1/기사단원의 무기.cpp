#include <string>
#include <vector>

using namespace std;

int solution(int number, int limit, int power) {
    
    
    int answer = 0;
    int count;
    vector<int> weapon_list;
    
    for(int i=1;i<=number;i++){
        count = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0) count++;
        }
        weapon_list.push_back(count);
    }
    
    for(int i=0;i<weapon_list.size();i++){
        if(weapon_list[i] > limit) answer += power;
        else answer += weapon_list[i];
    }
    return answer;
}

int main(){
    solution(5, 3, 2);
}
