#include <stdio.h>

int main(){
    
    int n,w,h;
    scanf("%d",&n);
    
    int weight[n],height[n],rank[n];
    
    for(int i=0;i<n;i++){
        scanf("%d %d",&w,&h);
        weight[i] = w;
        height[i] = h;
        rank[i] = 1;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(weight[i] < weight[j] && height[i] < height[j]){
                rank[i]+=1;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",rank[i]);
    }
}