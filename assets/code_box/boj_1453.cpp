#include <iostream>

using namespace std;

int main(void)
{
    int arr[110] ={0,};
    int N;
    cin>>N;
    int count = 0;
    while(N--)
    {
        int e;
        cin>>e;
        if(arr[e] > 0 ) count++;

        else arr[e]++; 
    }

    cout<<count;
}