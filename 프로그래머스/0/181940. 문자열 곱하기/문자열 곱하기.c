/*
문자열 my_string과 정수 k가 주어질 때, my_string을 k번 반복한 문자열을 return 하는 solution 함수를 작성해 주세요.
1 ≤ my_string의 길이 ≤ 100
my_string은 영소문자로만 이루어져 있습니다.
1 ≤ k ≤ 100

my_string	k	result
"string"	3	"stringstringstring"
"love"	    10	"lovelovelovelovelovelovelovelovelovelove"

*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101


char* solution();

int main(){
    char my_string[MAX];
    int k;
    
    scanf("%s%d",my_string,&k);
    
    char* answer = solution(my_string,k);
    
    if(answer != NULL){
        printf("%s",answer);
        free(answer);
    }
}


char* solution(const char* my_string, int k) {
    int my_string_len = strlen(my_string);
    
    char* answer = (char*)malloc((my_string_len*k + 1) * sizeof(char));
    if(answer == NULL) return NULL;
    
    strcpy(answer, my_string);
    
    for(int i = 0; i<k; i++){
        for(int j = 0; j<my_string_len; j++){
        answer[(my_string_len * i)+j] = my_string[j];
        }
    }
    
    return answer;
}