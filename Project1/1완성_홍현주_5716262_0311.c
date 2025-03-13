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

    printf("������ �Է��ϼ��� : ");
    if (scanf_s("%d", &num) != 1) {
        printf("�Է� ����\n");
        return 1;
    }

    printf("�Էµ� ������ 32��Ʈ ǥ�� : ");
    print_bit(num);
    printf("\n");

    return 0;
}