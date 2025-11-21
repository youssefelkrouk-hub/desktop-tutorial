import numpy as np 

L=[100,4,200,1,3,2]
def lcs(L): #longest consecutive sequence
    c = 0
    L=set(L)
    for x in L:
        if x-1 not in L:
            l=1
            while (l+c) in L:
                c+=1
            c=max(c,l)
    return c 
print(lcs(L))


print(3)

