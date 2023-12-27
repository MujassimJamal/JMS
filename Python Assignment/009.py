
Matrix = list[list[int]]
def matMul(matA: Matrix, matB: Matrix) -> None:
    for rowOfMatA in range(len(matA)):
        for colOfMatB in range(len(matB[0])):
            vecSum: int = 0
            for colOfMatA  in range(len(matA[0])):
                vecSum += (matA[rowOfMatA][colOfMatA] * matB[colOfMatA][colOfMatB]);
            print(vecSum, end=" ")
        print(end="\n")


matA = [[1,2,3],
        [1,2,3],
        [1,2,3]]

matB = [[1,1,1],
        [2,1,2],
        [3,2,1]]

print("Result: \n")
matMul(matA, matB)

