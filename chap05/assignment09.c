#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int ham, cola, fries;
    int set_cnt;
    int ham_s, cola_s, fries_s;
    int total = 0;

    /* 1) �Է� */
    printf("�ܹ��� ����? ");
    scanf("%d", &ham);
    printf("�ݶ� ����? ");
    scanf("%d", &cola);
    printf("����Ƣ�� ����? ");
    scanf("%d", &fries);

    /* 2) �ִ� ��Ʈ �� ��� */
    set_cnt = ham;
    if (cola < set_cnt) set_cnt = cola;
    if (fries < set_cnt) set_cnt = fries;
    printf("��Ʈ ����? %d\n", set_cnt);

    /* 3) ��ǰ ���� ���� */
    ham_s = ham - set_cnt;
    cola_s = cola - set_cnt;
    fries_s = fries - set_cnt;

    /* 4) ��꼭 ��� */
    printf("��ǰ��   �ܰ�   ����    �ݾ�\n");

    if (set_cnt > 0) {
        printf("%-6s %5d %5d %8d\n",
            "��Ʈ", 6500, set_cnt, 6500 * set_cnt);
        total += 6500 * set_cnt;
    }
    if (ham_s > 0) {
        printf("%-6s %5d %5d %8d\n",
            "�ܹ���", 4000, ham_s, 4000 * ham_s);
        total += 4000 * ham_s;
    }
    if (fries_s > 0) {
        printf("%-6s %5d %5d %8d\n",
            "����Ƣ��", 2000, fries_s, 2000 * fries_s);
        total += 2000 * fries_s;
    }
    if (cola_s > 0) {
        printf("%-6s %5d %5d %8d\n",
            "�ݶ�", 1500, cola_s, 1500 * cola_s);
        total += 1500 * cola_s;
    }

    printf("�հ� %d\n", total);
    return 0;
}