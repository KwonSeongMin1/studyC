#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    
    int day = 0;
    string answer;
    for (int i = 0; i < a; i++){
        if (i == 1 || i == 3 || i == 5 | i == 7 || i == 8 || i == 10 || i == 12) day += 31;
        if (i == 2) day += 29;
        if (i == 4 || i == 6 || i == 9 || i == 11) day += 30;
    }
    day += b;

    if (day % 7 == 1) answer = "TUE";

    return answer;
}