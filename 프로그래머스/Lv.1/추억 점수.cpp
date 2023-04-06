#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    int ans;
    for(int p=0;p<photo.size();p++){    // photo 개수만큼
        ans = 0;
        for(int n=0;n<name.size();n++){ // name 개수만큼
            for(int i=0;i<photo[p].size();i++){     //photo[p] 세부 개수
                if(photo[p][i] == name[n]){
                    ans += yearning[n];
                }
            }
        }
        answer.push_back(ans);
    }
    
    return answer;
}
//
//int main(){
//
//    vector<vector<string>> test = {{"1","2"},{"3","4"}};
//
//    cout << test[0][0];
//    cout << test.size();
//    cout << test[0].size();
//
//    return 0;
//    }
