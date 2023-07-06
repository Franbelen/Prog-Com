L = [[10,-1], [2,1], [1,3]]

def orden(a,b):
    m = a[0]*a[1]
    n = b[0]* b[1]
    if m <= n: 
        return m,n
    else:
        return n,m
    
L.sort(key = orden)

print(L)