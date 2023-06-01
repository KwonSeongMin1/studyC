#include <stdio.h>

int main() {
    int n,k;
    int tmp[30];
    int pascal[30];
    scanf("%d %d",&n,&k);
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            if(j==0 || j==i-1) tmp[j] = 1;
            else tmp[j] = pascal[j-1] + pascal[j];
        }
        for(int j=0;j<i;j++){
            pascal[j] = tmp[j];
        }
    }
    
    printf("%d",pascal[k-1]);
    
    return 0;
}