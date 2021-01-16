print('Дон Василь ІС-01')
n = int(input('Введіть число n: '))
k = 1
if n == 1 or n == 2:
    print('k(' , n , ') = ' , k)
else:
    for i in range(3 , n + 1):
        k = k * ( 4*i - 6) / i
        print('k(' , i , ') =' , k)
        n += 1
