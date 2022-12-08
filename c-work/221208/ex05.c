// 심볼릭 함수 const
#include <stdio.h>

int main(){
    int a = 10;
    const int b = 20;

    a = 20;
    b = 30;
// 위 b에 // 붙여주면 실행이 됨 
    printf("a = %d",a);
    printf("b = %d",b);
}