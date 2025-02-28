scores = []
for _ in range(5):
    score = int(input())
    if score < 40:
        scores.append(40) 
    else:
        scores.append(score)  

average = sum(scores) // 5  

print(average)
