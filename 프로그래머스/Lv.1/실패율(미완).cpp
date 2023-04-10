#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int N, vector<int> stages) {

    int num;
    int zeroCheck;
    double fail;
    double clear = stages.size();
    double min;
    vector<double> clearPer;
    vector<int> answer;

    for (int s = 1; s <= N; s++) {
        fail = 0;
        for (int i = 0; i < stages.size(); i++) {
            if (s == stages[i]) fail++;
        }
        clearPer.push_back(fail / clear);
        clear -= fail;
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

    solution(3, { 3,3,2,2,1,1 });
    //solution(4, { 4,4,4,4,4 });
}