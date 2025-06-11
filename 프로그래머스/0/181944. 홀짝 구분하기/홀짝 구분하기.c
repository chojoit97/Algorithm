#include <stdio.h>
//삼항연산자로 해보자.
int main(void) {
    int a;
    
    scanf("%d", &a);
    if(a >= 1 && a <= 1000){
        switch(a%2){
            case 0: printf("%d is even",a);break; 
            case 1: printf("%d is odd",a);break; 
            default:break;
        }
    }
    return 0;
}