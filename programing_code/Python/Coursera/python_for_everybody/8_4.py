fname = input("Enter file name: ")
fh = open(fname)
lst = list()
for line in fh:

    a = line.split()
    for b in a:
        if b not in lst:
            lst.append(b)


lst.sort()

print(lst)
