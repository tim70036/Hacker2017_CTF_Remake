s  = "NTHU_IS{It_is_Pay_Day_Mother_Fucker}"
p  = ":".join("{:02x}".format(ord(c)) for c in s)
print(p)

print('---------------------')

s = '{It_is_Pay_Day_Mother_Fucker}'
k = '*)(@SAJA;z/c,/qwe,/axc;as,d;)'
for c1,c2 in zip(s,k):
    print(','+ str(ord(c1)^ord(c2)))
