#include <iostream>
#include <vector>
#include <utility> // pair

using namespace std;

// 동적 계획법

int pibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {

        return pibonacci(n-1) + pibonacci(n-2);
    }
}

int main(void)
{
    // int n;
    // cin>>n;
    for(int i = 0; i< 90;i++)
    {
        
        cout<<pibonacci(i)<<endl;
    }

    return 0;
}