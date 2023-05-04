#include <stdio.h>

int main(){
    
    int num[15000] = {0};
    int judge;  // 계산용
    int result; // selfnum 뽑기용
    
    for(int i=1;i<=10000;i++){
        num[i] = i;
    }
    
    for(int i=1;i<=10000;i++){
        result = i;
        judge = i;
        while(judge){
            result += judge%10;
            judge/=10;
        }
        num[result] = 0;
    }
    
    for(int i=1;i<=10000;i++){
        if(num[i]) printf("%d\n",num[i]);
    }

    return 0;
}
