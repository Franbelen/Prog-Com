n = int(input())

def countdown(n):

    if n == 0:
        print(0)
        print("buena cuenta")

    elif n > 0:
        print(n)
        countdown(n-1)
        print(n)

    elif n < 0:
        print(n)
        countdown(n+1)
        print(n)


countdown(n)