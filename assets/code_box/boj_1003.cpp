#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(void)
{
    int N = 0;
    int max = 0;
    cin>>N;
    vector< pair < int,int > > counts;
    vector< int > arr;
    for(int i = 0; i < N; i++)
    {
        int m;
        cin>>m;
        arr.push_back(m);
        if(max < m) max = m;
    }
    for(int i = 0; i <= max; i++)
    {
        if(i == 0)
        {
            pair<int,int> p = make_pair(1,0);
            counts.push_back(p);
        }
        else if( i == 1)
        {
            pair<int,int> p = make_pair(0,1);
            counts.push_back(p);
        }
        else
        {    
            pair<int,int> p = make_pair(counts[i-1].first + counts[i-2].first,counts[i-1].second + counts[i-2].second);
            counts.push_back(p);
        }
    }
    for(int i = 0; i < N; i++)
        cout<<counts[arr[i]].first<<" "<<counts[arr[i]].second<<endl;
}