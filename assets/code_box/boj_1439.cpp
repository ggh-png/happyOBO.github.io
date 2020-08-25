#include <iostream>
#include<algorithm>
#include <string>
using namespace std;


int main(void)
{
    string arr;
    cin>>arr;
    int n = arr.length();
    int count_1 = 0;
    int count_0 = 0;
    int st = 0;

    while(st <= n)
    {
        int ed = st;
        if(arr[st] == '1')
        {

            for(int i=st;i<=n;i++)
            {
                if(i == n && arr[i] == '1')
                {
                    st = i+1;
                    count_1++;
                    break;
                }
                else if(arr[i] == '1')
                {
                    ed = i;
                }
                else
                {
                    st = i+1;
                    count_1++;
                    // printf("%d\n",count);
                    break;
                }
                
            }
        }
        else
        {
            st++;
        }
        
    }
    st = 0;
    while(st <= n)
    {
        int ed = st;
        if(arr[st] == '0')
        {

            for(int i=st;i<=n;i++)
            {
                if(i == n && arr[i] == '0')
                {
                    st = i+1;
                    count_0++;
                    break;
                }
                else if(arr[i] == '0')
                {
                    ed = i;
                }
                else
                {
                    st = i+1;
                    count_0++;
                    // printf("%d\n",count);
                    break;
                }
                
            }
        }
        else
        {
            st++;
        }
        
    }


    cout<<min(count_1,count_0);
}