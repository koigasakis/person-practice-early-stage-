def j(i):
    if i!=1:
      return i*j(i-1)
    else:
      return 1

i=int(input('求谁的阶乘'))
m=j(i)
print(i,'的阶乘为',m)
