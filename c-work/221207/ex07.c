// 문제 03-1-2
#include <stdio.h>

int main(){
    int n1,n2,n3;
    int result;

    printf("세 개의 정수를 입력 : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    result = n1*n2+n3;
    printf("%d * %d + %d = %d\n",n1,n2,n3,result);

    return 0;
}