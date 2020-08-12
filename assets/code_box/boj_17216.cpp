#include <iostream>
using namespace std;

int mx = 0;
int N;
int arr[1100] ={0,};
void back(int ed, int sum)
{

   for(int i = 0; i<N;i++)
   {
       back( , sum+arr[])
   }
}

int main(void)
{
    // int N;
    cin>>N;
    for(int i=1;i<N;i++)
    {
        cin>>arr[i];
    }
    cout<<N<<endl;
    back(0,0,1,arr[0]);
    cout<<mx;

}