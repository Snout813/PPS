count = int(input())
number = []
for i in range(count):
    num1 = input()
    num2 = ""
    for j in range(-1,-len(num1)-1 ,-1):
        num2 += num1[j]
    result = int(num1) + int (num2)
    number.append(str(result))
for i in number:
    for j in range(int(len(i)/2)) :
        if(i[j] !=i[-1-j]):
            print("NO")
            break
    else:
        print("YES")