#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero_count = 0; // 알아볼 수 없는 번호
    int lotto_count = 0;  // 일치한 로또 수
    for (int i = 0; i < lottos.size(); i++) {
        if (lottos[i] == 0) {
            zero_count++;
            continue;
        }
        for (int j = 0; j < win_nums.size(); j++) {
            if (lottos[i] == win_nums[j]) {
                lotto_count++;
            }
        }
    }
    switch (lotto_count) {
    case 6:
        answer.push_back(1);
        answer.push_back(1);
        break;
    case 5:
        answer.push_back(2);
        answer.push_back(2);
        break;
    case 4:
        answer.push_back(3);
        answer.push_back(3);
        break;
    case 3:
        answer.push_back(4);
        answer.push_back(4);
        break;
    case 2:
        answer.push_back(5);
        answer.push_back(5);
        break;
    default:
        answer.push_back(6);
        answer.push_back(6);
        break;
    }

    answer[0] -= zero_count;

    return answer;
}