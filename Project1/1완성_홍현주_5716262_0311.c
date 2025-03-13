#include<stdio.h>

void print_bit(int num) {
    unsigned int m = 1 << 31;   // 32��Ʈ ������ �ֻ��� ��Ʈ�� ��Ÿ���� m �� ����

    for (int i = 0; i < 32; i++) {  // ������ �� ��Ʈ�� �ϳ��� �˻��ϰ� ���
        if (num & m) {
            printf("1");    // AND ���� ����� 0�� �ƴϸ� 1�� ���
        }
        else {
            printf("0");    // AND ���� ����� 0�̸� 0�� ���
        }
        m >>= 1;    // m ���� ���������� 1��Ʈ �̵�
    }
}

int main() {
    int num;

    printf("������ �Է��ϼ��� : ");
    if (scanf_s("%d", &num) != 1) {     // ����ڷκ��� ������ �Է� �ް� �Է°��� �������� Ȯ��
        printf("�Է� ����\n");      
        return 1;   // ���α׷� ����
    }

    printf("�Էµ� ������ 32��Ʈ ǥ�� : ");   // �Էµ� ������ 32��Ʈ�� �������� ���
    print_bit(num);
    printf("\n");

    return 0;
}