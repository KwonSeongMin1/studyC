#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string new_id) {
    string answer = "";
    int count_comma = 0;
    for (int i = 0; i < new_id.size(); i++) {
            if ((new_id[i] >= 65 && new_id[i] <= 90) || (new_id[i] >= 97 && new_id[i] <= 122) || isdigit(new_id[i]) || new_id[i]=='-' || new_id[i]=='_' || new_id[i]=='.') { // 2
            new_id[i] = tolower(new_id[i]); // 1
            answer.push_back(new_id[i]);
            if (new_id[i] == '.') {     // 3
                count_comma += 1;
                if (count_comma == 2) {
                    answer.pop_back();
                    count_comma -= 1;
                }
            }
            else {
                count_comma = 0;
            }
        }
    }
    if (answer.front() == '.') answer.erase(0,1);
    if (answer.back() == '.') answer.pop_back(); // 4

    if (answer.size() == 0) answer.push_back('a'); // 5
    if (answer.size() > 15) {
        answer.erase(15); // 6
        while (answer.back() == '.') {
            answer.pop_back();
        }
    }
    while (answer.size() < 3) answer.push_back(answer.back()); // 7
    return answer;
}

int main() {
   /* cout << solution("...!@BaT#*..y.abcdefghijklm");*/
    string n = "abcdefg";
    cout << n.erase(4);
    return 0;
}