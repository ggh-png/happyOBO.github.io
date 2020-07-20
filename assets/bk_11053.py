leng = int(input())
num_list = list(map(int, input().split()))
max = 0

for i in range(leng):
    count = 1
    for j in range(leng - i):
