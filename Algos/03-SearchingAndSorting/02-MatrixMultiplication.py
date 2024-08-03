# Write the formulae

def MatrixMul(A,B, n):
    
    C = [[0 for j in range(n)] for i in range(n)] # Initialize a null matrix
    for i in range(n):
        for j in range(n):
            
            for k in range(n):
                C[i][j] = C[i][j] + A[i][k] * B[k][j]

    return C

# Complete this later
def MatrixMulRec(A, B, C, n):
    if n == 1:
        C[0][0] = A[0][0]*B[0][0]
    else:
        C[0][0] = MatrixMulRec(A[0:0], B[0:0], 1) 

    pass

def printoutput(C):
    for i in range(len(C)):
        for j in range(len(C)):
            print(C[i][j], end= " ")
        print("\n")

if __name__ == "__main__":
    A = [
        [1, 0, 0],
        [0, 1, 0],
        [0, 0, 1]
    ]

    B = [
        [2, 1, 2],
        [1, 2, 2],
        [3, 5, 8]
    ]

    printoutput(MatrixMul(A, B, len(A)))