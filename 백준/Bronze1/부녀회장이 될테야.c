#include <stdio.h>

int test(int ,int);


int main(){
    int T,k,n;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++){
        scanf("%d %d",&k,&n);
        printf("%d\n",test(k,n));
    }
}

int test(int k,int n){
    int result=0;
    if(k==0){
        result = n;
    }
    else{
        for(int i=1;i<=n;i++){
            result += test(k-1,i);
        }
    }
    return result;
}