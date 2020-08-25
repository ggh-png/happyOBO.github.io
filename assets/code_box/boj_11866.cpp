#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int N, k;
    cin>>N>>k;
    queue<int> q;

    for(int i = 1; i<= N; i++) q.push(i);
    cout<<"<";
    while(!q.empty())
    {
        int count = k;
        while(count--)
        {
            if(count == 0)
            {
                cout<<q.front();
                q.pop();
            }
            else
            {
                q.push(q.front());
                q.pop();
            }
        }
        if(!q.empty()) cout<<", ";
        else cout<<">";
    }
}