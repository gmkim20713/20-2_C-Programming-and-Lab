#include <stdio.h> /*헤더파일을 소스코드에 포함*/

#define MAX_i 5 /*매크로 상수 MAX_i; 모든 함수에서 변하지 않는 상수*/

struct ip_location { /*구조체 ip_location 정의; 멤버는 정수형 a,b,c,d와 문자열 nn*/
    int a, b, c, d;
    char nn[30];
};

int main(void) /*main 함수*/
{
    struct ip_location IL[MAX_i]; /*구조체 ip_location 선언; 여기서 구조체와 함께 선언된 변수는 문자열 IL*/
    int k, i; /*반복문에 사용될 변수 k, i*/

    printf("IP주소값 별명 5쌍을 입력하세요.\n"); /*"IP주소값 별명 5쌍을 입력하세요."를 출력*/

    for (k = 0; k < MAX_i; k++) { /*정수 k를 0으로 두고 한 번 반복할 때마다 1씩 증가시켜 5를 넘으면 반복문 종료*/
        int num = 0; /*조건문에 사용하기 위한 정수 num 선언 및 0으로 초기화*/
        while (1) {
            num = scanf("%d.%d.%d.%d", &IL[k].a, &IL[k].b, &IL[k].c, &IL[k].d); /*입력받은 주소값의 정수부분을 저장하고 num에 입력받은 정수의 개수를 저장*/
            scanf(" %s", &IL[k].nn); /*입력받은 주소값의 문자열 부분인 별명을 저장*/
            if (num == 4) { /*입력받은 정수가 4개일 때; 올바른 입력값*/
                break;
            }
            else { /*입력받은 정수가 4개가 아닐 때; 잘못된 입력값*/
                printf("잘못된 입력입니다.\n");
                continue;
            }
        }

    }

    printf("이화여자대학교에 속한 주소: \n"); /*"이화여자대학교에 속한 주소: "를 출력*/

    for (i = 0; i < MAX_i; i++) { /*정수 i를 0으로 두고 한 번 반복할 때마다 1씩 증가시켜 5를 넘으면 반복문 종료*/
        if (IL[i].a == 203 && IL[i].b == 255) { /*주소 값이 203.255로 시작할 경우*/
            printf(IL[i].nn); /*주소값의 별명을 출력*/
            printf("\n");
        }
    }

    return 0;
}