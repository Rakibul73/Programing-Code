import numpy as np
import TableIt

myList1 = [ ["", "Euler Rmse Error", "Heuns Rmse Error" , "Runge-Kutta Rmse Error"] ]
myList2 = [ ["", "Euler Rmse Error", "Heuns Rmse Error" , "Runge-Kutta Rmse Error"] ]



f1 = lambda x: 1.0*np.exp(-1.456*x)
f2 = lambda x: 0.6131200387063277*np.cos(x) + 0.5459661965327940*np.sin(x) + 0.3868799612936723*np.exp(-1.123*x)

dy1 = lambda y: -1.456*y
dy2 = lambda x, y: -1.123*y + 1.2345*np.cos(x)

def func(n):
    x = 0.0
    xn = 10.0
    y = 1.0

    print("Enter the value of n in even, since I used Simpson-Rule to calculate integral value")
    # n = int(input("Enter the value of n (Even) : "))
    
    h = ((xn-x)/n)
    gg = xn-x

    print("\n\n\n-------------------------------------------------")
    print("   For 1st ordinary differential equations (ODE): ")
    print("-------------------------------------------------")
    print("\t\tEuler Method \t\t\t|")
    print("\t\t\t\t\t\t|")

    print('x \t\ty(Euler value) \ty(True value) \t|') 
    print('%f \t%f \t%f \t|' % (x, y, f1(x)))    
    euler1 = [1.0]
    euler1_true = [1.0]
    for i in range(n):
        y += dy1(y)*h     
        x += h             
        print('%f \t%f \t%f \t|' % (x, y, f1(x)))
        euler1.append(y)
        euler1_true.append(f1(x))



    x = 0.0
    xn = 10.0
    y = 1.0
    h = ((xn-x)/n)
    gg = xn-x


    print("-------------------------------------------------")
    print("-------------------------------------------------")
    print("\t\tRunge-Kutta Method \t\t|")
    print("\t\t\t\t\t\t|")

    print('x \t\ty(RK4) \t\ty(True value) \t|')
    print('%f \t%f \t%f \t|' % (x, y, f1(x)))
    runge_kutta1 = [1.0]
    runge_kutta1_true = [1.0]
    for i in range(n):
        K1 = h * dy1(y)
        K2 = h * dy1(y + K1/2)
        K3 = h * dy1(y + K2/2)
        K4 = h * dy1(y + K3)
        y += 1/6*(K1 + 2*K2 + 2*K3 + K4)
        x += h
        print('%f \t%f \t%f \t|' % (x, y, f1(x)))
        runge_kutta1.append(y)
        runge_kutta1_true.append(f1(x))
    print("-------------------------------------------------")
    print("-------------------------------------------------")
    print("\t\tHeun's Method \t\t\t|")
    print("\t\t\t\t\t\t|")

    x = 0.0
    xn = 10.0
    y = 1.0
    h = ((xn-x)/n)
    gg = xn-x

    print('x \t\ty(Heun) \ty(True value) \t|')
    print('%f \t%f \t%f \t|' % (x, y, f1(x)))
    heuns1 = [1.0]
    heuns1_true = [1.0]
    while x+h <=xn:
        l = (h/2) * (dy1(y) + dy1(y+h*dy1(y)))
        y = y+l
        x = x+h
        print('%f \t%f \t%f \t|' % (x, y, f1(x)))
        heuns1.append(y)
        heuns1_true.append(f1(x))




    print("-------------------------------------------------\n\n")
    print("\n\n\n-------------------------------------------------")
    print("   For 2nd ordinary differential equations (ODE): ")
    print("-------------------------------------------------")
    print("\t\tEuler Method \t\t\t|")
    print("\t\t\t\t\t\t|")

    x = 0.0
    xn = 10.0
    y = 1.0
    h = ((xn-x)/n)
    gg = xn-x

    print('x \t\ty(Euler value) \ty(True value) \t|') 
    print('%f \t%f \t%f \t|' % (x, y, f2(x)))    


    euler2 = [1.0]
    euler2_true = [1.0]
    for i in range(n):
        y += dy2(x,y)*h     
        x += h             
        print('%f \t%f \t%f \t|' % (x, y, f2(x)))
        euler2.append(y)
        euler2_true.append(f2(x))

    print("-------------------------------------------------")
    print("-------------------------------------------------")
    print("\t\tRunge-Kutta Method \t\t|")
    print("\t\t\t\t\t\t|")

    x = 0.0
    xn = 10.0
    y = 1.0
    h = ((xn-x)/n)
    gg = xn-x

    print('x \t\ty(RK4) \t\ty(True value) \t|')
    print('%f \t%f \t%f \t|' % (x, y, f2(x)))
    runge_kutta2 = [1.0]
    runge_kutta2_true = [1.0]
    for i in range(n):
        K1 = h * dy2(x,y)
        K2 = h * dy2(x + h/2, y + K1/2)
        K3 = h * dy2(x + h/2, y + K2/2)
        K4 = h * dy2(x + h, y + K3)
        
        y += 1/6*(K1 + 2*K2 + 2*K3 + K4)
        x += h
        print('%f \t%f \t%f \t|' % (x, y, f2(x)))
        runge_kutta2.append(y)
        runge_kutta2_true.append(f2(x))



    print("-------------------------------------------------")
    print("-------------------------------------------------")
    print("\t\tHeun's Method \t\t\t|")
    print("\t\t\t\t\t\t|")

    x = 0.0
    xn = 10.0
    y = 1.0
    h = ((xn-x)/n)
    gg = xn-x

    print('x \t\ty(Heun) \ty(True value) \t|')
    print('%f \t%f \t%f \t|' % (x, y, f2(x)))
    heuns2 = [1.0]
    heuns2_true = [1.0]
    while x+h <=xn:
        l = (h/2) * (dy2(x,y) + dy2(x+h, y+h*dy2(x,y)))
        y = y+l
        x = x+h
        print('%f \t%f \t%f \t|' % (x, y, f2(x)))
        heuns2.append(y)
        heuns2_true.append(f2(x))


    print("-------------------------------------------------\n\n")







    # rmse error for f1
    sum = 0.0
    for k in range(int(n/2)):
        sum = sum + (((2*h)/6.0) * (  (euler1_true[k*2] - euler1[k*2])**2   + 4*(euler1_true[2*k+1] - euler1[2*k+1])**2   + (euler1_true[2*k+2] - euler1[2*k+2])**2 ))
    euler1_rmse_error = np.sqrt(sum / gg)
    print("if h =" , h , "then euler1_rmse_error RMSE error is =" , euler1_rmse_error)

    sum = 0.0
    for k in range(int(n/2)):
        sum = sum + (((2*h)/6.0) * (  (heuns1_true[k*2] - heuns1[k*2])**2   + 4*(heuns1_true[2*k+1] - heuns1[2*k+1])**2   + (heuns1_true[2*k+2] - heuns1[2*k+2])**2 ))
    heuns1_rmse_error = np.sqrt(sum / gg)
    print("if h =" , h , "then heuns1_rmse_error RMSE error is =" , heuns1_rmse_error)

    sum = 0.0
    for k in range(int(n/2)):
        sum = sum + (((2*h)/6.0) * (  (runge_kutta1_true[k*2] - runge_kutta1[k*2])**2   + 4*(runge_kutta1_true[2*k+1] - runge_kutta1[2*k+1])**2   + (runge_kutta1_true[2*k+2] - runge_kutta1[2*k+2])**2 ))
    runge_kutta1_rmse_error = np.sqrt(sum / gg)
    print("if h =" , h , "then runge_kutta1_rmse_error RMSE error is =" , runge_kutta1_rmse_error)



    # rmse error for f2
    sum = 0.0
    for k in range(int(n/2)):
        sum = sum + (((2*h)/6.0) * (  (euler2_true[k*2] - euler2[k*2])**2   + 4*(euler2_true[2*k+1] - euler2[2*k+1])**2   + (euler2_true[2*k+2] - euler2[2*k+2])**2 ))
    euler2_rmse_error = np.sqrt(sum / gg)
    print("if h =" , h , "then euler2_rmse_error RMSE error is =" , euler2_rmse_error)

    sum = 0.0
    for k in range(int(n/2)):
        sum = sum + (((2*h)/6.0) * (  (heuns2_true[k*2] - heuns2[k*2])**2   + 4*(heuns2_true[2*k+1] - heuns2[2*k+1])**2   + (heuns2_true[2*k+2] - heuns2[2*k+2])**2 ))
    heuns2_rmse_error = np.sqrt(sum / gg)
    print("if h =" , h , "then heuns2_rmse_error RMSE error is =" , heuns2_rmse_error)

    sum = 0.0
    for k in range(int(n/2)):
        sum = sum + (((2*h)/6.0) * (  (runge_kutta2_true[k*2] - runge_kutta2[k*2])**2   + 4*(runge_kutta2_true[2*k+1] - runge_kutta2[2*k+1])**2   + (runge_kutta2_true[2*k+2] - runge_kutta2[2*k+2])**2 ))
    runge_kutta2_rmse_error = np.sqrt(sum / gg)
    print("if h =" , h , "then runge_kutta2_rmse_error RMSE error is =" , runge_kutta2_rmse_error)


    myList1.insert(1 , ["For n = "+str(n) ,euler1_rmse_error , heuns1_rmse_error , runge_kutta1_rmse_error])
    myList2.insert(1 , ["For n = "+str(n) ,euler2_rmse_error , heuns2_rmse_error , runge_kutta2_rmse_error])



func(8)
func(4)

print("\n\n\n\n\n")
print("                    For 1st ordinary differential equations (ODE): ")
TableIt.printTable(myList1, useFieldNames=True, color=(26, 156, 171))
print("                    For 2nd ordinary differential equations (ODE): ")
TableIt.printTable(myList2, useFieldNames=True, color=(26, 156, 171))

