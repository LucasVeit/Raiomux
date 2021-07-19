alphabet = ["a","b","c","d","e",
	"f","g","h","i","j",
	"k","l","m","n","o",
	"p","q","r","s","t",
	"u","v", "w", "x",
	"y","z"]
print("plaintext: ")
plaintext = input()
print("k = ")
k = int(input())
ciphertext = []
for i in plaintext:
	ciphertext.append(alphabet[(alphabet.index(i)+k)%len(alphabet)])
print("".join(ciphertext))