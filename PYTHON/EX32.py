a=2
b=1
c=2
q= int(input('DIGITE A QUANTIDADE DE VALORES QUE DESEJA SOMAR A SEQUENCIA: '))
while((q<=0) or (q>100)):
    print('VALOR INVALIDO.')
    q = int(input('DIGITE VALORES APENAS ENTRE O E 100: '))
print(f'{a}\n')
for i in range(1, q, 1):
    b = b+ 2
    a = b + a
    print(f'{a}')
    c = c + a
print(f'{c}')
