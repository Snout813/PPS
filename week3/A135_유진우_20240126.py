n = int(input())
book = {}
for _ in range(n):
    title = input()
    if title in book:
        book [title] +=1
    else :
        book [title]=1
    
max = max(book.values())
best = []
for title, count in book.items():
    if count == max:
        best.append(title)
best.sort()
print(best[0])