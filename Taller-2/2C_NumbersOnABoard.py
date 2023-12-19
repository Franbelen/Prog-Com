import math
t = int(input())

while t > 0:
    t -= 1
    n = int(input())

    print(2)
    
    actual = n -1
    m = n
    for i in range(n - 1):
        print(m, actual)
        m = math.ceil((m + actual) / 2)
        actual -= 1