## Abrimos en modo solo lectura
contenido = open("nombres.txt", "r")

## Recorremos y mostramos cada línea enumerada
contador = 1
for línea in contenido:
    print("Línea", contador, ":", línea)
    contador += 1