count = int(input())

a = []
result =[]
for i in range(count):
    a.append(input())

for i in range(count):
    li = a[i].split()
    sum = float(li[0])
    for j in li:
        if j == '@':
            sum  = sum*3
        elif j =='%':
            sum = sum+5
        elif j =='#':
            sum = sum-7
    result.append(sum)

for i in result:
    print(f'{i:.2f}')
