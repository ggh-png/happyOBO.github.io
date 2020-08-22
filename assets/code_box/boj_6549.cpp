#include <iostream>

using namespace std;




int main(void)
{
    // 0 , N
    // 0,N-1 , 1,N
    // 0,N-2, 1,N-1 , 2,N-2
    while(true)
    {

        int N;
        long int mx_area = 0;
        long int arr[110000] = {0,};
        cin>>N;
        if(N == 0 ) break;
        // cout<<"hello"<<endl;
        long int mn_idx = 1000000000;
        for(int i = 0; i<N;i++)
        {
            cin>>arr[i];
            if(arr[i] < mn_idx) mn_idx = i;
        }

        for(int i = 0; i < N;i++)
        {
            for(int j = 0; j <= i ; j++)
            {

                // divide(j , N + j - i);
                long int local_mn = 1000000000;
                int st = j;
                int ed = N + j -i ;
                if(ed - st == N && st <= mn_idx && mn_idx < ed) continue;
                for(int k = st; k < ed; k++)
                {
                    // if(ed - st == N && st <= mn_idx && mn_idx < ed) break;
                    if(arr[k] < local_mn)
                    {
                        local_mn = arr[k];
                    }
                }
                
                if(mx_area < local_mn * (ed - st))
                {
                    mx_area = local_mn * (ed - st);
                    // cout<<"mx_area "<<local_mn<<"*"<<ed<<"-"<<st<<endl;
                }
            }

        }

        cout<<mx_area<<endl;
    }

}