#include <stdio.h>

int main() {
    int n;
    long long t[36] = {0};
    t[0]=1;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            t[i] += t[j] * t[i-1-j];
        }
    }
    printf("%lld",t[n]);
}