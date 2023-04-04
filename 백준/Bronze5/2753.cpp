//
//  2753.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    
    if(year%4==0 && year%100!=0){
        printf("1");
    }
    else if(year%400==0){
        printf("1");
    }
    else{
        printf("0");
    }
}
