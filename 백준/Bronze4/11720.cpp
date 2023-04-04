//
//  11720.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>

int main(){
    int n,tmp,sum=0;
    scanf("%d",&n);
    char num[n];
    scanf("%s",num);
    for(int i=0;i<n;i++){
        sum += num[i]-48;
    }
    printf("%d",sum);
}
