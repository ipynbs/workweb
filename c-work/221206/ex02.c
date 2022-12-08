#include <stdio.h>

// void랑 int의 차이는 return이 있다없다 차이 뜻은 비어있다 doa는 그냥 이름 짓기
void doa(){
// \n는 줄바꿈 즉 main 함수를 먼저하고 그 후 void 부분실행
    printf("\ndoa");
}

int main(){
    printf("print intrger \n");
// %d가 2번 나오면 값도 2개 나와야함
    printf("%d %d", 10,20);

    doa();

    return 0;
}
