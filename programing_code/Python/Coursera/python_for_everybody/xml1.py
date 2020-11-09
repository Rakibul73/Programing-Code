import xml.etree.ElementTree as ET
import urllib.request, urllib.parse, urllib.error
import ssl

html = urllib.request.urlopen('http://py4e-data.dr-chuck.net/known_by_Fikret.html', context=ctx).read()

data = 

tree = ET.fromstring(data)
print('Name:', tree.find('name').text)
print('Attr:', tree.find('email').get('hide'))
