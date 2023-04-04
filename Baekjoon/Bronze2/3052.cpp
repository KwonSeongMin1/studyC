//
//  3052.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int num,check[42]={ 0 },count=0;
    for(int i=0;i<10;i++){
        scanf("%d",&num);
        check[num%42] += 1; // 나머지 숫자의 위치 배열에 카운팅
    }
    for(int i=0;i<42;i++){
        if(check[i]) count += 1;    // 나머지 개수 체크
    }
    printf("%d",count);
}
