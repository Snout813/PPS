# 다시 풀기
def c(N):
    sum = 0 
    for i in range(1, N+1):
        l = [int(n) for n in str(i)]
        if len(l) < 3:
            sum = sum + 1 
        else: 
            d = l[1] - l[0] 
            for a in range(1, len(l)-1):
                if l[a+1] - l[a] == d:
                    sum = sum + 1 
    return sum
print(c(int(input())))