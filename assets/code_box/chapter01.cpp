#include <iostream>
int MyFunc(int num)
{
    num++;
    return num;
}

int MyFunc(int a, int b)
{
    return a+b;
}

int MyFuncTwo(int a = 3, int b = 7)
{
    return a+b;
}

inline int SQUARE(int x)
{
    return x*x;
}

int main(void)
{
    // int num = 20;
    // std::cout<<"Hello World!"<<std::endl;
    // std::cout<<"Hello "<<"World!"<<std::endl;
    // std::cout<<num<<' '<<'A';
    // std::cout<<' '<<3.14<<std::endl;
    // return 0;

    // int val1;
    // std::cout<<"첫번째 숫자 입력 : ";
    // std::cin>>val1;
    // int val2;
    // std::cout<<"두번째 숫자 입력 : ";
    // std::cin>>val2;
    // int result = val1 + val2;
    // std::cout<<"덧셈 결과 : "<<result<<std::endl;
    // return 0;

    // int val1, val2;
    // int result = 0;
    // std::cout<<"두개의 숫자 입력: ";
    // std::cin>>val1>>val2;
    // if(val1 < val2)
    // {
    //     for(int i = val1 + 1; i < val2; i++)
    //     {
    //         result+= i;
    //     }
    // }
    // else
    // {
    //     for(int i = val2+1; i < val1; i++)
    //     {
    //         result +=i;
    //     }
    // }
    // std::cout<<"두 수 사이의 정수 합: "<<result<<std::endl;
    // return 0;

    // char name[100];
    // char lang[200];
    // std::cout<<"What is u r name? : ";
    // std::cin>>name;
    // std::cout<<"what is u r favorite lang? : ";
    // std::cin>>lang;
    // std::cout<<"My name is "<<name<<". \n";
    // std::cout<<"My favorite lang is "<<lang<<". "<<std::endl;
    // return 0;

    // MyFunc(20);
    // MyFunc(30,40);
    // return 0;

    // std::cout<<MyFuncTwo()<<std::endl;

    std::cout<<SQUARE(13)<<std::endl;
    return 0;


}