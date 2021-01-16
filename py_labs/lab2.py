import math

a = float(input('Введіть число а: '))

if a > 0:
    print('x = -1*(math.fabs(a - 1))/(2*a)')
    
    #Покрокове розв'язання:
    b = math.fabs(a - 1)
    print('b = math.fabs(a - 1) = ' , b)
    b = -1 * b
    print('b = -1 * b = ' , b)
    b = b / (2 * a)
    print('b = b / (2 * a) = ' , b)
    
    #Кінцевий вираз:
    x = -1*(math.fabs(a - 1))/(2*a)
else:
    print('x = (math.log(1 + a*a))/2')
    
    #Покрокове розв'язання:
    b = 1 + a*a
    print('b = 1 + a*a = ' , b)
    b = math.log(b)
    print('b = math.log(b) = ' , b)
    b = b/2
    print('b = b/2 = ' , b)
    
    #Кінцевий вираз:
    x = (math.log(1 + a*a))/2
print ('x = ' , x)
