# Entrada da string
str_input = input("Digite uma string: ")

# Inicializando a string invertida
str_invertida = ""

# Percorrendo a string original de trás para frente
for i in range(len(str_input) - 1, -1, -1):
    str_invertida += str_input[i]

# Exibindo a string invertida
print("String invertida:", str_invertida)
