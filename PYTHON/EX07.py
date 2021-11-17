p1 = float(input("Digite o valor do primeiro produto: "))
p2 = float(input("Digite o valor do segundo produto: "))
p3 = float(input("Digite o valor do terceiro produto: "))
p4 = float(input("Digite o valor do quarto produto: "))
p5 = float(input("Digite o valor do quinto produto: "))

pg = float(input("Digite o valor pago: "))

t = p1+p2+p3+p4+p5
tr= pg - t 

print(f"o troco das compras e {tr: .2f}")