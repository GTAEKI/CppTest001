#include<iostream>

void rec(int n);


int main()
{
	rec(1);
}

void rec(int n)
{
	printf("n = %d", n);
	rec(n+1);
}



// #include <iostream>

// void Desc003();

// int main()
// {
//     Desc003();
// }

// // new 동적할당
// void Desc003()
// {
//     /* //배열에 바로 상수를 입력받아서 배열크기를 정하는것은 안된다. 그래서 동적할당이 필요하다.
//     int userInput = -1;
//     printf("원하는 크기만큼 배열을 만들겠음. 크기를 입력하시오 : ");
//     scanf("%d", &userInput);

//     int numbers[userInput] = { 0, };
//     int* numbers2 = new int[10];
//     */

//     int userInput = -1;
//     printf("원하는 크기만큼 배열을 만들겠음. 크기를 입력하시오 : ");
//     scanf("%d", &userInput);

//     int numbers[10] = { 0, }; // 여기는 스택에 저장되는 부분이다.
//     int* numbers2 = new int[userInput]; // 여기는 힙에 저장되는 부분이다.힙에 배열을 할당했다. 프로그램 종료시 해제를 해줘야함

//     for(int i = 0; i < 10; i++)
//     {
//         numbers2[i] = i + 1;
//     }

//     for(int i = 0; i < 10; i++)
//     {
//         printf("i값 : %d \n", numbers2[i]);
//     }
//     printf("\n\n");

//     delete[] numbers2; //프로그램 종료시 해제를 하는것.
// }


//혼자공부
/*
#include <iostream>

//이중배열과 포인터
int main()
{
    int arr[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};

    
    for(int(*ptr)[5]=arr; ptr < arr+3; ptr++)
    {
        for(int *ptr2 = *ptr; ptr2 < *ptr+5; ptr2++ )
        {
            printf("%2d ",*ptr2);
        }
        printf("\n");
    }
}
*/



// 0캐릭터 옮기기 예제
/*
#include <iostream>
using namespace std;

void Desc002();
void swap(int*a,int*b);

int main()
{
    Desc002();
}

//다차원 배열
void Desc002()
{
    char char2_[5][5] = //행[6], 열[5]
    {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
    };

    char userInput = '0';
    

    char* ptr = &char2_[2][2];

    while(1)
    {
        for(int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++)
            {   
                char2_[y][x] = '*';
            }
        }

        if(userInput == 'w'||userInput == 'W')
        {
            *(ptr-5) = '0';
            ptr = (ptr-5);       
        }
        else if(userInput == 's'||userInput == 'S')
        {
            *(ptr+5) = '0';
            ptr = (ptr+5);
        }
        else if(userInput == 'a'||userInput == 'A')
        {
            *(ptr-1) = '0';
            ptr = (ptr-1);
        }
        else if(userInput == 'd'||userInput == 'D')
        {
            *(ptr+1) = '0';
            ptr = (ptr+1);
        }
        else
        {
            *ptr = '0';
            ptr = ptr;
        }

        userInput = '0';

        // //출력부분
        // for(int i = 0; i < 25; i++)
        // {
        //     printf("%c ", char_[i]);
        //     if(i%5 == 4)
        //     {
        //         printf("\n");
        //     }
        // }

        for(int y = 0; y < 5; y++)
        {
            for (int x = 0; x < 5; x++)
            {
                printf("%c ", char2_[y][x]);
            }
            printf("\n");
        }

        printf("\n");

        cin >> userInput;
    }
}

void swap(int*a,int*b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/



////////////정렬 공부하기
//삽입정렬
/*
#include <iostream>

void bubbleSort(int* ptr, int sortSize);
void swap(int*a,int*b);
void insertSort(int* ptr, int sortSize);


int main()
{
    int sort1[5]= {99,59,36,21,17};
    int sortSize = sizeof(sort1)/sizeof(int);

    insertSort(sort1,sortSize);

    for(int i = 0; i < sortSize; i++)
    {
        printf("%d ",sort1[i]);
    }
    printf("\n");
}

void insertSort(int* ptr, int sortSize)
{
    for(int i = 0; i < sortSize-1; i++)
    {
        //for(int i = 0; i < sortSize-j; i++)
        {
            if(*(ptr+i) > *(ptr+i+1))
            {
                bubbleSort(ptr,i+2);
            }
        }
    }
}

void bubbleSort(int* ptr, int sortSize)
{
    for(int j = 1; j < sortSize; j++)
    {
        for(int i = sortSize-1; i > 0; i--)
        {
            if(*(ptr+i) < *(ptr+i-1))
            {
                swap(ptr+i,ptr+i-1);
            }
        }
    }
}

void swap(int*a,int*b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/




//버블정렬
/*
#include <iostream>

void bubbleSort(int* ptr, int sortSize);
void swap(int*a,int*b);


int main()
{
    int sort1[5]= {99,59,36,21,17};

    int sortSize = sizeof(sort1)/sizeof(int);
    bubbleSort(sort1,sortSize);

    for(int i = 0; i < sortSize; i++)
    {
        printf("%d ",sort1[i]);
    }
    printf("\n");
}

void bubbleSort(int* ptr, int sortSize)
{
    for(int j = 1; j < sortSize; j++)
    {
        for(int i = 0; i < sortSize-j; i++)
        {
            if(*(ptr+i) > *(ptr+i+1))
            {
                swap(ptr+i,ptr+i+1);
            }
        }
    }
}
void swap(int*a,int*b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/
//버블정렬


//선택정렬
/*
#include <iostream>
using namespace std;

void swap2(int* a,int* b);

int main()
{
     int sort1[5] = {99,21,36,59,17};
    // int sort1[5];

     int sortSize = sizeof(sort1)/sizeof(int);

    // for(int i = 0; i < sortSize; i++)
    // {
    //     cin >> sort1[i];
    // }

    for(int i = 0; i < sortSize; i++)
    {
        for(int j = i; j < sortSize; j++)
        {
            if(sort1[i]>sort1[j])
            {
                swap2(&sort1[i],&sort1[j]);
            }
        }
    }

    for(int i = 0; i < sortSize; i++)
    {
        printf("%d ",sort1[i]);
    }
    printf("\n");
}

void swap2(int* a,int* b)
{
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
*/
//선택정렬






