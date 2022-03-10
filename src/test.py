#Abrimos el archivo
archivo = open("data.txt", "r")

#Leemos el archivo y mostramos los registros en pantalla
data = archivo.readlines()
print (data)

for linea in data:
    if("Melania" in linea):
        data.remove(linea)

archivo.close()
print(data)
archivo = open("data.txt", "w")

for linea in data:
    archivo.write(linea)
archivo.close()
