from string import ascii_lowercase

alphabet_dict = {}

for i in ascii_lowercase:
	alphabet_dict[i] = 0
max = 0
index =''
word = input()
word = word.lower()
for i in word:
    alphabet_dict[i] +=1

for i in alphabet_dict.keys():
    if alphabet_dict[i] > max:
        max = alphabet_dict[i]
        index = i
    elif index != '?' and alphabet_dict[i] == max:
        index='?'


print(index.upper())