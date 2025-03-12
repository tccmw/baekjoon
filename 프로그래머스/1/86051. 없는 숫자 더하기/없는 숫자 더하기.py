def solution(numbers):
    a = 0
    for i in range(0,10):
        if i not in numbers:
            a += i
    return a