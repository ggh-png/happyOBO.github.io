#include <iostream>
#include<algorithm>

using namespace std;


int main(void)
{
    int N;
    cin>>N;
    int arr[1000000] = {0,};
    for(int i =0;i<N;i++)
    {
        cin>>arr[i];
    }
    int count = 0;

    for(int i=0; i<N;i++)
    {
        if(arr[i] == 1)
        {

            arr[i] = !arr[i];
            arr[i+1] = !arr[i+1];
            arr[i+2] = !arr[i+2];
            count++;
        }
    }
    cout<<count;
}