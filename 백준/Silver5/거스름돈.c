#include <stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);
    
    while(n){
        if(n%5==0) n-=5;
        else n-=2;
        count++;
        
        if(n<0){
            count = -1;
            break;
        }
    }
    printf("%d",count);
}
