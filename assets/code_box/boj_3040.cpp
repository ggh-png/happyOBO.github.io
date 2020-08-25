#include <iostream>
#include <vector>

using namespace std;

int arr[11] = {0,};

void quick_sort(vector<int> data, int start, int end){
    if(start >= end){
        // 원소가 1개인 경우
        return; 
    }
    
    int pivot = start;
    int i = pivot + 1; // 왼쪽 출발 지점 
    int j = end; // 오른쪽 출발 지점
    int temp;
    
    while(i <= j){
        // 포인터가 엇갈릴때까지 반복
        while(i <= end && data[i] <= data[pivot]){
            i++;
        }
        while(j > start && data[j] >= data[pivot]){
            j--;
        }
        
        if(i > j){
            // 엇갈림
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }else{
            // i번째와 j번째를 스왑
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    } 
    
    // 분할 계산
    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);
}



void bf(vector<int> v, int total, int idx)
{
    if(total == 100 && v.size() == 7)
    {
        quick_sort(v,0,v.size()-1);
        for(int i = 0; i<7; i++)
        {
            printf("%d\n",v[i]);
        }
    }
    else if(total == 100 || v.size() == 7 || idx > 8)
    {

    }
    else
    {
        for(int i = idx; i<9; i++)
        {
            bool presence = false;
            for(int j = 0; j<v.size(); j++)
            {
                if(v[j] == arr[i]) presence = !presence;
            }
            if(!presence)
            {
                v.push_back(arr[i]);
                bf(v,total+arr[i],i);
                v.pop_back();
            }
        }
    }
    
}


int main(void)
{


    for(int i = 0; i<9;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    bf(v,0,0);


}
