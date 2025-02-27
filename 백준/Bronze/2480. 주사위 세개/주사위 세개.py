a, b, c = map(int, input().split())

dice = [a, b, c]

if dice.count(a) == 3:
    prize = 10000 + a * 1000
elif dice.count(a) == 2:
    prize = 1000 + a * 100
elif dice.count(b) == 2:
    prize = 1000 + b * 100
elif dice.count(c) == 2:
    prize = 1000 + c * 100
else:
    prize = max(dice) * 100

print(prize)
