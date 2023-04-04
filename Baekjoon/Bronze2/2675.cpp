//
//  2675.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
#include <string.h>
int main(){
    int t,r;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char w[21];
        scanf("%d %s",&r,w);
        for(int j=0;j<strlen(w);j++){
            for(int k=0;k<r;k++){
                printf("%c",w[j]);
            }
        }
        printf("\n");
    }
}
