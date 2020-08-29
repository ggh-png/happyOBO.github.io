#include <iostream>

using namespace std;

int main(void)
{
    int A,B;
    cin>>A>>B;
    int arr[1100] = {0,};
    int st = 1;
    int ed = 1;
    arr[1] = 1;
    while(true)
    {
        
        if(A <= arr[st])
        {
            if(B <= arr[ed])
            {
                break;
            }
            else
            {
                arr[ed+1] = arr[ed] + ed+1;
                ed++;
            }
            
        }
        else
        {
            arr[st+1] = arr[st] + st+1;
            st++;
            ed++;
        }
        


    }
    int result = 0;
    if(st != ed)
    {
        result += (arr[st] - A + 1) * st;
        result += (B - arr[ed-1]) * ed;
        for(int i = st+1; i<ed; i++)
        {
            result += (arr[i] - arr[i-1]) * i;
        }

    }
    else
    {
        result += ( (B-A) + 1) * st;
    }
    
    cout<<result;
    
}
