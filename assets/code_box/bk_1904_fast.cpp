#include <iostream>

using namespace std;

int arr[11000000]= {0,};

int fill_tile(int n)
{
    if(n<= 2)
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
            arr[n] = (fill_tile(n-1) + fill_tile(n-2)) % 15746;
            return arr[n];
        }
    }
}

int main(void)
{
    int n;
    cin>>n;
    fill_tile(n);
    cout<<arr[n];
    return 0;
}