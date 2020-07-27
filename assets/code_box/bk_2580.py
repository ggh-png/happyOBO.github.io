import copy
sudoku = []
blank_idx = []
for i in range(9):
    sudoku_row = []
    sudoku_row = list(map(int, input().split()))
    sudoku.append(sudoku_row)
    r = -1
    for j in range(sudoku_row.count(0)):
        # print(sudoku_row.count(0))
        row = sudoku_row[r+1:]
        blank_idx.append([i,r + 1 + row.index(0)])
        # print(i , " ", r + 1 + row.index(0))
        r = row.index(0)

def back(n,fill_blank):
    fill = copy.deepcopy(fill_blank)
    global total_blanks,blank_idx,sudoku
    if(n == total_blanks):
        for i in range(9):
            for j in range(9):
                if(sudoku[i][j] == 0):
                    print(fill[0],end="")
                    if(len(fill) > 1):
                        fill = fill[1:]
                else:
                    print(sudoku[i][j],end= "")
                if(j < 8):
                    print("",end=" ")
            print("")
    else :
        for i in range(1,10):
            is_fill = True
            if(not i in sudoku[blank_idx[n][0]]):
                smallcube_row = blank_idx[n][0] // 3
                smallcube_col = blank_idx[n][1] // 3
                for j in range(9):
                    if(sudoku[j][blank_idx[n][1]] == i):
                        is_fill = False
                        break
                    if( j < 3):
                        if (i in sudoku[smallcube_row * 3 + j][smallcube_col * 3 : smallcube_col * 3 + 3]):
                            is_fill = False
                            break
                if(is_fill):
                    fill.append(i)
                    back(n+1,fill)
                

                
        


total_blanks = len(blank_idx)
# print(total_blanks)
back(0,[])