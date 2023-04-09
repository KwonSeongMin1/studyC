#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string answer_reverse;
    for (int i = 0; i < food.size(); i++) {
        for (int j = 0; j < food[i] / 2; j++) {
            answer += i+48;
        }
    }
    //for (int i = 0; i < food[1] / 2; i++) {
    //    answer += '1';
    //}
    //for (int j = 0; j < food[2] / 2; j++) {
    //    answer += '2';
    //}
    //for (int k = 0; k < food[3] / 2; k++) {
    //    answer += '3';
    //}
    answer_reverse = answer;
    answer += '0';
    reverse(answer_reverse.begin(), answer_reverse.end());
    answer += answer_reverse;
    return answer;
}

int main() {
    solution({ 1,3,4,6 });
}