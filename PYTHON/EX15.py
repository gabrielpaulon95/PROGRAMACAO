peso = float(input("Digite o peso da pessoa: "))
altura = float(input("Digite a altura da pessoa: "))
imc= peso /pow(altura, 2) 

if imc < 20:
    print("ABAIXO DO PESO")
    print(f" o imc é: {imc: .2f}")
    
elif imc < 25:
    print("PESO IDEAL")
    print(f" o imc é: {imc: .2f}")

else:
    print("ACIMA DO PESO")
    print(f" o imc é: {imc: .2f}")
