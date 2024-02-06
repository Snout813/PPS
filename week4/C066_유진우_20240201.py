num = int(input())
count =1
for i in range(666, 10000000,1):
    if "666"in str(i) :
        if count == num:
            print(i)
            break
        count +=1