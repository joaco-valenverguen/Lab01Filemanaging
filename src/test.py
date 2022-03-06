from os import remove
archivo = open("nombres.txt", "r")


lineas = archivo.readlines()

print (lineas)
for x in lineas:
    if("Juan" in x):
        lineas.remove(x)

archivo.close()
print(lineas)
archivo = open("nombres.txt", "w")

for x in lineas:
    archivo.write(x)
archivo.close()