///////////배열 함수로 넘기기
/*
#include <iostream>
using namespace std;

void ArrayFunc(int* ptrArray);
void ArrayFunc2(int* ptrArray, int arraySize);
void ArrayFunc3(int array_[], int arraySize);

int main()
{
    int numbers[10] = {0,};
    for(int i = 0; i < 10; i++)
    {
        numbers[i] = (i+1)*10;
    }

    for(int i = 0; i<10; i++)
    {
        printf("%d ",numbers[i]);
    }
    printf("\n");

    int *ptrNumber = &numbers[2];

    printf("3번째 자리에 있는 값 + 1 -> %d \n", *(ptrNumber+1)); //40
    printf("3번째 자리에 있는 값 + 1 -> %d \n", *ptrNumber+1); // 31

    //{numbers와 numbers[0]의 주소는 같다.
    printf("numbers 가 들고 있는 값 -> %p \n", numbers); 
    printf("numbers[0]의 주소 값 -> %p \n", &numbers[0]);
    //numbers와 numbers[0]의 주소는 같다.}

    //ArrayFunc(numbers);
    //ArrayFunc2(numbers, 10); //sizeof를 주면 안되고, 직접 배열 크기를 넣어줘야함.

    ArrayFunc3(numbers, 10);
}

void ArrayFunc3(int array_[], int arraySize)
{   
    printf("함수에서 찍어 본 numbers의 size : %d \n", sizeof(array_));
    for(int i = 0; i<arraySize; i++)
    {
        printf("array[%d]의 값 : %d \n",i, array_[i]);
    }   
}

void ArrayFunc(int* ptrArray)
{   
    //배열을 역참조(포인터)로 받게되면 배열의 크기를 체크할 수 없다.
    //다른 메모리를 덮어써버릴 수도있다.(배열의 크기를 넘어서는 값을 참조하게 되면)
    //10
    printf("ptrArray 역참조 값 : %d \n", *(ptrArray));
    //100
    printf("ptrArray + 1 주소의 역참조 값 : %d \n", *(ptrArray+9));
    //357498393 (배열크기 10을 초과한 값, 어떤값이 있을지 알 수 없다.)
    printf("ptrArray + 1 주소의 역참조 값 : %d \n", *(ptrArray+10));
    //사이즈가 3이나 초과하여 역시나 어떤값이 있을지 알 수 없다.
    printf("ptrArray + 1 주소의 역참조 값 : %d \n", *(ptrArray+12));

}
// 배열은 사이즈를 넘겨서 처리해줘야함.
void ArrayFunc2(int* ptrArray, int arraySize)
{   
    for(int i = 0; i<arraySize; i++)
    {
        printf("ptrArray 역참조 값 : %d \n", *(ptrArray+i));
    }   
}
*/

