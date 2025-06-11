#include <stdio.h>

int main(void) {
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if(a>=1&& b<=100){
        
        printf("%d + %d = %d",a , b, a + b);
        
    } else{
        printf("다시입력하세요");
    }
    return 0;
    
}