#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary is not None:
        studentsNumber = len(a_dictionary.values())
        if studentsNumber > 0:
            max_score = max(a_dictionary.values())
            for i in a_dictionary.keys():
                if a_dictionary[i] == max_score:
                    return i
    return None
