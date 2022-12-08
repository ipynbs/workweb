#include <stdio.h>

// 복합 대입 연산 a+=b와 a+b= 과 똑같다
int main(){

    int a = 3;
    int b = 2;

    printf("%d += %d\n", a, b);
    a += b;
    printf("a = %d\n",a);

    printf("%d *= %d\n", a, b);
    a *= b;
    printf("a = %d\n", a);

    return 0;
}