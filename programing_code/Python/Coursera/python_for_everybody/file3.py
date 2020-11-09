h = open('123.txt')

for g in h :
    g = g.rstrip()
    if g.startswith('abc') :
        print(g)
