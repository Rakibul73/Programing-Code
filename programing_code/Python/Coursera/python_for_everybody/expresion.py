import re
fh = open("regex_sum_697043.txt")
d=list()
sum = 0
for i in fh :
    i = i.rstrip()
    x = re.findall('[0-9]+', i)

    if len(x) != 1 :
        for j in x:
            d.append(j)
        continue
    num = float(x[0])

    d.append(num)
for j in range(len(d)) :
    c = int(d[j])
    sum = sum + c
print(sum)
    
