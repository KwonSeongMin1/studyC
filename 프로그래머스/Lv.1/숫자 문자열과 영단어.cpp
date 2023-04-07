#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {

    long answer = 0;
    string judge = "";
    string num[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            answer += (s[i] - 48);
            answer *= 10;
        }
        else {
           judge += s[i];
           if (s.find(judge) < s.size()) {
               for (int k = 0; k < 10; k++) {
                   if (judge == num[k]) {
                       answer += k;
                       answer *= 10;
                       judge = "";
                       break;
                   }
                }
           }
        }
    }

    return answer/10;
}

int main() {
    solution("one4seveneight");
}