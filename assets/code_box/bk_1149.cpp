#include <iostream>
#include <vector>
#include <utility> // pair

using namespace std;

int main(void)
{
    int arr[1200][5] ={0, };
    long int cost[1200][5] ={0, };
    int N;
    cin>>N;
    for(int i = 0; i< N; i++)
    {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    cost[0][0] = arr[0][0];
    cost[0][1] = arr[0][1];
    cost[0][2] = arr[0][2];
    for(int i = 1;i<N;i++)
    {
        cost[i][0] = min(cost[i-1][1],cost[i-1][2]) + arr[i][0];
        cost[i][1] = min(cost[i-1][0],cost[i-1][2]) + arr[i][1];
        cost[i][2] = min(cost[i-1][0],cost[i-1][1]) + arr[i][2];
    }

    long int mid_min = min(cost[N-1][0],cost[N-1][1]);
    cout<<min(mid_min, cost[N-1][2]);

}
