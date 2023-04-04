//
//  10952.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int a,b;
    while(1){
        scanf("%d %d",&a,&b);
        if(!a&&!b) break;
        printf("%d\n",a+b);
    }
}
