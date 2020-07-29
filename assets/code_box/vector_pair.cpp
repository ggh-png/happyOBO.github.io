#include <iostream>
#include <utility> // pair
#include <vector> // vector

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
    return 0;
}