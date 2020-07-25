#include <stdio.h>
#include <stdlib.h>

int N;
int count = 0;

void back(int idx_list[][2], int n)
{
    if(n == N)
        count += 1;
    else
    {
        for(int y = 0; y < N; y++)
        {
            int save = 0;
            int tup[2] = {n,y};
            for(int i = 0; i < n; i++)
            {
                if(idx_list[i][0] == tup[0])
                {
                    save = 2;
                    break;
                }
                else if(idx_list[i][1] == tup[1])
                {
                    save = 1;
                    break;
                }
                else if((abs(idx_list[i][0] - tup[0])) == (abs(idx_list[i][1] - tup[1])))
                {
                    save = 1;
                    break;
                }

            }
            if(save == 0)
            {
                idx_list[n][0] = n;
                idx_list[n][1] = y;
                back(idx_list,n+1);
                idx_list[n][0] = 0;
                idx_list[n][1] = 0;
            }
        }
    }
}

int main()
{
    int tup_order[30][3] = { 0, };
    scanf("%d", &N);
    
    back(tup_order,0);
    printf("%d", count);
    return 0;
}