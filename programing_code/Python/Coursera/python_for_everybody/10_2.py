name = input("Enter file:")
if len(name) < 1:
    name = "mbox-short.txt"
fh = open(name)
di = dict()


for a in fh:
    a = a.rstrip()
    if a.startswith("From "):
        b = a.split()
        c = b[5].split(":")

        di[c[0]] = di.get(c[0], 0) + 1
d = sorted([(k, v) for k, v in di.items()])

for k, v in d:
    print(k, v)
