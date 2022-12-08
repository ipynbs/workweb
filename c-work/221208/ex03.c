#include <stdio.h>

// 반지름을 입력 받아 원넓이를 출력하는 프로그램을 작성해보자

int main(){
    double rad = 0.0;

    printf("반지름 입력 :");
    scanf("%lf", &rad);
// %f.숫자 를 하면 그 소수점 자리까지 나타낸다
    printf("%f * %f * 3.14 = %f", rad, rad, (rad * rad * 3.14));

    return 0;
}