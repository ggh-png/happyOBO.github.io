#include <iostream>
using namespace std;

bool check[11][11];

void bt(int ( * bd)[11] ,int i )
{
    if(i> 9)
    {

    }
    else
    {
        for(int j = 0 ; j<9 ;j++)
        {
            // 1 * 9 CHECK
            // 3 * 3 CHECK
        }
    }
}
int main(void)
{
    int board[11][11] = {0,};

    for(int i = 0; i<9; i++)
    {
        for(int j = 0; j<9; j++)
        {
            board[i][j] = false;
        }
    }

    for(int i = 0; i<9; i++)
    {
        for(int j = 0; j<9; j++)
        {
            cin>>board[i][j];
            check[i][board[i][j]] = true;
        }
    }


    
}