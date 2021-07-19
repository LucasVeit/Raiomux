print("plaintext: ")
plaintext = input()
print("profundidade: ")
prof = int(input())

matrix = []
for i in range(prof): matrix.append("")

for i in range(len(plaintext)):
	if i%2 == 0:
		matrix[i%prof] += plaintext[i]
	else:
		if prof%2 == 0:
			matrix[len(matrix)-(i%prof)] += plaintext[i]
		else:
			matrix[len(matrix)-1-(i%prof)] += plaintext[i]

for i in matrix:
	print(i, end="")
print()