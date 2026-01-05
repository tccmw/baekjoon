def solution(n):
    count = 0
    start = 1  # i 초기값
    while start <= n:
        total = 0
        i = start
        while i <= n:
            total += i
            if total == n:
                count += 1
                break
            elif total > n:
                break
            i += 1
        start += 1  # 사이클이 끝날 때 i 초기값 1 증가
    return count
