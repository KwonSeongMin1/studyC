#include <stdio.h>
#include <string.h>

int main(){
    
    int n,flag,result=0;
    char word[101];
    scanf("%d",&n);
    char c;
    
    for(int i=0;i<n;i++){
        char alphabet[26] = {0};   // 알파벳 중복 검사
        flag = 1;
        scanf("%s",word);
        for(int j=0;j<strlen(word);j++){
            if(alphabet[word[j]-97] == 0){
                alphabet[word[j]-97] += 1;
            }
            else if(word[j] != c){
                    flag = 0;
                    break;
            }
            c = word[j];
        }
        if(flag) result+=1;
    }
    printf("%d",result);
}