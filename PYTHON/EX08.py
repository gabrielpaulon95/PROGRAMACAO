peso = float(input("Digite o peso da pessoa: "))
altura = float(input("Digite a altura da pessoa: "))
imc= peso /pow(altura, 2) 

print(f"o IMC da pessoa é: {imc: .1f}")