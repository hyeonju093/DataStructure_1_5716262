#include<stdio.h>

void print_bit(int num) {
    unsigned int m = 1 << 31;   // 32비트 정수의 최상위 비트를 나타내는 m 값 설정

    for (int i = 0; i < 32; i++) {  // 정수의 각 비트를 하나씩 검사하고 출력
        if (num & m) {
            printf("1");    // AND 연산 결과가 0이 아니면 1을 출력
        }
        else {
            printf("0");    // AND 연산 결과가 0이면 0을 출력
        }
        m >>= 1;    // m 값을 오른쪽으로 1비트 이동
    }
}

int main() {
    int num;

    printf("정수를 입력하세요 : ");
    if (scanf_s("%d", &num) != 1) {     // 사용자로부터 정수를 입력 받고 입력값이 정상인지 확인
        printf("입력 오류\n");      
        return 1;   // 프로그램 종료
    }

    printf("입력된 정수의 32비트 표현 : ");   // 입력된 정수를 32비트의 이진수로 출력
    print_bit(num);
    printf("\n");

    return 0;
}