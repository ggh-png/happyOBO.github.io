#include <iostream>

using namespace std;

int main(void)
{
    // int arr[5] {0,};
    int arr[5];
    for(int i =0; i< 3; i++)
    {
        cin>>arr[i];
        // arr[i] = double(arr[i]);
    }
    int max = 0;
    max = int(double(arr[0]) * double(arr[1])/ double(arr[2]));
    if(max < int(double(arr[0]) / double(arr[1])* double(arr[2])) )
    {
        max = int( double(arr[0]) / double(arr[1])* double(arr[2])) ;
    }
    cout<< max;
}