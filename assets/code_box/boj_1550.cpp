#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main(void)
{
    string A,B,tmp;
    cin>>A>>B;
    int A_len, B_len;
    A_len = A.length();
    B_len = B.length();
    if(A_len < B_len)
    {
        cout<<"no";
    }
    else
    {
        cout<<"go";
    }
}