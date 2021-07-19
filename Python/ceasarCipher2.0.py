def capitalize(s, ind):
    split_s = list(s)
    for i in ind:
        try:
            split_s[i] = split_s[i].upper()
        except IndexError:
            print('Index out of range : ', i)
    return "".join(split_s)

print("plaintext: ")
plaintext = input()
print("k = ")
k = int(input())
ciphertext = []
isUpper = []
aOrd = ord('a')
zOrd = ord('z')
for i in range(len(plaintext)):
	if plaintext[i].isupper():
		isUpper.append(i)
plaintext = plaintext.lower()
for i in plaintext:
	ciphertext.append(chr(((ord(i)-aOrd+k)%(zOrd-aOrd+1))+aOrd))
ciphertext = capitalize("".join(ciphertext), isUpper)
print(ciphertext)