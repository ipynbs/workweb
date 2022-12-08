// 문제 03-1-4

#include <stdio.h>

int main(){

    int n1,n2;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&n1,&n2);
    printf("몫 : %d, 나머지 : %d", n1/n2,n1%n2);

    return 0;
}