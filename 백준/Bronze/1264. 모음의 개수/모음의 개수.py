vowels = set('aeiouAEIOU')

while True:
    line = input().strip()
    if line == '#':
        break
    count = 0
    for char in line:
        if char in vowels:
            count += 1
    print(count)