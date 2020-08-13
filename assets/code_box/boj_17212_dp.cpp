#include <iostream>

using namespace std;
int N;
int arr[6] = {1,2,5,7};
int money[110000] = {0,};

void dp(int m)
{
    if(m > 0)
    {
        int mn = 100000;
        for(int i =0; i<4;i++)
        {
            if(m >= arr[i])
            {
                dp(m-arr[i]);
                money[m] = min(mn, money[m - arr[i]] + 1);
            }
        }
    }
}

// 최솟값 money[i] = min(money[i-1] +  1, )

int main(void)
{

    cin>>N;
    dp(N);
    cout<<money[N];
}