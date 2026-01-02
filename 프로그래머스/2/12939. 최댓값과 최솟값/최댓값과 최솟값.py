def solution(s):
    answer = list(map(int,s.split()))
    arrM = max(answer)
    arrm = min(answer)
    return f"{arrm} {arrM}"