text = "X-DSPAM-Confidence:    0.8475"
i = text.find('0')
r = text[i:]
x = float(r)
print(x)