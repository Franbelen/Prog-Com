L = [[10,-1], [20,1], [1,3]]

def orden(a):
    m = a[0]*a[1]
    return m
    
    
L.sort(key = orden, reverse = True)

print(L)