#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void check_point_in_rectangle(void) {
    int left, top, right, bottom;
    int x, y;

    printf("���� ������ �»���� (left, top)? ");
    scanf("%d %d", &left, &top);

    printf("���� ������ ���ϴ��� (right, bottom)? ");
    scanf("%d %d", &right, &bottom);

    printf("���� ��ǥ (x, y)? ");
    scanf("%d %d", &x, &y);

    if (x >= left && x <= right && y >= top && y <= bottom) {
        printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
    }
    else {
        printf("���簢�� ����� ���� ���� ���� ���Դϴ�.\n");
    }
}

int main() {
    check_point_in_rectangle();
    return 0;
}