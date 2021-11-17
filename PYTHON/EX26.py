v=int(input("DIGITE O NUMERO QUE VOCÊ DESEJA VER A TABOADA: "))

while (v<=0):
   print("VALOR INVALIDO, DIGITE SOMENTE NUMEROS POSITIVOS: ")
   v=int(input("DIGITE OUTRO NUMERO QUE VOCÊ DESEJA VER A TABOADA: "))
n = 1
while (n < 11):
    t = v * n
    print(f"{v} x {n} = {t}")
    n = n+1
