def j(i):
    if i!=1:
      return i*j(i-1)
    else:
      return 1

i=int(input('��˭�Ľ׳�'))
m=j(i)
print(i,'�Ľ׳�Ϊ',m)
