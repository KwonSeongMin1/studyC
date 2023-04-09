#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    int flag;
    vector<int> answer;
    vector<char> ss;
    for (int i = 0; i < s.size(); i++) {

        flag = 1;
        ss.push_back(s[i]);
        for (int j = ss.size()-1; j >= 0; j--) {
            if (ss[j] == s[i] && j != ss.size()-1) {
                answer.push_back(ss.size() - j-1);
                flag = 0;
                break;
            }
        }
        if(flag) answer.push_back(-1);
    }
    return answer;
}

int main() {
    solution("banana");
}