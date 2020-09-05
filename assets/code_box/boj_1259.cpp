#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;
    cin>>s;
    while(s != "0")
    {
        bool is_pal = true;

        for(int i = 0; i < s.length() / 2; i++)
        {
            int pos = (s.length() -1) - i;
            if(s[i] != s[pos])
            {
                is_pal = !is_pal;
                printf("no\n");
                break;
            }
        }
        if(is_pal) printf("yes\n");
        cin>>s;
    }
}