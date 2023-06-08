#include <iostream>

int main()
{
    
}



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

