#include <iostream>
#include <vector>

using namespace std;


int main(void)
{

    int N;
    int arr[1100] ={0,};
    int d[1100] ={0, };
    int mx = 0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
        d[i] = arr[i];
    }
    for(int j = 0; j<=N;j++)
    {
        for(int i=0;i<j;i++)
        {
            if(arr[i] > arr[j])
            {
                d[j] = max(d[j], arr[j] + d[i]);
                // cout<<d[n]<<endl;   
            }

        }
        if(d[j] > mx) mx = d[j];
    }
    cout<<mx;
}