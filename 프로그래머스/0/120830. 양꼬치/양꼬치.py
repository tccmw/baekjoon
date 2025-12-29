def solution(n, k):
    x = n // 10 * 2000
    answer = n * 12000 + k * 2000 - x 
    return answer