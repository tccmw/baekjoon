def solution(x):
    n = sum(int(i) for i in str(x))
    return False if x % n else True