#include <iostream>
#include <vector>
#include <utility> 
#include <algorithm>

using namespace std;

int main(void)
{
    int triangle[600][600] = {0,};
    int N;
    long int cost[600][600] = {0,};
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        for(int j = 0; j<=i;j++)
        {
            cin>>triangle[i][j];
        }
    }
    cost[0][0] = triangle[0][0];
    for(int j=0; j<N;j++)
    {
        for(int i = 0; i<= j;i++)
        {
            if(j == i)
            {
                cost[j][i] = cost[j-1][i-1] + triangle[j][i];
            }
            else if(i == 0)
            {
                cost[j][i] = cost[j-1][i] + triangle[j][i];
            }
            else
            {
                cost[j][i] = max(cost[j-1][i-1],cost[j-1][i]) + triangle[j][i];
            }
        }
    }


    int max = 0;
    for(int i = 0; i<N;i++)
    {
        if(max < cost[N-1][i]) max = cost[N-1][i];
        
    }
    cout<<max;

}