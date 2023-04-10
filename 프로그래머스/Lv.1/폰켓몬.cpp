#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 1;
    int different = nums[0];
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++) {
        if (different != nums[i]) {
            different = nums[i];
            answer += 1;
        }
        if (answer == nums.size() / 2) break;
    }
    return answer;
}

int main() {
    solution({ 3,3,3,3,3,3 });
}