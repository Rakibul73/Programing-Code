import re
f = open("regex_sum_42.txt")
d = f.read()
y = re.findall('[0-9]+', d)
print(y)
sum = 0
for i in range(len(y)):
    c = int(y[i])
    sum += c

print(sum)