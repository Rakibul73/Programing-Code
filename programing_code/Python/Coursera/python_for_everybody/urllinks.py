
import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup
import ssl

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

html = urllib.request.urlopen('http://py4e-data.dr-chuck.net/comments_697045.html', context=ctx).read()
soup = BeautifulSoup(html, 'html.parser')


tags = soup('span')
s = 0
for tag in tags:
    
   a = int(tag.contents[0])
   s = s + a
print(s)