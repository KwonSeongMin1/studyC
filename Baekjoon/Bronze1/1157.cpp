//
//  1157.cpp
//  study
//
//  Created by 권성민 on 2023/02/06.
//

#include <stdio.h>
#include <string.h>
int main(){
    char word[1000001];
    int alphabet[26]={ 0 },max=0,flag=0;
    char res;
    scanf("%s",word);
    
    unsigned long len = strlen(word);
    
    for(int i=0;i<len;i++){
        if(word[i] > 95) alphabet[word[i]-'a'] += 1;
        else alphabet[word[i]-'A'] += 1;
    }
    
    for(int i=0;i<26;i++){
        if(alphabet[i]>max){
            max = alphabet[i];
            res = 65+i;
            flag = 0;
        }
        else if(alphabet[i] == max && alphabet[i]) flag = 1;
    }
    if(flag) printf("?");
    else printf("%c",res);
}
