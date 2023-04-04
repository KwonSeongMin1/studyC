//
//  2439.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");    // 공백 반복
        }
        for(int k=1;k<=i;k++){
            printf("*");    // 별 반복
        }
        printf("\n");
    }
}
