#include <iostream>

using namespace std;

char arr[440][440];
int N;

void recur(int leng)
{
    if(leng > 0)
    {
        int st = 2*(N-leng);
        int abov_leng;
        if(leng >= N-1) abov_leng = st + 4*(N -1)+1 - 2 *(N - leng);
        else abov_leng = st + 4*leng -1 ;
        for(int i = st; i < abov_leng ; i++)
        {
            arr[st][i] = '*';
        }
        for(int i = st; i < st + 4*(leng -1)+3 ; i++ )
        {
            arr[i][st] = '*';
        }
        for(int i = st; i < st + 4*(leng -1)+1; i++)
        {
            arr[st + 4*(leng -1)+2 ][i] = '*';
        }
        for(int i = st; i < st + 4*(leng -1)+3 ; i++ )
        {
            if(i != st +1)
                arr[i][st + 4*(leng -1)] = '*';
        }
        recur(leng-1);
    }

}

int main(void)
{
    cin>>N;
    for(int i = 0; i< 4*N -1; i++)
    {
        for(int j = 0; j< 4*N -1; j++)
            arr[i][j] = ' ';
    }
    if(N < 2)
    {
        printf("*\n");
    }
    else
    {
        recur(N);
        for(int i = 0; i< 4*N -1; i++)
        {
            for(int j = 0; j< 4*N -3; j++)
            {
                if(i == 1)
                {
                    printf("*");
                    break;
                }
                else printf("%c",arr[i][j]);
            }
            printf("\n");
        }
    }
}


// 윗변 길이 - 4(n-1) + 1
// 왼쪽 옆면 길이 - 4(n-1) + 3
// right side - 4(n-1) + 2
// 시작 좌표 (n 이 4 일때)
// 0,0 -> 2,2 ->4,4 
// *************
// *
// * ***********
// * *         *
// * * ******* *
// * * *     * *
// * * * *** * *
// * * * * * * *
// * * * * * * *
// * * *   * * *
// * * ***** * *
// * *       * *
// * ********* *
// *           *
// *************
// *************
// *
// * ***********
// * *         *
// * * ******* *
// * * *     * *
// * * * *** * *
// * * * * * * *
// * * * * * * *
// * * *   * * *
// * * ***** * *
// * *       * *
// * ********* *
// *           *
// *************
// st + 4*(N -1)+1 - 2 *(N - leng)