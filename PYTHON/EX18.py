sexo =(input("Digite F para feminino ou M para masculino: "))
peso = float(input("Digite seu peso: "))
altura = float(input("Digite sua altura: "))

IMC = peso / (altura**2)

if (sexo == 'f') :
    if IMC< 19:
        print("ABAIXO DO PESO")
        print(f" o IMC é: {IMC: .2f}")
    
    elif IMC < 24:
        print("PESO IDEAL")
        print(f" o IMC é: {IMC: .2f}")
    
    else:
        print("ACIMA DO PESO")
        print(f" o IMC é: {IMC: .2f}")
elif sexo == 'm' :
    if IMC< 20:
        print("ABAIXO DO PESO")
        print(f" o IMC é: {IMC: .2f}")
    
    elif IMC < 25:
        print("PESO IDEAL")
        print(f" o IMC é: {IMC: .2f}")

    else:
        print("ACIMA DO PESO")
        print(f" o IMC é: {IMC: .2f}")
else:
    print("RESPOSTA INVALIDA")