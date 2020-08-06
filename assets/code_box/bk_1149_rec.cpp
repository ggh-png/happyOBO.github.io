#include <iostream>
#include <vector>
#include <utility> // pair

using namespace std;

int arr[1200][5] ={0, };
long int cost[1200][5] ={0, };
int N;


void rgb(int n)
{
    cost[n][0] = min(cost[n-1][1],cost[n-1][2]) + arr[n][0];
    cost[n][1] = min(cost[n-1][0],cost[n-1][2]) + arr[n][1];
    cost[n][2] = min(cost[n-1][0],cost[n-1][1]) + arr[n][2];
    if(n < N-1)
    {
        rgb(n+1);
    }
}


int main(void)
{
    
    cin>>N;
    for(int i = 0; i< N; i++)
    {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    cost[0][0] = arr[0][0];
    cost[0][1] = arr[0][1];
    cost[0][2] = arr[0][2];
    rgb(1);
    long int mid_min = min(cost[N-1][0],cost[N-1][1]);
    cout<<min(mid_min, cost[N-1][2]);

}