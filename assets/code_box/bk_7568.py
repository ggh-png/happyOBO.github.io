# 브루트 포스
leng = int(input())
ori_data = []
height_data = []
weight_data = []

for i in range(leng):
    a, b = input().split()
    ori_data.append([int(a),int(b)])
    weight_data.append(int(a))
    height_data.append(int(b))

total_rank = []

for i in range(leng):
    total_rank.append(1)

for i in range(leng):
    for j in range(leng):
        if(i == j) :
            pass
        elif( (weight_data[i] > weight_data[j]) and (height_data[i] > height_data[j])):
            total_rank[j] += 1
            # print(i,">", j ,":", weight_data[i] ,">", weight_data[j]," ", height_data[i] ,">", height_data[j])

for i in range(leng -1):
    print(total_rank[i] , end= " ")
print(total_rank[leng - 1])