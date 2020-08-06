#include <iostream>
#include <vector>
#include <utility> 
#include <algorithm>

using namespace std;

int triangle[600][600] = {0,};
int N;
long int cost[600][600] = {0,};

void tri(int n)
{
    for(int i = 0; i<= n;i++)
    {
        if(n == i)
        {
            cost[n][i] = cost[n-1][i-1] + triangle[n][i];
        }
        else if(i == 0)
        {
            cost[n][i] = cost[n-1][i] + triangle[n][i];
        }
        else
        {
            cost[n][i] = max(cost[n-1][i-1],cost[n-1][i]) + triangle[n][i];
        }
    }
    if(n<N) tri(n+1);
}

int main(void)
{
    cin>>N;
    for(int i = 0;i<N;i++)
    {
        for(int j = 0; j<=i;j++)
        {
            cin>>triangle[i][j];
        }
    }
    cost[0][0] = triangle[0][0];
    tri(1);
    int max = 0;
    for(int i = 0; i<N;i++)
    {
        if(max < cost[N-1][i]) max = cost[N-1][i];
        
    }
    cout<<max;

}