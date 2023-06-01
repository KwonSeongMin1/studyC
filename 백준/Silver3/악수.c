#include <stdio.h>

int main(){
    int n;
    int a,b,c;
    a=1,b=1;
    scanf("%d",&n);
    
    for(int i=2;i<=n;i++){
        c = a + b;
        c%=10;
        a = b;
        b = c;
    }
    printf("%d",c);
}
