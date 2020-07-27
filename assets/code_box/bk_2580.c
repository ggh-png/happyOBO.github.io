#include <stdio.h>
#include <stdlib.h>

int blank_count = 0 ;
int sudoku[15][15] = { 0, };
int blank_idx[100][5] = { 0, };
// 반례 참고 https://cryptosalamander.tistory.com/59
// 444444hello3hello2hello2hellohellohellohellohellohello43324
// int is_in(int num, int arr[] ,int arr_leng)
// {
//     for(int i = 0; i< arr_leng; i++)
//     {
//         if(num == arr[i]) return 0;
//     }
//     return 1;
// }

void back(int n,int fill_blanks[])
{
    // int k =0;
    // for(int i = 0; i<9; i++)
    // {
    //     for(int j = 0; j<9; j++)
    //     {
    //         if(sudoku[i][j] == 0 && j < n)
    //         {
    //             printf("%d",fill_blanks[k++]);
    //         }
    //         else
    //         {
    //             printf("%d",sudoku[i][j]);
    //         }
    //         if(j < 8) printf(" ");
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    if(n == blank_count)
    {
        int k = 0;
        for(int i = 0; i<9; i++)
        {
            for(int j = 0; j<9; j++)
            {
                if(sudoku[i][j] == 0)
                {
                    printf("%d",fill_blanks[k++]);
                }
                else
                {
                    printf("%d",sudoku[i][j]);
                }
                if(j < 8) printf(" ");
            }
            printf("\n");
        }
        exit(0);
    }
    else
    {
        for( int i = 1; i< 10; i++)
        {
            int is_fill = 1;
            int smallcube_row = blank_idx[n][0] / 3;
            int smallcube_col = blank_idx[n][1] / 3;
            for(int j = 0; j < 9; j++)
            {
                // if(i == 7) printf("hello");
                if(sudoku[j][blank_idx[n][1]] == i || sudoku[blank_idx[n][0]][j] == i )
                {
                    // printf("hello!\n");
                    is_fill = 0;
                    // printf("4");
                    break;
                }
                else if( j < 3)
                {
                    for(int p = smallcube_col* 3 ; p < smallcube_col* 3 + 3; p++)
                    {
                        
                        // if( n ==3 && blank_idx[n][0] == 2 && blank_idx[n][1] == 0)
                        // {
                        //     printf("sudoku [%d] [%d] = %d",smallcube_row * 3 + j,p,sudoku[smallcube_row * 3 + j][p]);
                        // }
                        if(sudoku[smallcube_row * 3 + j][p] == 0)
                        {
                            for(int u = 0; u < n;u++)
                            {
                                if(blank_idx[u][0] == smallcube_row * 3 + j && blank_idx[u][1] ==p )
                                {
                                    if(fill_blanks[u] == i)
                                    {
                                        is_fill = 0;
                                        // printf("1");
                                        break;
                                    }
                                }
                            }
                            if(!is_fill)
                            {
                                // printf("2");
                                break;
                            }
                        }
                        else if(sudoku[smallcube_row * 3 + j][p] == i )
                        {

                            // printf("sudoku[%d][%d] = %d",smallcube_row * 3 + j,p,i);

                            is_fill = 0;
                            // printf("3");
                            break;                        
                        }

                    }

                }
            }
            if(is_fill)
            {
                fill_blanks[n] = i;
                back(n+1,fill_blanks);
                fill_blanks[n] = 0;
            }
        }
    }
    
}


int main()
{

    for(int i = 0; i<9; i++)
    {
        scanf("%d %d %d %d %d %d %d %d %d", &sudoku[i][0], &sudoku[i][1], &sudoku[i][2], &sudoku[i][3], &sudoku[i][4], &sudoku[i][5], &sudoku[i][6], &sudoku[i][7], &sudoku[i][8]);
        for (int j = 0; j < 9; j ++)
        {
            if(sudoku[i][j] == 0)
            {
                blank_idx[blank_count][0] = i;
                blank_idx[blank_count][1] = j;
                blank_count++;
            }
        }
    }
    int fill_blanks[100] = {0,};
    back(0,fill_blanks);

}