// 논리 연산자
// && 둘다 참이면 참, || 둘중한개라도 참이면 참, ! 한개가 참이면 거짓 거짓이면 참

#include <stdio.h>

int main(){

    int num1 = 10;
    int num2 = 12;

    int result1,result2,result3;

// 쉽게 보기위해선 밑에꺼 처럼 괄호 치기 (안해도 상관없)
    result1 = (num1 == 10) && (num2 == 12);
    result2 = (num1<12) || (num2 < 10);
    result3 = (!num1);

    printf("result1 = %d\n", result1);
    printf("result2 = %d\n", result2);
    printf("result3 = %d\n", result3);

}