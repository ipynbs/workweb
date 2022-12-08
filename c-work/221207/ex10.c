// 문제 03-1-5
#include <stdio.h>

int main(){

    int n1,n2,n3;
    int result;
    printf("세 개의 정수 입력 : ");
    scanf("%d %d %d",&n1,&n2,&n3);
   result = (n1-n2) * (n2+n3) * (n3%n1);
    printf("결과 : %d\n", result);
    // or printf("num1 = %d num2 = %d num3 = %d\n",num1, num2, num3);
    // printf("(%d-%d)*...*(%d%%%d) = %d",num1, num2, num2,n3,n3,n1,(n1-n2)*...*(n3%n1));
    // 위 result 와 printf 부분을 합친것
    return 0;
}