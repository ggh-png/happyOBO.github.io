#include <iostream>

using namespace std;

int main(void)
{
    long int N;
    int first;
    cin>>N>>first;
    if(N < 6)
    {
        for(int i = 1; i<N;i++)
        {
            if(i % 2 == 0) 
            {
                if(i == N-1) cout<<first;
                else cout<<first<<endl;

            }
            else
            {
                if(i == N-1) cout<<!first;
                else cout<<!first<<endl;

            }
        }
    }
    else
    {
        cout<<"Love is open door";
    }
    

}