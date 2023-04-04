//
//  8958.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
#include <string.h>
int main(){
    int t,score,combo;
    char quiz[81];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        score=0;
        combo=1;
        scanf("%s",quiz);
        for(int j=0;j<strlen(quiz);j++){
            if(quiz[j]=='O'){
                score += combo;
                combo += 1;
            }
            else combo = 1;
        }
        printf("%d\n",score);
    }
}
