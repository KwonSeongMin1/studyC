//
//  10818.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int count,num,min=1000000,max=-1000000;
    scanf("%d",&count);
    
    for(int i=0;i<count;i++){
        scanf("%d",&num);
        if(num<min) min=num;
        if(num>max) max=num;
    }
    
    printf("%d %d",min,max);
}
