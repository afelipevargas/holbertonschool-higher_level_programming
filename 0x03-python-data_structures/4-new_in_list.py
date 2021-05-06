#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    if idx < 0 or idx > len(my_list) - 1:
        copy_list = my_list.copy()
        return copy_list
    else:
        my_list[idx] = element
        return my_list
