//
//  2908.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    char num1[4], num2[4];
    int n1=0,n2=0;
    scanf("%s %s",num1,num2);

    n1 += (num1[2]-48)*100 + (num1[1]-48)*10 + (num1[0]-48);
    n2 += (num2[2]-48)*100 + (num2[1]-48)*10 + (num2[0]-48);
    
    
    if(n1 > n2) printf("%d",n1);
    else if(n1 < n2) printf("%d",n2);
}
