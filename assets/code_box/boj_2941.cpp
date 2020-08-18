#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    char c;
    stack<char> s;
    while((c = (char) getchar()) != '\n')
    {
        if(c == '=')
        {
            char t = s.top();
            if(t == 'c' || t == 's')
            {
                s.pop();
                s.push('*');
            }
            else if(t == 'z')
            {
                s.pop();
                if(!s.empty() && s.top() == 'd')
                {
                    s.pop();
                    s.push('*');
                }
                else
                {
                    s.push('*');
                }
            }
            else
            {
                cout<<"wrong input"<<endl;
                exit(1);
            }
        }
        else if( c == '-')
        {
            s.pop();
            s.push('*');
        }
        else if( c == 'j' && !s.empty())
        {
            char t = s.top();
            if(t == 'n' || t == 'l')
            {
                s.pop();
                s.push('*');
            }
            else
            {
                s.push(c);
            }
            
        }
        else
        {
            s.push(c);
        }
        
    }
    cout<<s.size();
}