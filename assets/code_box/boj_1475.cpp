#include <iostream>
#include<algorithm>
#include <string>

using namespace std;

int main(void)
{
    string arr;
    cin>>arr;
    int n = arr.length();
    int mx = 0;
    int mx_idx = -1;
    int count[15] = {0,};
    for(int i = 0; i<n; i++)
    {
        count[arr[i]-48]++;
        if(count[arr[i]-48] > mx)
        {
            mx = count[arr[i]-48];
            mx_idx = arr[i] - 48;
        }
    }

    if(mx_idx == 9 || mx_idx == 6)
    {
        int md = count[9] + count[6];
        if(md % 2 == 1) md += 1;
        md = md / 2;

        cout<<md;
    }
    else
    {
        cout<<mx;
    }
    


}