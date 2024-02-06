alpha = input()

cro = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

for i in cro:
    while  True:
        if i in alpha:
            alpha = alpha.replace(i, '*',1)
        else:
            break
print(len(alpha))
