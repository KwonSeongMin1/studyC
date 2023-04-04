//
//  1152.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
#include <string.h>

int main(){
    int count=1;
    char word[1000002];
    fgets(word,1000002,stdin);
    
    if(word[0]==' ' && strlen(word)==2){
        count -= 1;
        printf("%d",count);
        return 0;
    }
    
    for(int i=1;i<strlen(word)-2;i++){
        if(word[i]==' ') count += 1;
    }
    printf("%d",count);
}
