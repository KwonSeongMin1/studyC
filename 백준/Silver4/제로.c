#include <stdio.h>
#include <string.h>

int main(){
    
    int n,input,sum=0;
    int s = 0;
    scanf("%d",&n);
    int stack[n];
    for(int i=0;i<n;i++){
        stack[i] = 0;   //initialize
    }
    
    for(int i=0;i<n;i++){
        scanf("%d",&input);
        if(input){
            stack[s] = input;
            s+=1;
        }
        else{
            s-=1;
            stack[s] = 0;
        }
    }
    for(int i=0;i<n;i++){
        sum += stack[i];
    }
    printf("%d",sum);
}