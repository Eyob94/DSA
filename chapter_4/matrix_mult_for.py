matrix_a = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]
matrix_b = [[13, 14, 15, 16], [9, 10, 11, 12], [5, 6, 7, 8], [1, 2, 3, 4]]
matrix_c = [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]


for i in range(len(matrix_b)):
    for j in range(len(matrix_b[i])):
        matrix_c[i][j] = 0
        for k in range(len(matrix_b[i])):
            matrix_c[i][j] += matrix_a[i][k]*matrix_b[k][j]

for i in range(len(matrix_b)):
    for j in range(len(matrix_b[i])):
        print(matrix_c[i][j], end=" ")
    print('')
