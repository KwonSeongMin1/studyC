#include <stdio.h>

int main(){
    long long N,x=1,y=0,dp[81];
    scanf("%lld",&N);
    
    dp[0] = 0;
    dp[1] = 1;
    
    for(int i=1;i<=N;i++){
        if(i%2==0) x+=dp[i];
        else y+=dp[i];
        dp[i+1] = dp[i] + dp[i-1];
    }
    printf("%lld",(x*2)+(y*2));
}