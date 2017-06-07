n = int(input())
resp1 = 0
resp2 = 0
cont = 2
j = 1
resp1 = (((2*j)-1)**((2*j)-1)) / ((2*j)**(2*j))
if n>=1:
    resp2 = resp1
    for cont in range (2,n+1):
        if cont%2==0:
            resp2 = resp2 + ((((2*cont)-1)**((2*cont)-1)) / ((2*cont)**(2*cont)))
            cont = cont + 1
        else:
            resp2 = resp2 * ((((2*cont)-1)**((2*cont)-1)) / ((2*cont)**(2*cont)))
            cont = cont + 1
if n==1:
    print("O valor da serie e: %.9f"%resp1)
else:
    print("O valor da serie e: %.9f"%resp2)

