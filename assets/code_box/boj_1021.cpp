#include <iostream>
#include <deque>
#include <queue>

using namespace std;

int mn = 100000;

int bt(deque<int> dq, queue<int> q, int count)
{
    if(q.empty())
    {
        if(count < mn) mn = count;
    }
    else
    {
        int e = q.front();
        q.pop();
        while(dq.front() != e)
        {
            dq.push_back(dq.front());
            dq.pop_front();
        }
        bt()

    }
    

}

int main(void)
{
    int N, M;
    cin>>N>>M;
    deque<int> dq;
    queue<int> q;
    for(int i = 0;i< M;i++)
    {
        int e;
        cin>>e;
        q.push(e);
    }
    for(int i = 1;i<=N;i++) dq.push_back(i);

    

}
