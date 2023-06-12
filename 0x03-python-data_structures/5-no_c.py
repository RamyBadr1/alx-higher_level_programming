def no_c(my_string):
    newStr = ""
    for char in my_string:
        if char is not 'c' and char is not 'C':
            new += char
    return newStr
