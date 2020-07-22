# 브루트 포스
N = int(input())

result = 0
for i in range(N):
    str_i = str(i)
    sum = i
    for j in range(len(str_i)):
        sum += int(str_i[j])
    if(sum == N):
        result = i
        break

print(result)
