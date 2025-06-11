#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


#define MAX_LEN 1001

char* solution(const char* my_string, const char* overwrite_string, int s) {
    
    int my_string_len = strlen(my_string);
    int overwrite_string_len = strlen(overwrite_string);
    
    //새로운 문자열 공간 동적 할당
    char* answer = (char*)malloc((my_string_len + 1) * sizeof(char));
    if (answer == NULL) return NULL;
    
    // 먼저 원본 복사
    strcpy(answer, my_string);
    
     for (int i = 0; i < overwrite_string_len; i++) {
        answer[s + i] = overwrite_string[i];
    }
    
    return answer;
}

int main(){
    char my_string[MAX_LEN];
    char overwrite_string[MAX_LEN];
    int start_index;
   
    // 입력 받기
    scanf("%s %s %d", my_string, overwrite_string, &start_index);
    
    // 문자열 덮어쓰기 함수 호출
    char* answer = solution(my_string, overwrite_string, start_index);

    
    // 결과 출력
    if (answer != NULL) {
        printf("%s\n", answer);
        free(answer);  // 동적 메모리 해제
    }
    return 0;
}










