//
//  10871.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int n,x;
    int num;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++){
        scanf("%d",&num);
        if(x>num) printf("%d ",num);
    }
}
