velocidade = float(input("Digite a velocidade do veiculo: ")) 
aceleracao=float(input("Digite a aceleracão do veiculo: "))
tempo= float(input("Digite o tempo de percurso: "))


ve = velocidade + (aceleracao * tempo)


if ve > 120:
    print("VEICULO MUITO RAPIDO")
else:
    if (ve <= 120) and (ve > 80):
        print ("VEICULO RAPIDO")
        print(f" {ve}")
    elif (ve <= 80) and (ve > 60):
        print ("VELOCIDADE DE CRUZEIRO")
    elif  (ve <= 60) and (ve > 40):
        print ("VELOCIDADE PERMITIDA")
    else:    
        print ("VEICULO MUITO LENTO")