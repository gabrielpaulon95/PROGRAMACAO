n1 = int(input("Digite o primeiro valor: "))
n2 = int(input("Digite o segundo valor: "))
n3 = int(input("Digite o segundo valor: "))

if n1 < n2:
    if n2<n3:
        print("o maior valor e: ",n3)
    else: 
        print("o maior valor e ",n2)
elif n1 < n3:
    print("o maior valor e ",n3)
else:
    print(" o maior valor e :",n1)