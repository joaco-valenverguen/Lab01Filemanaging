## La lista de nombres a escribir
nombres = ["Juan", "Susana", "Andrea", "Melanie", "Andrés"]

## Abrimos en modo escritura
archivo = open("nombres.txt", "w")

## Recorremos la lista y agregamos cada nombre al archivo
for nombre in nombres:
    archivo.write(nombre + "\n")

## Muy importante cerrar el archivo.
archivo.close()



####################################################################
## Escribiendo archivos con print() para agregar el salto de linea automaticamente

## La misma lista de nombres a escribir
nombres = ["Juan", "Susana", "Andrea", "Melanie", "Andrés"]

## Abrimos en modo escritura
archivo = open("nombres.txt", "w")

## Recorremos la lista y agregamos cada nombre al archivo
for nombre in nombres:
    print(nombre, file=archivo)

## NO olvides cerrar el archivo
archivo.close()