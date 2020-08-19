#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin>>N;
    int input[110] = {0,};
    int mx = 0;
    for(int i = 0; i<N;i++)
    {
        cin>>input[i];
        if(mx < input[i])
        {
            mx = input[i];
        }
    }

    long int arr[110] = {0,};
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i = 4; i<=mx; i++)
    {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4];
    }
    for(int i = 0; i< N;i++)
    {
        cout<<arr[input[i]]<<endl;
    }
}