import urllib.request, urllib.parse, urllib.error
import xml.etree.ElementTree as ET

url = input('Enter location: ')

print('Retrieving', url)
uh = urllib.request.urlopen(url)
data = uh.read()
print('Retrieved', len(data), 'characters')
tree = ET.fromstring(data)

i =  tree.findall('.//count')
print ("Count: " + str(len(i)))

a = 0

for count in i:
    a = a + int(count.text)

print ("Sum:" + str(a))