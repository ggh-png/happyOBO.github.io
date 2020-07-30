#include <iostream>
#include <utility> // pair
#include <vector> // vector
#include <iostream>
#include <vector>
#include <utility> // pair
#include <bitset>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    pair<int,int> p;
    p = make_pair(1,2);
    cout<<p.first<<" "<<p.second<<endl;

    vector< pair<int,int> > vp;
    vp.push_back(p);
    vp.push_back(make_pair(3,4));
    cout<<vp.back().first<<" "<<vp.back().second<<endl;
    vp.pop_back();
    cout<<vp.back().first<<" "<<vp.back().second<<endl;

    vector<int> vvv;
    vvv.push_back(1);
    vvv.push_back(2);
    vvv.push_back(0);
    vector<int> vcp;
    vcp.push_back(4);
    vcp.push_back(6);
    vcp.resize((int)(vvv.size()));
    copy(vvv.begin(), vvv.end(), vcp.begin() );
    for (vector<int>::size_type i = 0; i < vcp.size(); i++)
    {
        cout<<bitset<8>(vcp[i])<<" "<<vcp[i]<<endl;   
    }

    return 0;
}