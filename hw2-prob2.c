#include <stdio.h> /*��������� �ҽ��ڵ忡 ����*/
#include <string.h> 

#define BUFFER_SIZE 30 /*��ũ�� ��� BUFFER_SIZE 30; ��� �Լ����� ������ �ʴ� ���*/

int i = 0, j = 0; /*�������� ������ i, j ���� �� 0���� �ʱ�ȭ*/
char given_str[BUFFER_SIZE] = { 0 }; /*���ڿ� given_str ���� �� �ʱ�ȭ; ����ڰ� �Է��ϴ� ���ڿ�*/
char caps_in_str[BUFFER_SIZE] = { 0 }; /*���ڿ� caps_in_str ���� �� �ʱ�ȭ; �Է¹��� ���ڿ� �� �빮��*/

void find_caps(const char* str, char* caps); /*�Լ� find_caps; ���ڿ� �� �빮�ڸ� ã�� �����ϴ� �Լ�*/

int main(void) /*main �Լ�*/
{
    printf("���ڿ��� �Է��ϼ���.\n"); /*"���ڿ��� �Է��ϼ���."�� ���*/
    scanf("%s", &given_str); /*�Է¹��� ���ڿ� given_str�� ����*/

    find_caps(given_str, caps_in_str); /*�Լ� find_caps�� given_str, caps_in_str ����*/

    if (strlen(caps_in_str) == 0) { /*caps_in_str�� ����� ���� ���� ���; �빮�ڰ� ���� ���*/
        printf("%s���� �빮�ڴ� �����ϴ�.\n", given_str);
    }
    else { /*caps_in_str�� ����� ���� ���� ���; �빮�ڰ� �ִ� ���*/
        printf("%s���� �빮�ڴ� %s�Դϴ�.\n", given_str, caps_in_str);

        return 0;
    }
}

void find_caps(const char* str, char* caps) {
    if (i < strlen(str)) { 
        if ((str[i] >= 'A' && str[i] <= 'Z')) { /*���ڿ��� �빮�ڰ� �ִ� �� Ȯ���ؼ� ������ ���� ��� ����*/
            caps[j] = str[i];
            i++;
            j++;
            find_caps(str, caps); /*����Լ�; find_caps�Լ� �ȿ� �� �Լ��� �� ����Ͽ� ��ɹ� �ݺ�*/
        }
        else { /*���ڿ��� �빮�ڰ� ���� ��� ����*/
            i++;
            find_caps(str, caps); /*����Լ�; find_caps�Լ� �ȿ� �� �Լ��� �� ����Ͽ� ��ɹ� �ݺ�*/
        }
    }
}