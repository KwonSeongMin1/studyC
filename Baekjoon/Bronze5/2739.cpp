//
//  2739.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=9;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
