#include <iostream>
using namespace std;

void SwapByRef2(int &ref1, int &ref2)
{
    int temp=ref1;
    ref1 = ref2;
    ref2 = temp;
    // Call-by-reference
}

void SwapByRef(int * ptr1, int * ptr2)
{
    int temp=*ptr1;
    *ptr1 = *ptr2;
    *ptr2=temp;
    //Call-by-reference
}

int main(void)
{
    int val1 = 10;
    int val2 = 20;
    SwapByRef2(val1,val2);
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;
    SwapByRef(&val1,&val2);
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;
    return 0;
}