#!/usr/bin/python3
def no_c(my_string):
    index = 0
    new_string = ''
    while index < len(my_string):
        if my_string[index] != 'c' or my_string[index] != 'C':
            new_string += my_string[index]
        index += 1
    return new_string
