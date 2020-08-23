#include <iostream>

using namespace std;
char arr[450][450];
int N;
void recur(int leng)
{
    int st = 2*(N-leng); 

    for(int i = st; i < st + 4 * (leng-1) +1 ; i++)
    {
        for(int j = st; j < st + 4 * (leng-1) +1 ; j++)
        {
            if(i == st || i ==  st + 4 * (leng-1))
            {
                arr[i][j] = '*';
            }
            else if(j == st || j == st + 4*(leng-1))
            {
                arr[i][j] = '*';
            }

        }
    }
    if(1 < leng)
        recur(leng-1);
}

int main(void)
{

    cin>>N;
    for(int i = 0; i < 4 * (N-1) +1 ; i++)
    {
        for(int j = 0; j < 4 * (N-1) +1 ; j++)
        {
            arr[i][j] = ' ';
        }
    }
    recur(N);
    for(int i = 0; i < 4 * (N-1) +1 ; i++)
    {
        for(int j = 0; j < 4 * (N-1) +1 ; j++)
        {
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }
    
}

// 길이
// 1 - 1
// 2 - 5
// 3 - 9
// 4 - 13
// 4*(n-1) + 1

// 시작좌표
// 3 : 0.0
// 2 : 2,2
// 1 : 4,4
// 2(N-n), 2(N-n)
