archivo = open("data.txt", "r")
data = archivo.readlines()
datas = []
for linea in data:
    if ("Melania" in linea):
        datas.append(linea.split(","))
print((datas))
archivo.close()