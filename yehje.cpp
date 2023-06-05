// 포인터 공부

#include<iostream>

void AddOne(int localNumber1, int localNumber2);

int main(){
    int mainNumber1 = 0;
    int mainNumber2 = 0;

    AddOne(mainNumber1,mainNumber2);
    printf("number의 상태 [1] = %d, [2] = %d \n\n", mainNumber1,mainNumber2);
}

void AddOne(int localNumber1, int localNumber2){
    localNumber1 += 1;
    localNumber2 += 1;
}