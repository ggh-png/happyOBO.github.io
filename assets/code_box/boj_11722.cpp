#include <iostream>
#include <vector>

using namespace std;


int main(void)
{
    int N;
    int arr[1100] = {0, };
    int d[1100] = {0,};
    int mx = 0;
    cin>>N;
    for(int i=0; i<N ; i++)
    {
        cin>> arr[i];
        d[i] = 1;
    }

    for(int j =0; j<N;j++)
    {
        for(int i=0; i<=j;i++)
        {
            if(arr[j] < arr[i])
            {
                d[j] = max(d[j], 1+d[i]);
                // cout<<j<<" "<<arr[j]<<" "<<arr[i]<<" "<<d[j]<<endl;
            }
                
        }
        if(mx < d[j]) mx = d[j];
    }
    cout<<mx;
}