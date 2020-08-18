#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int N;
    stack<int> s;
    cin>>N;
    int count = 1;
    bool check = true;
    for(int i = 0; check && i< N ; i++)
    {
        int e;
        cin>>e;
        while(count <= N+1)
        {
            if(!s.empty() && s.top() == e)
            {
                cout<<"-"<<endl;
                s.pop();
                break;
            }
            else if(!s.empty() && e > count && e < s.top())
            {
                check = false;
                break;
            }
            else if(e >= count)
            {
                s.push(count);
                cout<<"+"<<endl;
            }
            count++;
        }
    }
    if(!check) cout<<"no";

}