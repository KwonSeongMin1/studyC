//
//  1546.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int c;
    scanf("%d",&c);
    double score[c],max=0,sum=0;
    for(int i=0;i<c;i++){
        scanf("%lf",&score[i]);
        if(score[i]>max) max = score[i];
    }
    for(int i=0;i<c;i++){
        score[i] = score[i]/max*100;
        sum += score[i];
    }
    printf("%lf",sum/c);
}
