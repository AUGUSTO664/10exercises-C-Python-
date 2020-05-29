#compute the matrix multiplication between a matrix A and B
#do not use any library. to get it. I will use 3 nested for loops

def print_matrix(C):     #this function print a matrix
    for i in range(3):
        for j in range(3):
             print(C[i][j], end=' ')
        print()

A=[[1,2,3],[4,5,6],[7,8,9]]
B=[[1,2,3],[4,5,6],[7,8,9]]
C=[[0,0,0],[0,0,0],[0,0,0]] #creating the spaces to store the results
#this nested for loop multiply the elements of A by the elements of B
#in A the k index goes through the columns in the firs row and multiply them
#with  B elements in the first column and so on. when j  changes it moves to
# B column 2
for i in range(3):
    for j in range(3):
        for k in range(3):
            C[i][j] += A[i][k]*B[k][j]

print_matrix(C)


