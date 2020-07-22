# 브루트 포스
N, M = map(int, input().split())
card_list = list(map(int, input().split()))
max = 0
for i in range(N):
    for j in range(N):
        if( i != j):
            for k in range(N):
                if( i != k and j != k):
                    m = card_list[i] + card_list[j] + card_list[k]
                    if( max < m and m <= M):
                        max = m
print(max)