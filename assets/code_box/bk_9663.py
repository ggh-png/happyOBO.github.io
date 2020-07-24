# 퀸은 앞, 뒤, 대각선으로 움직임
# 백트래킹
import copy 

N = int(input())
count = 0

def back(check,n):
    global count
    check_arr = copy.deepcopy(check)
    if(n == N):
        count += 1
    else:
        for y in range(N):
            if(check_arr[n][y]):
                arr = copy.deepcopy(check)
                for i in range(N):
                    arr[n][i] = False
                    arr[i][y] = False
                i = 1
                while ( n + i < N or y + i  < N or n - i >= 0 or y - i  >= 0 ):
                    if (n + i < N and y + i  < N):
                        arr[n+i][y+i] = False
                    if (n - i >= 0 and y - i  >= 0):
                        arr[n -i][y-i] = False
                    if (n - i >= 0 and y + i  < N ):
                        arr[n -i][y+i] = False
                    if(n + i < N and y - i  >= 0 ):
                        arr[n +i][y-i] = False
                    i += 1
                future = True
                for i in range(n+1,N) :
                    if(not True in arr[i]):
                        future = False
                        break
                if(future):
                    back(arr,n+1)
                




# 이중 배열 초기화
arry = [[True]*N for _ in range(N)]


back(arry,0)
print(count)
            

    
        


