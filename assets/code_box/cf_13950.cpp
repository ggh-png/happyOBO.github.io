#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin>>N;

    while (--N)
    {
        long int arr[8]= {0,};
        for(int i=0; i<4;i++) cin>>arr[i];
        for(int i=0; i<4; i++)
        {
            if(arr[i] % 2 != 0)
            {
                break;
            }
            else
            {
                if(i==3)
                {
                    cout<<"Yes"<<endl;
                }
            }
        }
        int count = 0;
        for(int i=0; i<4; i++)
        {
            if(count > 1) break;
            if(arr[i] % 2 != 0)
            {
                count++;
            }
            else
            {
                if(i==3)
                {
                    cout<<"Yes"<<endl;
                }
            }
            

        }
        cout<<"No"<<endl;
    }
    
}