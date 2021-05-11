#!/usr/bin/python3
def common_elements(set_1, set_2):
    new_set = set_1.copy()
    new_set2 = set_2.copy()

    new_set.intersection_update(new_set2)
    return new_set
