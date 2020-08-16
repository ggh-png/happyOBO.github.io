#include <iostream>

using namespace std;

int main(void)
{
    long int N,r,e,c;
    cin>>N;
    for(int i =0; i<N;i++)
    {
        cin>>r>>e>>c;
        if(e-c == r) cout<<"does not matter"<<endl;
        else if(e-c > r) cout<<"advertise"<<endl;
        else cout<<"do not advertise"<<endl;
    }
}