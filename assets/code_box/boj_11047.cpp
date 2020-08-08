#include <iostream>
#include <vector>
#include <utility> 
#include <algorithm>

using namespace std;

int main(void)
{
    int N;
    long int K;
    int arr[100] = {0,};
    cin>>N>>K;
    for(int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for(int i = N-1; K > 0 || i >= 0; i--)
    {
        if(K > arr[i])
        {
            count += (K / arr[i]);
            K -= (arr[i] * (K / arr[i]));
        }
    }
    cout<<count;
}