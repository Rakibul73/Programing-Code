n = 0
s = 0.0
while True :
    
    a = input('Enter a number: ')
    if a == 'done' :
        break
    try :
        a = float(a)
    except :
        print('number de')
        continue
    s = s + a
    n = n+1
    
print(n,s, s/n)    