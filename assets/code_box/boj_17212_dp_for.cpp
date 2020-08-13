#include <iostream>

using namespace std;




// 최솟값 money[i] = min(money[i-1] +  1, )

int main(void)
{
    int N;
    cin>>N;
    int arr[6] = {1,2,5,7};
    int money[110000] = {0,};
    for(int i = 1; i <= N ;i++) money[i] = 100000;
    for(int m = 0; m <= N; )
    {
        if(m <= N)
        {
            int mk_mn;
            for(int i =0; i<4;i++)
            {
                
                if(m - arr[i] >= 0)
                {
                    cout<<money[m]<<" "<<m<<endl;

                    if(money[m] > money[m - arr[i]] + 1)
                    {
                        
                        money[m] = money[m + arr[i]] + 1;
                        mk_mn= arr[i];
                    }
                }
            }
            m += mk_mn;
        }
        else
        {
            break;
        }
        
    }

    cout<<money[N];
}