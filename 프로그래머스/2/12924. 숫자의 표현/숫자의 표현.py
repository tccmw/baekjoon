def solution(n):
    count = 0
    for start in range(1, n+1):
        total = 0
        i = start
        while total < n:
            total += i
            i += 1
        if total == n:
            count += 1
    return count
