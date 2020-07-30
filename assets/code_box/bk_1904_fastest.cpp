#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int arr[1100000]= {0,};

    for(int i = 1; i<= n; i++)
    {
        if(i<= 2)
        {
            arr[i] = i;
        }
        else
        {
            arr[i] = (arr[i-1] + arr[i-2]) % 15746;

        }
        
    }
    cout<< arr[n];
    return 0;
}