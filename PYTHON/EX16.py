a = int(input("Digite o LADO A: "))
b = int(input("Digite o LADO B: "))
c = int(input("Digite o LADO C: "))

if  (((a+b) > c) and
    ((a + c) > b)and
    ((b + c) > a)):  
        if a == b :
            if a == c:
                print("TRIANGULO EQUILATERO") 
            elif b != c:
                print("TRIANGULO ISOSCELES")    
        elif a == c:
             print("TRIANGULO ISOSCELES") 
        else:
            if b ==c :
                print("TRIANGULO ISOSCELES")    
            else:
                print("TRIANGULO ESCALENO")      
    
else:

    print(" NAO É UM TRIANGULO")
