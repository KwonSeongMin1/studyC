//
//  2920.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int n;
    int ascend=1,descend=1;
    for(int i=1;i<=8;i++){
        scanf("%d",&n);
        
        if(i==n && ascend) ascend=1;
        else ascend=0;
        
        if(i==9-n && descend) descend=1;
        else descend=0;
    }
    
    if (ascend) printf("ascending");
    else if (descend) printf("descending");
    else printf("mixed");
}
