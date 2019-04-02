def check(myStr): 
    stack = [] 
    for i in myStr: 
        if i == '(': 
            stack.append(i) 
        elif i == ')': 
            pos = ')'.index(i) 
            if ((len(stack) > 0) and
                (open_list[pos] == stack[len(stack)-1])): 
                stack.pop() 
            else: 
                return "Unbalanced"
    if len(stack) == 0: 
        return "Balanced"