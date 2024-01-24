str = input()
zero =0
one =0
last =""
for i in range(len(str)):
    if i ==0:
        last =str[i]
    else :
        if last != str[i]:
            if last =="0":
                zero +=1
                last = str[i]
            else :
                one +=1
                last = str[i]
            if i == len(str) -1:
                if str[i] =="0":
                    zero +=1
                else: 
                    one+=1
        else: 
            if i == len(str)-1:
                if str[i] =="0":
                    zero +=1
                else :
                    one +=1


if zero > one:
    print(one)
elif zero <=one :
    print(zero)