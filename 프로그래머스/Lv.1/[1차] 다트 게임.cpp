#include <string>
#include <iostream>
using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int score = 0;
    int tmpScore = 0;
    for(int i=0;i<dartResult.size();i++){
        if(isdigit(dartResult[i])){
            if(tmpScore!=0){
                answer += tmpScore;
                score = 0;
                tmpScore = 0;
            }
            
            if(score == 1 && isdigit(dartResult[i])) score = 10;
            else{
                score = dartResult[i]-48;
            }
            
        }
        else if(dartResult[i] == 'S'){
            tmpScore = score;
        }
        else if(dartResult[i] == 'D'){
            score = score * score;
            tmpScore = score;
        }
        else if(dartResult[i] == 'T'){
            score = score * score * score;
            tmpScore = score;
        }
        else if(dartResult[i] == '*'){
            answer += tmpScore;
            answer *= 2;
            tmpScore = 0;
        }
        else if(dartResult[i] == '#'){
            tmpScore *= -1;
            answer -= tmpScore;
            tmpScore = 0;
        }
    }
    return answer;
}


int main(){
    solution("1S2D*3T");
}
