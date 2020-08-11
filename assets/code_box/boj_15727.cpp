
// 그리디 알고리즘
#include <iostream>
using namespace std;
int main(void)
{
    int N;
    cin>>N;
    int count = 0;
    while(N > 0)
    {
        for(int i = 5; i >0 || N>0 ; i--)
        {
            if(N>=i)
            {
                N -= i;
                count += 1;
                break;
            }

        }
    }
    cout<<count;

}