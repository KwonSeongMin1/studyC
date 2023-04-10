#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<int> box;
    sort(score.begin(), score.end());   // 정렬
    for (int i = score.size() - 1; i >= 0; i--) {
        box.push_back(score[i]);    // 일단 담고
        if (box.size() == m) {  // 개수 차면
            answer += box[m - 1] * m;
            box.clear();      // 계산하고 비우기
        }
    }
    return answer;
}

int main() {
    solution(4, 3, { 4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2 });
}