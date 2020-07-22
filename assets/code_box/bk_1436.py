N = int(input())
count = 0
num = 0
while(count < N):
    num += 1
    str_num = str(num)
    if("666" in str_num):
        count += 1
print(num)