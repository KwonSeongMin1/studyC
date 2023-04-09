#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string t, string p) {

    string tmp = "";    // t 쪼개는거 담을 공간
    int answer = 0;

    for (int i = 0; i < t.size() - p.size()+1; i++) {
        for (int j = i; j < i + p.size(); j++) {
            tmp += t[j];
        }
        if (tmp <= p) answer += 1;

        tmp = "";
    }



    return answer;
}

int main() {

    solution("3141592", "271");

    return 0;
}

