name = input("Enter file:")
if len(name) < 1:
    name = "mbox-short.txt"
fh = open(name)

di = dict()

for a in fh:
    a = a.rstrip()
    if a.startswith("From "):
        b = a.split()
        di[b[1]] = di.get(b[1], 0) + 1

big_v = None
big_k = None
for k, v in di.items():
    if big_v is None or v > big_v:
        big_v = v
        big_k = k
print(big_k, big_v)
