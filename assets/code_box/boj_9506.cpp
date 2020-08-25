#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    cin>>N;
    while(N != -1)
    {
        int count = 0;
        vector<int> v;
        for(int i = 1; i<=N/2;i++)
        {
            if(N % i == 0)
            {
                count += i;
                v.push_back(i);
            }
        }
        if(count == N)
        {
            printf("%d =",N);
            for(int i = 0; i< v.size() -1; i++)
            {
                printf(" %d +",v[i]);
            }
            printf(" %d\n",v[v.size()-1]);
        }
        else
        {
            printf("%d is NOT perfect.\n",N);
        }
        
        cin>>N;
    }
}