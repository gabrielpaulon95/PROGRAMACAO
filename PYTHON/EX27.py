v= int(input("DIGITE O NUMERO QUE VOCÊ DESEJA VER A TABOADA: "))
while (v<=0):
   print("VALOR INVALIDO, DIGITE SOMENTE NUMEROS POSITIVOS: ")
   v=int(input("DIGITE OUTRO NUMERO QUE VOCÊ DESEJA VER A TABOADA: "))
   
a=int(input("DIGITE O MENOR VALOR DO INTERVALO QUE VOCÊ DESEJA VER A TABOADA: ")) 
b=int(input("DIGITE O MAIOR VALOR DO INTERVALO QUE VOCÊ DESEJA VER A TABOADA: ")) 

if a > b:
    print("VALOR INVALIDO, O SEGUNDO VALOR PRECISA SER MAIOR QUE O PRIMEIRO: ")
    b=int(input("DIGITE O MAIOR VALOR DO INTERVALO QUE VOCÊ DESEJA VER A TABOADA: "))  
   
for a in range(a,b,a-1):
    t = v * a
    print(f"{v} x {a} = {t}")
