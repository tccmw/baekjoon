L, P = map(int, input().split())

articles = list(map(int, input().split()))

actual_participants = L * P

for article in articles:
    print(article - actual_participants, end=' ')
    