//
//  2577.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int a,b,c,d,count[10] = { 0 };
    scanf("%d %d %d",&a,&b,&c);
    d = a * b * c;
    while(d){
        count[d%10] += 1;
        d/=10;
    }   // 가장 오른쪽에 있는 수 부터 차근차근 알아가기
    for(int i=0;i<10;i++){
        printf("%d\n",count[i]);
    }
}
