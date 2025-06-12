/*
길이가 같은 두 문자열 str1과 str2가 주어집니다.
두 문자열의 각 문자가 앞에서부터 서로 번갈아가면서 한 번씩 등장하는 문자열을 만들어 return 하는 solution 함수를 완성해 주세요.

1 ≤ str1의 길이 = str2의 길이 ≤ 10
str1과 str2는 알파벳 소문자로 이루어진 문자열입니다.

str1	str2	result
"aaaaa"	"bbbbb"	"ababababab"
*/

#include <stdio.h>//기본
#include <stdbool.h>//true false
#include <stdlib.h>// malloc free

#define MAX 11

char* solution();

int main(){
    char str1[MAX];
    char str2[MAX];
    
    scanf("%s%s",str1,str2);
    
    char* answer = solution(str1,str2);
    
    if(answer != NULL){
        printf("%s\n",answer);
    }
    else{
        printf("NO");
    }
    
    return 0;
    
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    int str1_len = strlen(str1);
    int str2_len = strlen(str2);
    
    int str_len = str1_len + str2_len;
    
    
    char* answer = (char*)malloc((str_len + 1) * sizeof(char));
    if(answer == NULL) return NULL;
    
    
    
    for(int i = 0; i< str1_len; i++){
        
        answer[i * 2] = str1[i];
        answer[i * 2 + 1] = str2[i];
       
    }
    answer[str_len] = '\0';  // 문자열 끝에 널문자 추가
    
    
    return answer;
}