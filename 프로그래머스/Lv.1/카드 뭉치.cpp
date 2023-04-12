#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {

    int i = 0;
    int j = 0;
    int k = 0;

    string answer = "";
    while (answer == "") {
        if (cards1[i] == goal[k]) i++;
        else if (cards2[j] == goal[k]) j++;
        else {
            answer = "No";
        }
        k++;
        if (goal.size() == i + j) answer = "Yes";
    }

    
    return answer;
}

int main() {
    solution({"i", "drink", "water"
}, { "want", "to"
}, { "i", "want", "to", "drink"
});
}