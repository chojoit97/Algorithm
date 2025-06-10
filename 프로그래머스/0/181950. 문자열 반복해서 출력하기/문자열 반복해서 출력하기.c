#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT]; //받을수있는 범위 \n까지 해서 11
    
    int a;
    scanf("%s %d", s1, &a);
    
    for(int i = 0; i < a; i++){
        printf("%s",s1);
    }
    
    
    return 0;
}