#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {

    vector<int> HOF;
    vector<int> answer;

    for (int i = 0; i < score.size(); i++) {
        HOF.push_back(score[i]);
        sort(HOF.begin(), HOF.end());
        if (i < k) answer.push_back(HOF[0]);
        else answer.push_back(HOF[HOF.size() - k - 1]);
    }
    return answer;
}

int main() {
    solution(3, { 10, 100, 20, 150, 1, 100, 200 });
}