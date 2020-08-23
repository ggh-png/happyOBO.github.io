#include <iostream>

using namespace std;

int main(void)
{
    int N;
    cin>>N;
    for(int j = 0; j<N; j++)
    {

        for(int i = 0; i < 2 * ((N+1) / 2) -1 ; i++)
        {
            if(i % 2 == 0)
                cout<<"*";
            else cout<<" ";
        }
        if (N != 1) cout<<endl;
        for(int i = 0; i < 2 * (N / 2);i++ )
        {
            if(i % 2 == 0)
                cout<<" ";
            else cout<<"*";
        }
        if (N != 1) cout<<endl; 
    }
}

// 2 * ((N+2) / 2) -1 개수 만큼
// 1. 1. 3,3, 5,5,
// 0, 2,2,4,4,
// 1
// 예제 출력 1 
// *

// 예제 입력 2 
// 2
// 예제 출력 2 
// *
//  *

// 예제 입력 3 
// 3
// 예제 출력 3 
// * *
//  *

// 예제 입력 4 
// 4
// 예제 출력 4 
// * *
//  * *

// 예제 입력 4 
// 5
// 예제 출력 4 
// * * *
//  * *
