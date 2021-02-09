a,b,c,i=0,0,0,0
for i in range(100,999):
    k=i
    c=i%10
    i//=10
    b=i%10
    i//=10
    a=i
    if a*a*a+b*b*b+c*c*c==k:
        print(k)
    else:
        pass
