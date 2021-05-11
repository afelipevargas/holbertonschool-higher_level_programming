#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new_matrix = []
    for i in matrix:
        new_matrix.append(i.copy())
    index = 0
    while index < len(new_matrix):
        value = 0
        while value < len(new_matrix[index]):
            tmp = 0
            tmp += new_matrix[index][value]
            new_matrix[index][value] = (tmp ** 2)
            value += 1
        index += 1
    return new_matrix
