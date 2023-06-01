#include <stdio.h>

int main(){
    int n,T;
    long long dp[101];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 1;
    for(int i=3;i<=100;i++){
        dp[i] = dp[i-2] + dp[i-3];
    }

    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d",&n);
        printf("%lld\n",dp[n-1]);
    }
}