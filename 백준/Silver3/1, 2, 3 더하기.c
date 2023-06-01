#include <stdio.h>

int main(){
    int n,T;
    scanf("%d",&T);
    int dp[12];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<12;i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    
    for(int i=0;i<T;i++){
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
}