import json
import urllib.request, urllib.parse, urllib.error
import xml.etree.ElementTree as ET

url = input('Enter location: ')
print('Retrieving', url)

uh = urllib.request.urlopen(url)
data = uh.read()
print('Retrieved', len(data), 'characters')

info = json.loads(data)
info = info["comments"]

print('User count:', len(info))

s = 0
for item in info:

    s = s + int(item["count"])


print("Sum: ", s)
