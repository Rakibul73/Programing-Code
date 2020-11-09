import urllib.request, urllib.parse, urllib.error
from bs4 import BeautifulSoup

fhand = urllib.request.urlopen('http://py4e-data.dr-chuck.net/comments_42.html').read()
soup = BeautifulSoup(fhand, 'fhand.parser')
for line in fhand:
    print(line.decode().strip())
    
    
    

tags = soup('span')
for tag in tags:
   print ('TAG:',tag)
   print ('URL:',tag.get('href', None))
   print ('Contents:',tag.contents[0])
   print ('Attrs:',tag.attrs)