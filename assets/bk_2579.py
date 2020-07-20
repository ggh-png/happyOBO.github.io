# stairs_count = int(input())
# stairs = [input() for _ in range(stairs_count)]
# for i in range(len(stairs)):
#     stairs[i] = int(stairs[i])
#     print(stairs[i])

# flag = -1

# cont_one = 0
# count = stairs_count
# stair_list_of_list = []
# while (True):
# while(count <= stairs_count):
    
# a = []
# for i in range(stairs_count):
#     for k in range(stairs_count/2+1):
#     for j in range(i):
#         a.append[]

# a = int(input())
# str = ''
# for i in range(a):
#     for j in range(a - (i+1)):
#         str += ' '
    # for j in range(2*i + 1):
    #     str += '*'
    # print(str)
    # str = ''

# l = []
# count = stairs_count
# # 2의 개수
# for i in range(stairs_count/2 +1):
#     flag = 0
#     # 2 의 위치
#     for j in range(stairs_count/2 + ):
#         while(count > 0):
#             flag += 1


tot = 6
l = [[]]
count = tot
not_gbg = True
leng = 0
# 2의 개수
while (count > 0):
    lis = []
    for j in range(count):
        if(leng > tot):
            not_gbg = False
            break
        lis.append(1)
        leng += 1
        
    for j in range(tot-count):
        if(leng+1 > tot):
            not_gbg = False
            break
        lis.append(2)
        leng += 2
    l.append(lis)
    gbg = True
    leng = 0
    count-=1

for i in l:
    for j in i:
        print(j,end="")
    print("")
