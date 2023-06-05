// 문제
// hard 출력되는 0을 엔터하나 입력할때 마다 오른쪽으로 한칸씩 이동하게하기
// very hard : 위의 프로그램을 수정해서 a로 0이 왼쪽, d로 0이 오른쪽 이동 가능하도록 만들기

#include <iostream>
#include <stdlib.h>
using namespace std;

void hard();
void hard2();
void veryHard();

int main()
{
    //hard();
   //hard2();
   veryHard();

}

void veryHard()
{
    char board[5] = {0,};
    char key = '0';
    
    // {board를 초기화 하는 로직
    for(int a = 0; a<5; a++)
    {
        for(int i = 0; i<5; i++)
        {
            board[i] = '*';
            if(i==a)
            {
            board[i] = '0';
            }
        } 
            // board를 초기화 하는 로직}
            
            // {board를 출력하는 로직
        for (int i = 0; i < 5; i++)
        {
            printf("%c ",board[i]);
        }

        cin>>key;
        
        if(key == 'A' || key =='a')
        {
            a = a - 2;
        }
        
        printf("\n\n");
    }
    
}

void hard2()
{
    char board[5] = {0,};
    
    // {board를 초기화 하는 로직
    for(int a = 0; a<5; a++)
    {
        for(int i = 0; i<5; i++)
        {
            board[i] = '*';
            if(i==a)
            {
            board[i] = '0';
            }
        } 
            // board를 초기화 하는 로직}
            
            // {board를 출력하는 로직
        for (int i = 0; i < 5; i++)
        {
            printf("%c ",board[i]);
        }
        getchar();
        printf("\n\n");
    }
    
}

void hard()
{
    char board[5] = {0,};
   int count = 1;

   while(count < 6)
    {
        getchar();

        // {board를 초기화 하는 로직
        switch(count)
        {
          case 1: 
            for(int i = 0; i<5; i++)
            {
                board[i] = '*';
                if(i==0)
                {
                board[i] = '0';
                }
            } 
            // board를 초기화 하는 로직}
            
            // {board를 출력하는 로직
            for (int i = 0; i < 5; i++)
            {
                printf("%c ",board[i]);
            }
            break;
            case 2: 
            for(int i = 0; i<5; i++)
            {
                board[i] = '*';
                if(i==1)
                {
                board[i] = '0';
                }
            } 
            // board를 초기화 하는 로직}
            
            // {board를 출력하는 로직
            for (int i = 0; i < 5; i++)
            {
                printf("%c ",board[i]);
            }
            break;
            case 3: 
            for(int i = 0; i<5; i++)
            {
                board[i] = '*';
                if(i==2)
                {
                board[i] = '0';
                }
            } 
            // board를 초기화 하는 로직}
            
            // {board를 출력하는 로직
            for (int i = 0; i < 5; i++)
            {
                printf("%c ",board[i]);
            }
            break;
            case 4: 
            for(int i = 0; i<5; i++)
            {
                board[i] = '*';
                if(i==3)
                {
                board[i] = '0';
                }
            } 
            // board를 초기화 하는 로직}
            
            // {board를 출력하는 로직
            for (int i = 0; i < 5; i++)
            {
                printf("%c ",board[i]);
            }
            break;
            case 5: 
            for(int i = 0; i<5; i++)
            {
                board[i] = '*';
                if(i==4)
                {
                board[i] = '0';
                }
            } 
            // board를 초기화 하는 로직}
            
            // {board를 출력하는 로직
            for (int i = 0; i < 5; i++)
            {
                printf("%c ",board[i]);
            }
            break;
            // board를 출력하는 로직}
        }
        count++;
    }

    printf("\n\n");
}