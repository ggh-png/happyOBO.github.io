#include <iostream>

using namespace std;


int main(void)
{
    int arr[10][60] = {0,};

    int N,M;
    cin>>N>>M;

    for(int j = 0; j<N;j++)
    {
        getchar();
        for(int i = 0; i<M; i++)
        {
            char e = (char) getchar();
            // printf("%c",e);
            if(e == 'A')
            {
                arr[0][i]++;
            }
            else if(e == 'C')
            {
                arr[1][i]++;

            }
            else if(e == 'G')
            {
                arr[2][i]++;

            }
            else if(e == 'T')
            {
                arr[3][i]++;

            }
        }
        // printf("\n");
        
    }

    int max_idx[60] = {0,};
    int mx[60] = {0,};
    int sm[60] = {0,};
    for(int i = 0; i<M; i++)
    {
        for(int j = 0; j<4; j++)
        {
            if( mx[i] < arr[j][i])
            {
                max_idx[i] = j;
                mx[i] = arr[j][i];
            }
            sm[i] += arr[j][i];
        }
    }

    int count = 0;
    for(int i = 0; i<M; i++)
    {
        count += (sm[i] - mx[i]);
        if(max_idx[i] == 0)
        {
            cout<<"A";
        }
        else if(max_idx[i] == 1)
        {
            cout<<"C";

        }
        else if(max_idx[i] == 2)
        {
            cout<<"G";

        }
        else if(max_idx[i] == 3)
        {
            cout<<"T";

        }
    }

    cout<<"\n"<<count;
}