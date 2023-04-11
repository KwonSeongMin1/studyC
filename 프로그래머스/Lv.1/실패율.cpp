#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) {

    int num;
    int zeroCheck;
    double fail;
    double player;
    double min;
    vector<double> clearPer;
    vector<int> answer;

    for (int s = 1; s <= N; s++) {
        fail = 0;
        player = 0;
        for (int i = 0; i < stages.size(); i++) {
            if (s < stages[i]) player++;
            else if( s == stages[i]){
                player++;
                fail++;
            }
        }
        if(player == 0){
            clearPer.push_back(0);
        }
        else{
            clearPer.push_back(fail / player);
        }
    }

    for (int i = 1; i <= N; i++) {
        num = 0;
        min = -0.1;
        for (int j = 0; j < clearPer.size(); j++) {
            if (clearPer[j] > min) {
                min = clearPer[j];
                num = j;
            }
        }
        answer.push_back(num+1);
        clearPer[num] = -1.0;
    }
    return answer;
}

int main() {

    //solution(5, { 2, 1, 2, 6, 2, 4, 3, 3 });
    solution(5, { 3,3,3 });
}
