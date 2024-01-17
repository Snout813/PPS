password =[]
while(1) :
    pw = input()
    if pw =="end":
        break
    password.append(pw)
for i in password:
    vowel = False
    v_3count = 0
    c_3count =0
    w_2count =False
    word = 'a'
    for j in range(len(i)):
        if j ==0:
            word = i[j]
        else:
            if word == i[j]:
                if i[j]!='e' and i[j]!='o':
                    w_2count = True
                    break
            else :
                word = i[j]
        if i[j] in 'aeiou':
            vowel = True
            v_3count +=1
            c_3count =0
        else :
            c_3count+=1
            v_3count =0
        if(c_3count >=3 or v_3count >=3):
            break
    if vowel == False or w_2count ==True or c_3count >=3 or v_3count >=3:
        print(f"<{i}> is not acceptable.")
    else :
        print(f"<{i}> is acceptable.")
        

