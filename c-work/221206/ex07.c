#include <stdio.h>

// 증가 감소 연산자
int main(){
    int a = 10;

    a++; // a+1
    printf("a = %d\n", a);
    a--; // a-1
    printf("a = %d\n\n", a);
    printf("a = %d\n", a++); // 출력하고 나서 증가 ex 10으로 출력 및 값은 11
    printf("a = %d\n", a--); // 출력하고 나서 감소
    printf("a = %d\n\n", a);
    printf("a = %d\n", --a); // 감소하고 나서 출력
    printf("a = %d\n", ++a); // 증가하고 나서 출력
    printf("a = %d\n", a);

}