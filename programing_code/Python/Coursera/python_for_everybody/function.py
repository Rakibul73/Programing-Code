def computepay(h,r):
    if h <= 40 :
        return h*r
    else :
        x = ((h-40)*1.5*r) + (40*r)
        return x

hrs = input("Enter Hours:")
rp = input("Enter Rate Per Hour:")
a = float(hrs)
b = float(rp)
p = computepay(a,b)
print("Pay",p)