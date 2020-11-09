import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup
import ssl

ctx = ssl.create_default_context()
ctx.check_hostname = False
ctx.verify_mode = ssl.CERT_NONE

html = urllib.request.urlopen('http://py4e-data.dr-chuck.net/known_by_Fikret.html', context=ctx).read()
soup = BeautifulSoup(html, 'html.parser')



tags = soup('a')
c = 0
for tag in tags:
    c = c + 1
    print(tag.get('href', None))