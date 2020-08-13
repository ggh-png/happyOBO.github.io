#include <iostream>

using namespace std;

int mn = 100000;
int arr[6] = {1,2,5,7};
// int money[110000] = {0,};

void bt(int money,int count)
{

    if(money <= 0 )
    {
        if(mn > count)
        {
            mn = count;
        }

    }
    else
    {

        for(int i = 0; i<4; i++)
        {
            if(money >= arr[i])
            {
                bt(money-arr[i],count+1);
                // cout<<money<<"-"<<arr[i]<<endl;
            }
                
        }
    }
}

int main(void)
{
    int N;
    cin>>N;
    bt(N,0);
    cout<<mn;
}