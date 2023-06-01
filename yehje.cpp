#include <iostream>
#include <stdio.h> 

//유저에게 사이즈를 입력받아서 *로 정사각형 출력하기
int main(){
    int number,number2,number3;
    printf("정사각형 공장입니다.\n");
    printf("3 ~ 10사이 숫자를 입력해주세요:");
    scanf("%d",&number);
    if(number < 3){
        printf("다시 시작하세요\n");
        number = 0;
    }else if(number > 10){
        printf("다시 시작하세요\n");
        number = 0;
    }

    number2 = number;
    number3 = number;

    while(1 <= number){
        while(1<=number2){
            printf("* ");
            number2 -= 1;
        }
        if(number2 < 1){
            number2 = number3;
        }
        printf("\n");
        number -= 1;
    }
}