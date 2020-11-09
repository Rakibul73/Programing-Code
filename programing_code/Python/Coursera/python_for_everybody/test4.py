i = "abc,xyz,qwe"
for o in i :
    print(o)

print(i[0:3])
print(i[4:7])
print(i[8:11])
i = 'sad' + i
print(i)
i = 'uuu' + ' ' + i
print(i)

if 'abc' in i :
    print('True')