//
//  2475.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <cstdio>
int main(){
    int unique, ver=0;
    for(int i=0;i<5;i++){
        scanf("%d",&unique);
        ver += unique * unique;
    }
    printf("%d",ver%10);
}
