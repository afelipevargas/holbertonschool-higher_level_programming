#!/usr/bin/python3
def best_score(a_dictionary):
    if not isinstance(a_dictionary, dict) or len(a_dictionary) == 0:
        return None
    new_dic = a_dictionary.copy()
    res = 0
    for key, value in new_dic.items():
        if res < value:
            res = value
            key_res = key
    return key_res
