ca = int(input("Digite o CATETO ADJACENTE: "))
co = int(input("Digite o CATETO OPOSTO: "))
hi = int(input("Digite a HIPOTENUSA: "))

so = (ca * ca) + (co * co)
hipo = hi* hi

if so == hipo:
    print("FORMA UM TRIANGULO RETANGULO")
else: 
    print ("NÃO FORMA UM TRIAGULO RETANGULO")