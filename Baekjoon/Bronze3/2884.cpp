//
//  2884.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int h,m;
    scanf("%d %d",&h,&m);
    m += h*60;  // 계산하기 쉽게 시간을 분으로 변경
    m -= 45;    // 45분 앞서게 바뀜
    if(m<0) m += 1440;  // 0시에서 23시로 바뀌는 케이스일 때 24시를 더해줌.
    
    printf("%d %d",m/60,m%60);
}
