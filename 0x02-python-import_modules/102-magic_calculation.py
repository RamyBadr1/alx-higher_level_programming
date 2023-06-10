def magic_calculation(a, b):
    from magic_calculation_102 import add, sub

    if a < b:
        result = add(a, b)
        for index in range(4, 6):
            result = add(result, index)
        return (result)

    else:
        return(sub(a, b))
