alphabet = ["a","b","c","d","e",
	"f","g","h","i","j",
	"k","l","m","n","o",
	"p","q","r","s","t",
	"u","v", "w", "x",
	"y","z"]
print("plaintext: ")
plaintext = input()
print("k = ")
k = input()
isUpper = []
for i in range(len(plaintext)):
	if plaintext[i].isupper():
		isUpper.append(i)
plaintext = plaintext.lower()
keyIndex = 0
cipherText = []
for i in range(len(plaintext)):
	if plaintext[i] not in alphabet: 
		cipherText.append(plaintext[i])
		continue
	charIndex = alphabet.index(plaintext[i])
	kPos = alphabet.index(k[keyIndex%len(k)])
	cipherText.append(alphabet[kPos + charIndex])
	keyIndex += 1
print("".join(cipherText))