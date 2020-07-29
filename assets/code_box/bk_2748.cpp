#include <iostream>
#include <vector>
#include <utility> // pair

using namespace std;

// 동적 계획법

long int arr[1000] ={0, };

long int pibonacci(int n)
{
    if(n <= 1)
    {
        arr[n] = n;
        return n;
    }
    else
    {
        if(arr[n] > 0)
        {
            return arr[n];
        }
       else
       {
            arr[n] = pibonacci(n-1) + pibonacci(n-2);
            return arr[n];
       }
    }
}

int main(void)
{
    int n;
    cin>>n;
    pibonacci(n);
    cout<<arr[n];
    return 0;
}