fname = input("Enter file name: ")
if len(fname) < 1:
    fname = "mbox-short.txt"
fh = open(fname)
count = 0
for a in fh:
    a = a.rstrip()
    if a.startswith("From "):
        a.split()
        b = a.split()
        print(b[1])
        count = count + 1
print("There were", count, "lines in the file with From as the first word")
