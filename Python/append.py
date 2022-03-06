## La lista de nombres a escribir
nombres = ["Juan", "Susana", "Andrea", "Melanie", "Andrés"]

## Abrimos en modo escritura
archivo = open("nombres.txt", "a+")

## Recorremos la lista y agregamos cada nombre al archivo
for nombre in nombres:
    archivo.write(nombre + "\n")

## Muy importante cerrar el archivo.
archivo.close()