#include <stdio.h>

int main(){
    int n,num,count,result=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        count = 0;
        scanf("%d",&num);
        for(int j=1;j<=num;j++){
            if(num%j==0) count++;
        }
        if(count==2) result++;
    }
    printf("%d",result);
}