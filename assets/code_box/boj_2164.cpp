#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int N;
    queue<int> q;
    cin>>N;
    for(int i = 1; i<= N; i++) q.push(i);
    bool odd = true;
    while(q.size() > 1)
    {
        if(odd) q.pop();
        else
        {
            q.push(q.front());
            q.pop();
        }
        odd = !odd;

    }

    cout<<q.front();
}