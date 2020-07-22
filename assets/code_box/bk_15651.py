## 백트래킹
# 입력
N, M = map(int, input().split())

# 배열 초기화
orders = []
for i in range(M):
    orders.append(0)
# 백트랙킹 함수
def back (idx,order_list) :
    ord_list = order_list[:]
    if(idx >= M) :
        # 완성된 수열 출력
        for i in range(M-1):
            print(ord_list[i],end = " ")
        print(ord_list[M-1])
    else :
        for i in range(1,N+1):
            # 수열 생성
            ord_list[idx] = i
            back(idx+1,ord_list)

back(0,orders)


        
