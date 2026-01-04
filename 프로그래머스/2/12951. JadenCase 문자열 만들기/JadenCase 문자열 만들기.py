def solution(s):
    result = []
    new_word = True
    for c in s:
        if c == " ":
            result.append(c)
            new_word = True
        else:
            if new_word:
                result.append(c.upper()) 
            else:
                result.append(c.lower())
            new_word = False
    answer = "".join(result)
    return answer