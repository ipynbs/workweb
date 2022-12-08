#include <stdio.h>

// 이 결과가 한글로 안나올시 chcp 65001을 치고 gcc 및 실행을 시키면 한글이 나온다
// 덧셈 프로그램 만들기
int main(){
    int num1 = 3;
    int num2 = 4;
    int result = num1 + num2;

    printf("덧셈결과 = %d\n", result);
    printf("%d + %d = %d\n", num1, num2, result);
    printf("%d과 %d의 합은 %d 입니다", num1, num2, result);

    return 0;
}