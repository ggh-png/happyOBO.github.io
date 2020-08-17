#include <iostream>
#include <cstdio>
#define INIT 1
using namespace std;


int main(void)
{
    char c;
    char pre_c = INIT;
    c = (char)getchar();
    int height = 0;
    while(c != '\n' && c != EOF )
    {
        if(pre_c == INIT)
        {
            height = 10;
        }
        else
        {
            if(c == pre_c)
            {
                height += 5;
            }
            else
            {
                height += 10;
            }
            
        } 
        pre_c = c;
        c = (char)getchar();
    }

    cout<<height;
}