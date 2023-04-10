#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<int> box;
    sort(score.begin(), score.end());   // ����
    for (int i = score.size() - 1; i >= 0; i--) {
        box.push_back(score[i]);    // �ϴ� ���
        if (box.size() == m) {  // ���� ����
            answer += box[m - 1] * m;
            box.clear();      // ����ϰ� ����
        }
    }
    return answer;
}

int main() {
    solution(4, 3, { 4, 1, 2, 2, 4, 4, 4, 4, 1, 2, 4, 2 });
}