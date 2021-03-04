#include <stdio.h> /*헤더파일을 소스코드에 포함*/
#include <string.h> 

#define BUFFER_SIZE 30 /*매크로 상수 BUFFER_SIZE 30; 모든 함수에서 변하지 않는 상수*/

int i = 0, j = 0; /*전역변수 정수형 i, j 선언 및 0으로 초기화*/
char given_str[BUFFER_SIZE] = { 0 }; /*문자열 given_str 선언 및 초기화; 사용자가 입력하는 문자열*/
char caps_in_str[BUFFER_SIZE] = { 0 }; /*문자열 caps_in_str 선언 및 초기화; 입력받은 문자열 속 대문자*/

void find_caps(const char* str, char* caps); /*함수 find_caps; 문자열 속 대문자를 찾아 저장하는 함수*/

int main(void) /*main 함수*/
{
    printf("문자열을 입력하세요.\n"); /*"문자열을 입력하세요."를 출력*/
    scanf("%s", &given_str); /*입력받은 문자열 given_str에 저장*/

    find_caps(given_str, caps_in_str); /*함수 find_caps에 given_str, caps_in_str 대입*/

    if (strlen(caps_in_str) == 0) { /*caps_in_str에 저장된 값이 없을 경우; 대문자가 없는 경우*/
        printf("%s에서 대문자는 없습니다.\n", given_str);
    }
    else { /*caps_in_str에 저장된 값이 있을 경우; 대문자가 있는 경우*/
        printf("%s에서 대문자는 %s입니다.\n", given_str, caps_in_str);

        return 0;
    }
}

void find_caps(const char* str, char* caps) {
    if (i < strlen(str)) { 
        if ((str[i] >= 'A' && str[i] <= 'Z')) { /*문자열에 대문자가 있는 지 확인해서 조건이 참일 경우 실행*/
            caps[j] = str[i];
            i++;
            j++;
            find_caps(str, caps); /*재귀함수; find_caps함수 안에 그 함수를 또 사용하여 명령문 반복*/
        }
        else { /*문자열에 대문자가 없는 경우 실행*/
            i++;
            find_caps(str, caps); /*재귀함수; find_caps함수 안에 그 함수를 또 사용하여 명령문 반복*/
        }
    }
}