#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// �Լ� ����
double distance(int x1, int y1, int x2, int y2);
void asd();

int main()
{
    asd();
    return 0;
}

// �Լ� ����
double distance(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void asd()
{
    int x_start, y_start, x_end, y_end;

    printf("������ ������ ��ǥ? ");
    scanf("%d %d", &x_start, &y_start);

    printf("������ ���� ��ǥ? ");
    scanf("%d %d", &x_end, &y_end);

    double dist = distance(x_start, y_start, x_end, y_end);
    printf("(%d, %d)~(%d, %d) ������ ����: %lf\n", x_start, y_start, x_end, y_end, dist);

}