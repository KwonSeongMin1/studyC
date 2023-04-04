//
//  2438.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <cstdio>
int main(){
    int count;
    
    scanf("%d",&count);
    
    for(int i=1;i<=count;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}
