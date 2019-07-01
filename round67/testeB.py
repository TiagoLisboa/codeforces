import random
import string

inp = open("inB.3", "w")
out = open("samB.3", "w")

def randomString(stringLength=10):
    """Generate a random string of fixed length """
    letters = string.ascii_lowercase
    return ''.join(random.choice(letters) for i in range(stringLength))

n = random.randint(1, 20000)
n = 20000
inp.write("{}\n".format(n))

string = randomString(n)
inp.write("{}\n".format(string))

m = random.randint(1, 5000)
m = 5000
inp.write("{}\n".format(m))

while(m):
    m = m - 1
    i = random.randint(1, n-1)
    i = 1
    f = random.randint(i, n)
    inp.write ("{}\n".format(string[i:f]))
    out.write ("{}\n".format(f))


