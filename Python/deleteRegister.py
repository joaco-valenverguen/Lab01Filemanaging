archivo = open("data.txt", "r")


data = archivo.readlines()


print (data)
for linea in data:
    if("Jane Chadwick" in linea):
        data.remove(linea)

archivo.close()
print(data)
archivo = open("data.txt", "w")

for linea in data:
    archivo.write(linea)
archivo.close()
