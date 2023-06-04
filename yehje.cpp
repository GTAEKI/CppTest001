#include <iostream>
#include <time.h> //시간
#include <stdlib.h> //rand,srand
#include <unistd.h> // <windows.h> 대체

int main(){
    setbuf(stdout, NULL); // 버퍼링 비활성화

    int dice = 0;
    srand(time(NULL));

    printf("주사위의 숫자는 : ");

    getchar();

    

    for(int count = 0; count < 3; count++){
        sleep(1);
        dice = rand()%6+1;
        printf("%d ",dice);

    }
    printf("\n");
}
