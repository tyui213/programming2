/* ���ϸ�: assignment01.c

 * ����: �ش� ���� ���

 * �ۼ���: ������

 * ��¥: 2025.05.31.

 * ����: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_max_min(int arr[], int size) {
    int max = arr[0], min = arr[0];
    int max_idx = 0, min_idx = 0;

    printf("�迭: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            max_idx = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_idx = i;
        }
    }
    printf("\n�ִ�: �ε���=%d, ��=%d\n", max_idx, max);
    printf("�ּڰ�: �ε���=%d, ��=%d\n", min_idx, min);
}

int main(void) {
    int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };
    print_max_min(arr, 10);
    return 0;
}
