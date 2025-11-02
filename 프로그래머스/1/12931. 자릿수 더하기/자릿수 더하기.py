def solution(n):
    answer = 0
    List = list(str(n))
    for i in range(len(List)):
        j=int(List[i])
        answer+=j

    return answer