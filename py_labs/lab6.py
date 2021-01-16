import math

def perevirka():
    d = math.sqrt(x*x + y*y)
    global min_d, min_n, min_x, min_y
    if i == 1:
        min_d = d
    if d <= min_d:
        min_n = i
        min_x = x
        min_y = y
        min_d = d

print('Дон Василь ІС-01')
n = int(input('Введiть кiлькiсть точок для обчислення: '))
for i in range(1, n+1):
    print('Точка' , i)
    x = float(input('Введіть x:'))
    y = float(input('Введіть y:'))
    perevirka()
print('Найближча точка до початку координат - точка' , min_n , '(' , min_x , ';' , min_y , ')')