#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int judge = 1000001;
    for(int a=0;a<arr.size();a++){
        answer.push_back(arr[a]);
        if(judge == arr[a]) answer.pop_back();
        else judge = arr[a];
    }
    return answer;
}

// arr.erase(unique(arr.begin(), arr.end()),arr.end());
// erase() + unique()
