import random

n = input()

inp = open("in{}".format(n), "w")
out = open("sam{}".format(n), "w")

a = random.randint(1,10**200000)
b = random.randint(1,10**200000)
c = random.randint(1,10**200000)
d = random.randint(1,10**200000)
e = random.randint(1,10**200000)
f = random.randint(1,10**200000)

inp.write ("{} {} {} {} {} {}".format(a,b,c,d,e,f))
out.write ("{}".format((a+b+c+d+e+f)%6))
