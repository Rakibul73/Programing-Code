  
from urllib.request import urlopen
from bs4 import BeautifulSoup
import ssl

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

u = input("Enter URL: ")
c = int(input("Enter count: "))
p = int(input("Enter position: "))


names = []

while c > 0:

    html = urlopen(u, context=ctx).read()
    soup = BeautifulSoup(html, "html.parser")
    x = soup('a')
    y = x[p-1].string
    names.append(y)
    u = x[p-1]['href']
    c -= 1

print (names[-1])