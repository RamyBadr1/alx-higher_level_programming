#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    new = []
    for i in matrix:
        new_sub_matrix = map(lambda num: num**2, i)
        new.append(list(new_sub_matrix))
    return new
