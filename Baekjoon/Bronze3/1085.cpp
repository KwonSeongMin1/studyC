//
//  1085.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
int main(){
    int x,y,w,h,min=1001;
    scanf("%d %d %d %d",&x,&y,&w,&h);
    if (x<min) min=x;   // 0 ~ x 거리
    if (y<min) min=y;   // 0 ~ y 거리
    if (w-x<min) min=w-x;   //  w ~ x 거리
    if (h-y<min) min=h-y;   // h ~ y 거리
    
    printf("%d",min);
}
