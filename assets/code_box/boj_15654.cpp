#include <iostream>
#include <vector>

using namespace std;

int N,M;
int v[11] = {0,};

void quick_sort(int *data, int start, int end){
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

bool exist(vector<int> st, int e)
{
    for(int i = 0; i<st.size(); i++)
    {
        if(st[i] == e) return true;
    }
    return false;
}

void bt(vector<int> st ,int pre, int idx)
{
    if(st.size() >= M )
    {
        for(int i = 0; i<M-1;i++)
        {
            printf("%d ",v[st[i]]);
        }
        printf("%d\n",v[st[M-1]]);
    }
    else if(N < idx) {}
    else
    {
        for(int i = idx; i < N; i++)
        {
            if(pre != v[i])
            {
                st.push_back(i);
                bt(st , -1,i);
                st.pop_back();
                pre = v[i];
            }

        }
    }
    
}

int main(void)
{
    cin>>N>>M;

    for(int i = 0; i< N; i++)
    {
        cin>>v[i];
    }
    quick_sort(v,0,N-1);
    vector<int> st;

    bt(st,-1,0);


}