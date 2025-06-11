#include <stdio.h>
#define LEN_INPUT 21

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);

    for(int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z') {
            printf("%c", s1[i] - 32);  // 소문자 → 대문자
        } else if (s1[i] >= 'A' && s1[i] <= 'Z') {
            printf("%c", s1[i] + 32);  // 대문자 → 소문자
        }
    }

    printf("\n");
    return 0;
}