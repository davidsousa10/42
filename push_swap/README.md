*Este proyecto ha sido creado como parte del currículo de 42 por dsousa-o, lhe-xia.*

# Push_swap

## Descripción

Push_swap es un proyecto de algoritmia que consiste en ordenar una lista de números
enteros utilizando dos stacks (a y b) y un conjunto limitado de 11 operaciones.
El objetivo es encontrar la secuencia de operaciones más corta posible para ordenar
los datos.

El programa implementa cuatro estrategias de ordenación distintas, cada una con una
complejidad algorítmica diferente, y es capaz de seleccionar la más adecuada en
función del grado de desorden de la entrada.

## Instrucciones

### Compilación
```bash
make        # Compila el programa
make clean  # Elimina archivos objeto
make fclean # Elimina archivos objeto y el ejecutable
make re     # Recompila todo
```
### Ejecución

# Sin flag (usa algoritmo adaptativo por defecto)
```
./push_swap 4 67 3 87 23
```
# Con selector de estrategia
```
./push_swap --simple 5 4 3 2 1
./push_swap --medium 5 4 3 2 1
./push_swap --complex 5 4 3 2 1
./push_swap --adaptive 5 4 3 2 1
```
# Verificar con checker
```
./push_swap 5 4 3 2 1 | ./checker_Mac 5 4 3 2 1
```
## Algoritmos implementados

### 1. Simple - O(n2): Selection Sort / Extraccion del minimo

Busca el elemento con el index mas pequeno en el stack a, lo rota hasta
la cima (eligiendo ra o rra segun cual requiera menos movimientos) y lo
envia al stack b con pb. Repite hasta vaciar a, y luego devuelve todo
con pa.

- Justificacion: Es el algoritmo mas intuitivo y sencillo de implementar.
  Funciona correctamente para cualquier tamaño de entrada, aunque su rendimiento
  se degrada rapidamente con entradas grandes.

### 2. Intermedio - O(n sqrt(n)): Chunk Sort

Divide los index en sqrt(n) grupos (chunks) de tamano similar. Recorre el stack a
y envia a b los elementos que pertenecen al chunk actual. Dentro de cada chunk,
los elementos con index en la mitad inferior se rotan al fondo de b (rb) para
mantener los valores mas grandes cerca de la cima. Una vez todos los elementos
estan en b, se extraen del mayor al menor buscando la posicion del maximo y
rotando b de forma optima (rb o rrb).

- Justificacion: Reduce significativamente el numero de operaciones respecto
  al algoritmo simple al procesar multiples elementos por recorrido del stack.

### 3. Complejo - O(n log n): Radix Sort (LSD)

Ordena los elementos bit a bit, del bit menos significativo al mas significativo.
En cada pasada, recorre todos los elementos: si el bit actual del index es 0,
el elemento se envia a b (pb); si es 1, se rota en a (ra). Al final de cada
pasada, todos los elementos de b se devuelven a a (pa). Tras log2(n) pasadas,
el stack queda ordenado.

- Justificacion: Es el algoritmo mas eficiente para entradas grandes y muy
  desordenadas. El radix sort LSD es estable y su adaptacion a dos stacks es
  directa.

### 4. Adaptativo - Seleccion por indice de desorden

Calcula el indice de desorden del stack a antes de ordenar. Este indice mide
la proporcion de pares de elementos que estan en orden incorrecto
respecto al total de pares posibles, resultando en un valor entre 0 y 1.

Segun el valor del desorden, selecciona la estrategia:

- desorden < 0.2  -> Simple  -> O(n2)
- 0.2 <= desorden < 0.5 -> Medium (Chunks) -> O(n sqrt(n))
- desorden >= 0.5 -> Complex (Radix) -> O(n log n)

Justificacion de umbrales:
- 0.2: Con pocas inversiones, el stack esta casi ordenado y el algoritmo
  simple resuelve con muy pocas operaciones.
- 0.5: A partir de este punto el desorden es suficiente para que el radix
  sort, con su complejidad O(n log n) constante, supere al chunk sort.

## Rendimiento

- 100 numeros: ~780-1084 ops (objetivo minimo: < 2000 ops)
- 500 numeros: ~7800 ops (objetivo minimo: < 12000 ops)

## Contribuciones

- dsousa-o: Operaciones de stack, algoritmo de ordenacion simple y complejo, parseo de argumentos y calculo del indice de desorden.
- lhe-xia: Implementacion de las estructuras de datos, implementacion del algoritmo intermedio y adaptativo, indexacion, testing.

## Recursos

- Visualizer Push_swap: https://github.com/o-music/push_swap_visualizer
- The Art of Computer Programming, Vol. 3: Sorting and Searching - Donald Knuth