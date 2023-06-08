def detector_jerigoncio(palabra):
    c = 1
    l = -1
    n= len(palabra)
    for indice in range(n-2):
        
        letra = palabra[indice]

        if letra in "aeiou" and indice != l:
            l = indice+2
            if palabra[indice+1] != "p" or palabra[indice+2]!= letra:
                c = 0

        print(c,indice,letra)
    for i in range(2):
        if palabra[n-2+i] in "aeiou":
            if palabra[n-3+i] != "p" or palabra[n-4+i]!= palabra[n-2+i]:
                    c = 0
    if palabra[n-1] in "aeiou" and (palabra[n-1] != palabra[n-3] or palabra[n-2]!= "p"): c= 0
    
    if c ==1: print("True")
    else: print("False")

palabra = input()

detector_jerigoncio(palabra)

