#include <iostream>

using namespace std;

int main(void)
{
    int count;
    cin>>count;
    int input[110];
    for(int i = 0; i< count; i++)
    {
        cin>>input[i];
    }

    long int arr[110];
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;
    int fill = 6;

    for(int i = 0; i <count; i++)
    {

        while(fill <= input[i])
        {
            arr[fill] = arr[fill-1] + arr[fill-5];
            fill += 1;
        }
        cout<<arr[input[i]]<<endl;
    }
    return 0;

}