#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n);

int main(){

    printf("%d \n", solution(5));

}

int solution(int n) {
    int answer = 0;
    int a = 1;
    int b = 2;
    int c = 0;
    if(n ==0){
        return 0;
    }

    while(b > a)
    {
        c = n % a;
        if(c==0)
        {
            c = 1;
            b = n / a;
            answer = answer + a;
            answer = answer + b;
        }
        a = a + 1;
        
    }
    
    return answer;
}