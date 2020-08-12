// 백트래킹
#include <iostream>
#include <vector>
using namespace std;

long int mx = 0;
int N;
int arr[1100] ={0,};
void back(int flag, vector<int> order)
{

    if(flag >= N)
    {
        long int sum = 0;
        for(int i = 0; i<order.size();i++)
        {
            sum += order[i];
        }
        if(mx < sum) mx = sum;
    }
   for(int i = flag; i<N;i++)
   {
       if(order.size() == 0)
        {
            order.push_back(arr[i]);
            back(i+1,order);
            order.pop_back();
        }
       else if(order.back() > arr[i])
       {
           order.push_back(arr[i]);
           back(i+1,order);
           order.pop_back();
       }
   }
}

int main(void)
{
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    back(0,v);
    cout<<mx;

}