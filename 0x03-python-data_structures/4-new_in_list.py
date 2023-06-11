#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    duplicate = my_list[:]
    if idx >= 0 and idx < len(duplicate):
       duplicate[idx] = element
    return duplicate
