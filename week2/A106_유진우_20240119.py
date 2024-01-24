num = int(input())
result =[]
for i in range(num):
    result.append(0)
    str = input()
    for j in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ':
        if j not in str:
            result[i] += ord(j)

for i in result:
    print(i)