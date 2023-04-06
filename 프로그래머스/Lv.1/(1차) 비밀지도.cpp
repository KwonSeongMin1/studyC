#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {

    vector<int> arr3;
    vector<string> answer;
    string arrCheck;
    
    // or 연산
    for(int i=0;i<arr1.size();i++){
        arr3.push_back(arr1[i]|arr2[i]);
    }

    // 한줄씩 # 이나 공백 넣기
    for(int i=0;i<arr3.size();i++){
        arrCheck="";
        while(1){
            if (arr3[i]%2==1) arrCheck.append("#");
            else arrCheck.append(" ");

            arr3[i] >>= 1;
            if(arr3[i]==1){
                arrCheck.append("#");
                break;
            }
            if(arr3[i]==0){
                arrCheck.append(" ");
                break;
            }
        }
        
        // 부족한 문자열 개수만큼 공백 넣기
        while(arrCheck.size() < n){
            arrCheck.append(" ");
        }
        
        // 역순으로 append했으니 뒤집어
        reverse(arrCheck.begin(),arrCheck.end());
        answer.push_back(arrCheck);
    }
    return answer;
}
