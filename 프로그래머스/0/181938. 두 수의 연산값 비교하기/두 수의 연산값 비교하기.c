#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int* solution(int a, int b) {
    
    int answer = 0;
    
    char strA[20];
    char strB[20];
    
    sprintf(strA, "%d", a);
    sprintf(strB, "%d", b);
    
    int sizeA = strlen(strA);
    int sizeB = strlen(strB);
    
    int answer1 = a*(int)pow(10,sizeB)+b;
    // int answer2 = a+b*(int)pow(10,sizeA);
    int answer3 = 2*a*b;
    
    // int answer = (answer1>answer2) ? answer1 : answer2;
    
    if (answer1 == answer3){
         answer = answer1;
    }else{
        answer = (answer1>answer3) ? answer1 : answer3;
    }
    
    return answer;
}