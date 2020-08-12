#include <iostream>
#include <vector>

using namespace std;

long int mx = 0;
int N;
int arr[1100] ={0,};
int d[1100] ={0, };

// d[n] = max(d[n], A[n]+d[j(0부터 n까지)])


void dp(int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[n])
        {
            d[n] = max(d[n], arr[n] + d[i]);
            // cout<<d[n]<<endl;   
        }
        

    }
    if(n < N)
    {
        if(mx < d[n]) mx = d[n];
        dp(n+1);
    }
    
}

int main(void)
{
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        d[i] = arr[i];
    }
    dp(0);
    cout<<mx;
}