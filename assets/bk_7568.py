# 브루트 포스



leng = int(input())
big_data = []
for i in range(leng):
    a, b = input().split()
    big_data.append([int(a),int(b),i,False,0])


for i in range(leng):
    for j in range(i+1, leng):
        if( big_data[i][0] <= big_data[j][0] or big_data[i][1] <= big_data[j][1] ) :
            big_data[i], big_data[j] = big_data[j], big_data[i]

rank = 1
term = 0
big_data[0][4] = 1
group_min = [big_data[0][0],big_data[0][1]]
for i in range(leng-1) :
    if( (group_min[0] >= big_data[i+1][0] and group_min[1] > big_data[i+1][1]) or (group_min[0] > big_data[i+1][0] and group_min[1] >= big_data[i+1][1]) ) :
        rank += 1
        big_data[i+1][4] = rank+ term
        rank = rank+ term
        term = 0
        group_min = [big_data[i+1][0],big_data[i+1][1]]
    else:
        if(group_min[0] > big_data[i+1][0]):
            group_min[0] = big_data[i+1][0]
        elif(group_min[1] > big_data[i+1][1]):
            group_min[1] = big_data[i+1][1]
        big_data[i+1][4] = rank
        term += 1
    # print(big_data[i][0], " , " , big_data[i][1]," , " , big_data[i][2] ," , " , big_data[i][3], " , " , big_data[i][4])

for i in range(leng - 1):
    for j in range(1, leng- i):
        if( big_data[j-1][2] > big_data[j][2] ) :
            big_data[j], big_data[j-1] = big_data[j-1], big_data[j]

# for i in range(leng):
#     print(big_data[i][0], " , " , big_data[i][1]," , " , big_data[i][2] ," , " , big_data[i][3], " , " , big_data[i][4])


for i in range(leng -1):
    print(big_data[i][4] , end= " ")
print(big_data[leng - 1][4])
# 21
# 1 1
# 55 185
# 55 185
# 55 185
# 55 185
# 55 185
# 46 155
# 10 180
# 70 183
# 70 30
# 2 5
# 3 6
# 88 186
# 20 40
# 170 175
# 88 186
# 88 186
# 88 186
# 88 186
# 46 155
# 20 40

61 180 - 1
60 175 - 2
58 183 - 1
55 185 - 1