#include <iostream>
#include <vector>
#include <utility> // pair
#include <bitset>
#include <algorithm>
#include <cmath>

using namespace std;

vector<int> v_n2;
vector<int> v_n1;

void fill_tile(int n)
{
    vector<int> v_n;
    if(n == 1)
    {
        v_n1.push_back(1);

    }
    else if(n == 2)
    {
        v_n2.push_back(1);
        v_n1.push_back(3);
        v_n1.push_back(0);
    }
    else{
        fill_tile(n-1);
        // cout<<"copy"<<endl;
        // cout<<"n_2"<<endl;
        // for (vector<int>::size_type i = 0; i < v_n2.size(); i++)
        // {
        //     cout<<bitset<8>(v_n2[i])<<" "<<v_n2[i]<<endl;   
        // }
        // cout<<"n_1"<<endl;
        // for (vector<int>::size_type i = 0; i < v_n1.size(); i++)
        // {
        //     cout<<bitset<8>(v_n1[i])<<" "<<v_n1[i]<<endl;   
        // } 
        for (vector<int>::size_type i = 0; i < v_n2.size(); i++)
        {
            /* v_n does not contains item*/
            if( v_n.empty() || find( v_n.begin(), v_n.end(), v_n2[i]) == v_n.end())
            {
                v_n.push_back(v_n2[i]);
            }
            /* v_n does not contains item*(2^2) */
            if( v_n.empty() || find( v_n.begin(), v_n.end(), v_n2[i]*4 ) == v_n.end())
            {
                // if(v_n2[i] != 0)
                v_n.push_back(v_n2[i]*4);
            }
            
        } 
        for (vector<int>::size_type i = 0; i < v_n1.size(); i++)
        {
            /* v_n does not contains item */
            if( v_n.empty() || find( v_n.begin(), v_n.end(), v_n1[i] + pow(2,n-1)) == v_n.end())
            {
                v_n.push_back(v_n1[i] + pow(2,n-1));
            }
            /* v_n does not contains item*(2^2) */
            if( v_n.empty() || find( v_n.begin(), v_n.end(), v_n1[i]*2 + 1 ) == v_n.end())
            {
                v_n.push_back(v_n1[i]*2 + 1);
            }
            
        } 
        
        
        v_n2.resize((int)(v_n1.size()));
        copy(v_n1.begin(), v_n1.end(), v_n2.begin() );
        v_n1.resize((int)(v_n.size()));
        copy(v_n.begin(), v_n.end(), v_n1.begin() );
    }

}

int main()
{
    int n;
    cin>>n;
    fill_tile(n);
    // for (vector<int>::size_type i = 0; i < v_n1.size(); i++)
    // {
    //     cout<<bitset<8>(v_n1[i])<<" "<<v_n1[i]<<endl;   
    // } 
    cout<<v_n1.size();
}