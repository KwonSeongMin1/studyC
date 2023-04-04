//
//  2562.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int num,max=0,count=0;
    for(int i=0;i<9;i++){
        scanf("%d",&num);
        if(num>max){
            max = num;
            count = i+1;
        }
    }
    printf("%d\n%d",max,count);
}
