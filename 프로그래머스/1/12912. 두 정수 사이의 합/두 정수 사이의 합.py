def solution(a, b):
    start, end = min(a,b), max(a,b)
    return (end - start + 1) * (end + start) // 2

print(solution(3,5))