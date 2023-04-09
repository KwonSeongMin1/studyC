#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> numbers) {

    vector<int> result;

    for (int a = 0; a < numbers.size()-1; a++) {
        for (int b = a+1; b < numbers.size(); b++) {
            result.push_back(numbers[a] + numbers[b]);
        }
    }
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}