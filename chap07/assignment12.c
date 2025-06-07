/* ���ϸ�: assignment12.c

 * ����: ����ǥ ���� ���α׷��� �ۼ�

 * �ۼ���: ȫ�浿

 * ��¥: 2025.05.31.

 * ����: v1.0

 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �¼� ���� ��� �Լ�
void print_seats(int seats[], int size) {
    printf("���� �¼�: [ ");
    for (int i = 0; i < size; i++) {
        if (seats[i] == 0)
            printf("0");
        else
            printf("X");
    }
    printf(" ]\n");
}

// �¼� ���� �Լ� (���ӵ� �ڸ� ����, ���� �� 1, ���� �� 0 ��ȯ)
int reserve_seats(int seats[], int size, int cnt) {
    int i, j, found;
    for (i = 0; i <= size - cnt; i++) {
        found = 1;
        for (j = 0; j < cnt; j++) {
            if (seats[i + j] == 1) {
                found = 0;
                break;
            }
        }
        if (found) {
            for (j = 0; j < cnt; j++) {
                seats[i + j] = 1;
                printf("%d ", i + j + 1); // �¼� ��ȣ 1������ ���
            }
            printf("�� �¼��� �����߽��ϴ�.\n");
            return 1;
        }
    }
    printf("�� �̻� ���� �Ұ��մϴ�.\n");
    return 0;
}

int main(void) 
{
    int seats[10] = { 0 };
    int num;
    while (1) {
        print_seats(seats, 10);
        printf("������ �¼���? ");
        scanf("%d", &num);
        if (num < 1 || num > 10) break;
        if (!reserve_seats(seats, 10, num))
            break;
    }
    return 0;
}
