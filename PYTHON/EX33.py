numeros = [10]
for i in range (0, 10, 1):
    a = int(input('DIGITE UM VALOR: '))
    numeros.append(a)
print('OS VALORES DIGITADOS INVERSAMENTE SÃO: ')
for i in range (10, 0, -1):
    print(numeros[i])
