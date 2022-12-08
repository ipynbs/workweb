// 실수의 표현 오차 for (선언 조건 변화)

#include <stdio.h>

int main(){

    float num = 0.0;

    for (int i = 0; i < 100; i = i + 1)
    {
        num = num + 0.1;
    }

    printf("num = %f", num);
    
    return 0;
}
