def isSafe(row,col):
    for i in range(row-1,-1,-1):
        if board[i][col]=='Q':
            return False
    for i in range(col-1,-1,-1):
        if board[row][i]=='Q':
            return False
 
    for i in range(min(row,col),-1,-1):
        if board[row-i][col-i]=='Q':
            return False
    for i in range(max(row,col),-1,-1):
        if row-i >=0 and row<8 and col+i>=0 and col+i<8 and board[row-i][col+i]=='Q':
            return False
 
    return True
        
def place(row):
    global c,board
    if row==8:
        c+=1
        return True
    else:
        for i in range(8):
            if board[row][i]=='.' and isSafe(row,i):
                board[row][i]='Q'
                place(row+1)
                board[row][i]='.'
 
 
board=[]
for i in range(8):
    board.append(list(input()))
c=0
place(0)
print(c)