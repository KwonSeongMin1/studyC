//
//  10809.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
#include <string.h>

int main(){
    int alphabet[26];
    char word[101]; // 마지막 입력엔 null문자가 들어감.
    
    for(int i=0;i<26;i++){
        alphabet[i] = -1;
    }
    
    scanf("%s",word);
    for(int i=0;i<strlen(word);i++) { // strlen(word) -> 문자열 길이 (string.h)
        if(alphabet[word[i]-97] != -1){
            continue;
        }   // 이미 출현한 단어일시 continue
        alphabet[word[i]-97] = i;
        
    }
    
    for(int i=0;i<26;i++){
        printf("%d ",alphabet[i]);
    }
}
