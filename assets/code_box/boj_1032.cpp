#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    int N;
    cin>>N;
    vector<char> str;
    int arr[55] = {0,};
    char e;
    getchar();
    while((e = getchar()) != '\n')
    {
        str.push_back(e);

    }
    N--;
    while (N--)
    {
        string s;
        cin>>s;
        for(int i = 0; i<str.size(); i++)
        {
            if(s[i] != str[i])
            {
                arr[i]++;
            }
        }
    }

    for(int i = 0; i< str.size(); i++)
    {
        if(arr[i] > 0) printf("?");
        else printf("%c",str[i]);
    }
    

}