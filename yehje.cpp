#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// void Description001();
// void Description002();
// void mission();
void Swap(char firstChar, char secondChar);
void Swap2(char* firstChar, char* secondChar);
void Description003();
void shuffle();
void ShuffleOnce(int* firstNumber, int* secondNumber);

int main()
{
    shuffle();
}

// void Description003()
// {
//     //포인터 직접 쳐보기
//     int number = 100;
//     int* ptrNumber = &number;

//     printf("number 변수의 주소는 : %p, %x / 할당된 값은 : %d \n",&number, &number, number);
//     printf("ptrNumber 변수의 주소는 : %p, %x / 할당된 값은 %p / 역참조한 값: %d \n",&ptrNumber,&ptrNumber,ptrNumber,*ptrNumber);
// }

void shuffle()
{
    //배열의 선언과 초기화
    int numbers[10] = {0,};
    for(int i = 0; i< 10; i++)
    {
        numbers[i] = i+1;
    }

    //배열의 출력
    printf("Shuffle 이전 \n");
    for(int i=0; i<10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    srand(time(NULL));
    
    //셔플 로직
    
    for(int i=0;i<10;i++)
    {
        int randomIndex1 = rand() % 10;
        int randomIndex2 = rand() % 10;
        ShuffleOnce(&numbers[randomIndex1],&numbers[randomIndex2]);
    }
    //셔플 후 배열의 출력
    printf("Shuffle 이후 \n");
    for(int i=0; i<10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
}

void ShuffleOnce(int* firstNumber, int* secondNumber)
{
    int temp = -1;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}//ShuffleOnce

void Swap(char firstChar, char secondChar)
{
    char temp = '\0';

    temp = firstChar;
    firstChar = secondChar;
    secondChar = temp;
}
void Swap2(char* firstChar, char* secondChar)
{
    char temp = '\0';

    temp = *firstChar;
    *firstChar = *secondChar;
    *secondChar = temp;
}

//문자열을 입력받아서 대문자 - 소문자 - 대문자 - 소문자 순으로 수정해서 출력하는 프로그램 (easy)
//위의 프로그램을 수정해서 거꾸로 뒤집어서 출력하는 프로그램 작성 (normal)

// 오류 : 초기화를 안시켰을때 쓰레기값 발생, 앞에서 선언안해줬을때, main에서 호출 안해준 경우
// sizeof()를 하게되면 배열 전체크기가 반환된다.
// 오류 : %s를 통해 printf해줄경우 마지막에 Null값이 들어있어서 -1처리 해줘야 한다.

/*
void mission()
{
    char str[300] = {0};
    char str2[300] ={0};
    bool t= true;

    cin >> str;

    for(int i = 0; i < sizeof(str); i++)
    {
        int b;
        b = str[i];

        if(t == true)
        {
            if((i%2)==0)
            {
                if(b >= 65 && b <= 90)
                {
                    str[i] = b;
                }
                    else if(b >= 97 && b <= 122)
                {
                    b = b-32;
                    str[i] = b;
                }
            }
            else if((i%2)==1)
            {
                if(b >= 65 && b <= 90)
                {
                    b = b+32;
                    str[i] = b;
                }
                    else if(b >= 97 && b <= 122)
                {
                    str[i] = b;
                }
            }
        }
        else if(t == false)
        {
            if((i%2)==0)
            {
                if(b >= 65 && b <= 90)
                {
                    b = b+32;
                    str[i] = b;
                }
                    else if(b >= 97 && b <= 122)
                {
                    str[i] = b;
                }
            }
            else if((i%2)==1)
            {
                if(b >= 65 && b <= 90)
                {
                    str[i] = b;
                }
                    else if(b >= 97 && b <= 122)
                {
                    b = b-32;
                    str[i] = b;
                }
            }
        }else
        {
            str[i]= NULL;
        }

        if(((b >= 65 && b <= 90)||(b >= 97 && b <= 122))==0)
        {   
            t = !t;
        }
    }


    cout << str << endl;
    //cout << sizeof(str); // 배열 크기가출력된다.(size of)

    int d = sizeof(str)-1;
    int f = 0;

    while(d>=0)
    {
        if(str[d]!=NULL)
        {
            str2[f] = str[d];
            printf("%c",str2[f]);
            f++;
        }
        d--;
    }
}
*/

// 대문자 소문자 변환
// void mission()
// {
//     char str[300];

//     cin >> str;

//     for(int i = 0; i < sizeof(str); i++)
//     {
//         int b;
//         b = str[i];
//         if(b >= 65 && b <= 90)
//         {
//             b = b+32;
//             str[i] = b;
//         }
//         else if(b >= 97 && b <= 122)
//         {
//             b = b-32;
//             str[i] = b;
//         }
//     }

//     cout << str;
    
// }

// [2]문자열 출력하기
// void Description002()
// {
//     char str[300] = {0, };
//     cout << "문자열을 입력하시오(200자 이내로) : ";
//     cin >> str;

//     printf("제대로 입력을 받았는지? -> %s \n", str);
// }

//[1]문자열 할당하기
// void Description001()
// {
//      //문자열을 이런식으로 입력해줄 수 있다.
//     char string_[15] = "Good morning!\n";

//     //선언과 동시에 초기화 할당을 하면 사이즈를 입력안해도 된다.
//     char string2[] = "Good morning! \n";
    
//     //
//     int numbers[10] = {0, };

//     printf("문자열 배열의 크기 %d\n", sizeof(string_));
//     printf("문자열 배열의 크기 %d\n", sizeof(string2));
//     printf("정수형 배열의 크기 %d\n", sizeof(numbers));
//     printf("정수형 배열의 길기 %d\n", sizeof(numbers)/sizeof(int));

//     string_[0] = 'g';
//     string_[1] = 'g';
//     string_[2] = 'g';
//     printf("정수형 배열의 크기 %d\n", sizeof(numbers));

//     bool isNullSameZero = false;
//     if(0 == '\0')
//     {
//         isNullSameZero = true;
//     }
//     else
//     {
//         isNullSameZero = false;
//     }
//     printf("Null은 0과 같은 값인가? %d \n", isNullSameZero);
//     //Null값이라는것이 

//     char string3[3];
//     string3[0] = 'H';
//     string3[1] = 'i';
//     string3[2] = '!';
//     //string3[3] = '\0';

//     char string4[4] = "Hi!";

//     printf("이건 string3값 : %s \n", string3);
//     printf("이건 string4값 : %s \n", string4);
// }