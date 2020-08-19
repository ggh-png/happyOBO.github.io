output = input()
sm = int(input())
output = output.split(" ")
for i in range(0,len(output)) :
    output[i] = int(output[i])
pre_tuple = []
count = 0
output.sort()
for i in range(0,len(output)) :
    for j in range(i+1, len(output)) :
        if( output[i] + output[j] == sm ):
            if(not ((output[i], output[j]) in pre_tuple)):
                print(output[i], output[j])
                pre_tuple.append((output[i], output[j]) )
                count += 1

print(count)

