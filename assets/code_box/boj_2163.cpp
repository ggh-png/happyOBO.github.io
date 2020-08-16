#include <iostream>

using namespace std;

int main(void)
{
    int i,j;
    cin>>i>>j;
    if(i == 1 || j == 1) cout<<i+j -2;
    else
    {
        cout<< i-1 + i * (j-1);
    }

}
