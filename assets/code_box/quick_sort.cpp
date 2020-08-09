#include <iostream>

using namespace std;

void quick_sort(int *data, int start, int end)
{
    if(end<=start)
    {
        return ;
    }
    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;
    while(i<=j)
    {
        while(i<=end && data[i] < data[pivot])
        {
            i++;
        }
        while(start<=j && data[j]> data[pivot])
        {
            j--;
        }
        if(i>j)
        {
            temp = data[pivot];
            data[pivot] = data[j];
            data[j] = temp;
        }
        else
        {
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
        
    }

    quick_sort(data,start,j-1);
    quick_sort(data,j+1,end);
}

int main(void)
{
    int data[10] = {4, 1, 2, 3, 9, 7, 8, 6, 10, 5};

    quick_sort(data,0,9);

    for(int i = 0; i<10;i++) cout<<data[i]<<" ";
    return 0;
}