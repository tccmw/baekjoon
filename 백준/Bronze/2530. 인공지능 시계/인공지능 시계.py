A, B, C = map(int, input().split())
D = int(input()) 

total_seconds = A * 3600 + B * 60 + C + D

final_hour = (total_seconds // 3600) % 24
final_minute = (total_seconds % 3600) // 60
final_second = total_seconds % 60

print(final_hour, final_minute, final_second)
