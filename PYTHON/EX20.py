p1=float(input("Digite a nota da P1: ")) 
p2=float(input("Digite a nota da P2: "))

media= (p1 + 2*p2)/3

if media >= 5:
    print(f"APROVADO, SUA MEDIA FOI: {media:.1f}")
else:
    print(f"REPROVADO, SUA MEDIA FOI: {media:.1f}")