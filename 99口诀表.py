a,b=0,0
for b in range(1,10):
    for a in range(1,b+1):
        print(str(a)+'*'+str(b)+'=',a*b,end=' ')
    print()
