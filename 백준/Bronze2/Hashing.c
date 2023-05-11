#include <stdio.h>
#define M 1234567891
int main(){
    int len;
    unsigned long long sqrt=1,num = 0;
    scanf("%d",&len);
    char word[51];
    scanf("%s",word);
    
    for(int i=0;i<len;i++){
        num = (num + ((word[i]-96) * sqrt)) % M;
        sqrt = (sqrt * 31) % M;
    }
    printf("%lld",num);
}