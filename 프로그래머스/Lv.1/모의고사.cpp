#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    int stu1[5] = { 1,2,3,4,5 };
    int stu2[8] = { 2,1,2,3,2,4,2,5 };
    int stu3[10] = { 3,3,1,1,2,2,4,4,5,5 };

    int ok[3] = { 0, };

    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == stu1[i % 5]) ok[0]++;
        if (answers[i] == stu2[i % 7]) ok[1]++;
        if (answers[i] == stu3[i % 10]) ok[2]++;
    }

    for (int i = 0; i < 3; i++) {
        if (max({ ok[0],ok[1],ok[2] }) == ok[i]) answer.push_back(i + 1);
    }
    return answer;
}

int main() {
    solution({ 1,3,2,4,2 });
}