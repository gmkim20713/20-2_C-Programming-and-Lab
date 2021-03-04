#include <stdio.h>
#include <string.h>

int main(void)
{
    short A, B, i;
    char buffer[100];

    printf("�� ���� ���� ���� A,B�� �Է��ϼ���:\n");
    scanf("%hd %hd", &A, &B);

    if (A > B || A <= 0 || B <= 0)
        printf("�߸��� �Է��Դϴ�.\n");

    else {
        for (i = A; i <= B; i++) {
            sprintf(buffer, "%hd", i);
            if (strchr(buffer, '3') || strchr(buffer, '6') || strchr(buffer, '9')) {
                sprintf(buffer, "¦!");
            }
            printf("%s ", buffer);
        }
    }

    return 0;
}

//32766������ �����۵�//
//0<A<=B=32767�̸� ���� ����, "¦!" ���� �ݺ�//
//B>32767�̸� 0<A<B�̾ "�߸��� �Է��Դϴ�" ���//
//B�� 9�ڸ� ��� �̻��̸� "¦!" �ݺ��ؼ� ��� - �ش� ������ ���ԵǴ� ������ ������ŭ �ݺ� ���//
//0<A=B�� ��쿡�� A�� B�� �ش��ϴ� ���� �ѹ� ���//
//A>B �Ǵ� A<=0 �Ǵ� B<=0�� ��쿡�� ������(9�ڸ� ��� �̻��̾ �ش�) "�߸��� �Է��Դϴ�" ���//
