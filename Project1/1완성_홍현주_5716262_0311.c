#include<stdio.h>

void print_bit(int num) {
    unsigned int m = 1 << 31;

    for (int i = 0; i < 32; i++) {
        if (num & m) {
            printf("1");
        }
        else {
            printf("0");
        }
        m >>= 1;
    }
}

int main() {
    int num;

    printf("정수를 입력하세요 : ");
    if (scanf_s("%d", &num) != 1) {
        printf("입력 오류\n");
        return 1;
    }

    printf("입력된 정수의 32비트 표현 : ");
    print_bit(num);
    printf("\n");

    return 0;
}