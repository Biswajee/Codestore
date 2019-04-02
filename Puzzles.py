def puzzle(str):
    count = {}
    length = len(str)
    l = list(str)
    for i in l:
        count[i] = str.count(i)
    sort_val = sorted(count.values())
    if (length - sort_val[-1] - sort_val[-2]) <= (length/2):
        return True
    else:
        return False  
