#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin>>N;

    while(N--)
    {
        int A,B;
        cin>>A>>B;
        int result = A*B;
        while(B != 0)
        {
            int r = A % B;
            A = B;
            B = r;
        }

        cout<<result/A<<endl;


    }
}