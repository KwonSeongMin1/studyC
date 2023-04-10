#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = 0;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }

    bool* arr = new bool[sum + 1];
    for (int i = 0; i <= sum; i++) {
        arr[i] = true;
    }
    for (int i = 2; i <= sum; i++) {
        if (arr[i]) {
            for (int j = i + i; j <= sum; j += i) arr[j] = false;
        }
    }
    // 에라토스테네스의 체

    for (int i = 0; i < nums.size() - 2; i++) {
        for (int j = i + 1; j < nums.size() - 1; j++) {
            for (int k = j + 1; k < nums.size(); k++) {
                if (arr[nums[i] + nums[j] + nums[k]]) answer++;
            }
        }
    }


    return answer;
}

int main() {
    solution({ 1,2,3,4 });
}