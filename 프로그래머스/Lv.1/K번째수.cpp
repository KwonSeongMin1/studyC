#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {

    vector<int> answer;

    for (int c = 0; c < commands.size(); c++) {
        vector<int> tmp;
        for (int i = commands[c][0]-1; i < commands[c][1]; i++) {
            tmp.push_back(array[i]);
        }
        sort(tmp.begin(), tmp.end());
        answer.push_back(tmp[commands[c][2]-1]);
    }

    
    return answer;
}
int main() {
    solution({ 1, 5, 2, 6, 3, 7, 4 }, { {2, 5, 3},{4, 4, 1},{1, 7, 3} });
}