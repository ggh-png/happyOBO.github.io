# 퀸은 앞, 뒤, 대각선으로 움직임
# 백트래킹
# import copy 

N = int(input())
count = 0

def back(idx_list,n):
    idx_l = []
    for i in idx_list:
        idx_l.append(i)
    global count
    # idx_l = cpy_idx(idx_list)
    # idx_list = copy.deepcopy(idx_list)
    if(n == N):
        count += 1
    else:
        
        for y in range(N):
            save = 0
            tup = (n,y)
            for t in idx_list:
                if(t[0] == tup[0]):
                    save = 2
                    break
                elif(t[1] == tup[1]):
                    save = 1
                    break
                elif(abs(t[0]-tup[0]) == abs(t[1] - tup[1])):
                    save = 1
                    break
            
            if(save == 0):
                idx_l.append((n,y))
                back(idx_l,n+1)
                idx_l.pop()
            elif(save == 2):
                break

            
back([],0)
print(count)
            

    
        


