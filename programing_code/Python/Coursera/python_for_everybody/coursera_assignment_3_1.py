hrs = input("Enter Hours:")
h = float(hrs)
rp = input("Enput Rate Per Hour: ")
r = float(rp)
if h <= 40 :
    print(h*r)
else :
    print(((h - 40) * 1.5 * r) + (40 * r))