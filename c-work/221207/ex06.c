//문제 03-1-1
#include <stdio.h>

int main(){
    int n1,n2;

    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&n1,&n2);

    printf("%d + %d = %d\n",n1,n2,n1+n2);
    printf("%d - %d = %d",n1,n2,n1-n2);

    return 0;
}