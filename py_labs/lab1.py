import math
print( 'Дон Василь ІС-01' )
M = int( input( 'Введіть число M: ' ) ) #Введення змінних
N = int( input( 'Введіть число N: ' ) )
D = math.floor(M/N) #Обчислення частки
Mol = D%10 #Молодша цифра цiлої частини
St = math.floor( 10*(M/N - D) ) #Старша цифра дробової частини
print( 'Молодша цифра цілої частини частки від ділення M на N: ' , Mol ) #Виведення результату
print( 'Старша цифра дробової частини частки ділення M на N: ' , St )
