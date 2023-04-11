#include <string>
#include <iostream>
#include <vector>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int tmpScore = 0;
    int count = 0;
    vector<int> score;

    for (int i = 0; i < dartResult.size(); i++) {
        if (isdigit(dartResult[i])) {
            if (tmpScore == 1 && isdigit(dartResult[i])) {
                tmpScore = 10;
                count++;
            }
            else {
                tmpScore = dartResult[i]-48;
                count++;
            }
        }
        else {
            if (dartResult[i] == 'S') {
                score.push_back(tmpScore);
            }
            else if (dartResult[i] == 'D') {
                score.push_back(tmpScore * tmpScore);
            }
            else if (dartResult[i] == 'T') {
                score.push_back(tmpScore * tmpScore * tmpScore);
            }
            else if (dartResult[i] == '*') {
                if (count == 1) {
                    score[0] *= 2;
                }
                else if (count == 2) {
                    score[0] *= 2;
                    score[1] *= 2;
                }
                else if (count == 3) {
                    score[1] *= 2;
                    score[2] *= 2;
                }
            }
            else if (dartResult[i] == '#') {
                score[count - 1] *= -1;
            }
            tmpScore = 0;
        }
        
    }
    answer += score[0] + score[1] + score[2];
    return answer;
}
int main() {
    solution("1S2D*3T");

}