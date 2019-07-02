import random

fname = input()

inf = open("in{}".format(fname), "w")
out = open("sam{}".format(fname), "w")

q = random.randint(1, 10**5)

inf.write("{}".format(q))

print (q)

for i in range(0, q):
    c = bool(random.getrandbits(1))

    a = random.randint(1, 10**9)
    b = random.randint(1, 10**9)
    n = random.randint(1, 10**6)
    k = 0

    if (c):
        k = a*n-b*n, 10**9
        out.write("{}".format(a*n-b*n))
    else:
        k = random.randint(10**9, b*n)
        out.write("{}".format(-1))

    inf.write("{} {} {} {}".format(k, a, b, n))
