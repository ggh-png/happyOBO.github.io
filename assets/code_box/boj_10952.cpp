#include <iostream>

using namespace std;

int main(void)
{
    while(EOF)
    {
        int A,B;
        cin>>A>>B;
       if(cin.eof() == true) {
        // cin으로 입력받은 값이 없으면
        // cin.eof()는 true를 반환한다. 당연히 그렇지 않으면 false 반환
           break;
       }
        cout<<A+B<<endl;
        
    }
}