/* ���ϸ�: assignment01.c

 * ����: ù ��° ���� ���� ������ �Է¹޾Ƽ� �迭�� ä��� ����ϴ� ���α׷��� �ۼ�

 * �ۼ���: ������

 * ��¥: 2025.05.31.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_arithmetic_sequence(int first, int diff) {
    int arr[10];
    arr[0] = first;
    printf("��������: %d ", arr[0]);
    for (int i = 1; i < 10; i++) {
        arr[i] = arr[i - 1] + diff;
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void print()
{
    int first, diff;
    printf("ù ��° ��? ");
    scanf("%d", &first);
    printf("����? ");
    scanf("%d", &diff);
    print_arithmetic_sequence(first, diff);
}

int main(void) 
{
    print();
    return 0;
}
