fname = input("Enter file name: ")
fh = open(fname)
c = 0
y = 0
for line in fh:
    if line.startswith("X-DSPAM-Confidence:"):
        i = line.find("0")
        r = line[i:]
        x = float(r)
        y = x + y
        c = c + 1
z = y / c
print("Average spam confidence:", z)
