#include <stdio.h>
int main(){
    int A,B,V,t;
    
    scanf("%d %d %d",&A,&B,&V);
    t = (V-B)/(A-B);
    if((V-B)%(A-B)!=0) t++;
    printf("%d",t);
}