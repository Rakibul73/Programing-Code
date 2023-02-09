import numpy as np

f1 = lambda x: 1.0*np.exp(-1.456*x)
f2 = lambda x: 0.6131200387063277*np.cos(x) + 0.5459661965327940*np.sin(x) + 0.3868799612936723*np.exp(-1.123*x)

dy1 = lambda y: -1.456*y
dy2 = lambda x, y: -1.123*y + 1.2345*np.cos(x)

x = 0.0
xn = 10.0
y = 1.0

print("Enter the value of n in even, since I used Simpson-Rule to calculate integral value")
n = int(input("Enter the value of n (Even) : "))
h = ((xn-x)/n)
gg = xn-x

print("===============================================")
print("===============================================")
print("For 1st ordinary differential equations (ODE): ")
print("===============================================")
print('x \t\ty(Euler value) \ty(True value)') 
print('%f \t%f \t%f' % (x, y, f1(x)))    

euler1 = [1.0]
true1 = [1.0]
for i in range(n):
    y += dy1(y)*h      
    x += h              
    print('%f \t%f \t%f' % (x, y, f1(x)))
    euler1.append(y)
    true1.append(f1(x))


sum = 0.0
for k in range(int(n/2)):
    sum = sum + (((2*h)/6.0) * (  (true1[k*2] - euler1[k*2])**2   + 4*(true1[2*k+1] - euler1[2*k+1])**2   + (true1[2*k+2] - euler1[2*k+2])**2 ))


rmse_error = np.sqrt(sum / gg)

print("if h =" , h , "then RMSE error is =" , rmse_error)


print("===============================================")
print("===============================================")
print("For 2nd ordinary differential equations (ODE): ")
print("===============================================")
print('x \t\ty(Euler value) \ty(True value)') 
print('%f \t%f \t%f' % (x, y, f2(x)))    

euler2 = [1.0]
true2 = [1.0]
for i in range(n):
    y += dy2(x,y)*h      
    x += h              
    print('%f \t%f \t%f' % (x, y, f2(x)))
    euler2.append(y)
    true2.append(f2(x))


sum = 0.0
for k in range(int(n/2)):
    sum = sum + (((2*h)/6.0) * (  (true2[k*2] - euler2[k*2])**2   + 4*(true2[2*k+1] - euler2[2*k+1])**2   + (true2[2*k+2] - euler2[2*k+2])**2 ))


rmse_error = np.sqrt(sum / gg)

print("if h =" , h , "then RMSE error is =" , rmse_error)