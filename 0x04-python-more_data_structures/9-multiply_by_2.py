#!/usr/bin/python3
def multiply_by_2(a_dictionary):
    new_dic = a_dictionary.copy()
    
    for key, value in new_dic.items():
        tmp = value
        new_dic[key] = tmp * 2
    return new_dic
