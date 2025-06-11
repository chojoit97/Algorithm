#include <stdio.h>

#define LEN_INPUT 21

int main(void) {
    char s1[LEN_INPUT];
    char s2[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char s3[27] = "abcdefghijklmnopqrstuvwxyz";

    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; i++) {
        for (int k = 0; k < 27; k++) {
            if (s1[i] == s2[k]) {
                printf("%c", s3[k]);
                break;  // 대문자 변환 끝났으면 멈춤
            }
            if (s1[i] == s3[k]) {
                printf("%c", s2[k]);
                break;  // 소문자 변환 끝났으면 멈춤
            }
        }
    }

    printf("\n");
    return 0;
}