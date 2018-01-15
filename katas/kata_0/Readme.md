Example
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

Break Down

¿Esta ordenado? No
Tiene una sola solución
Solo son numeros positivos

Solucion 1
Si el arreglo es de tamaño 2 la solución don la posición 0 y 1 del arreglo.
Si no el target le resto el numero de la primer posición y busco el resultado en el resto del arreglo, si no esta la solución me paso a la siguiente posición del arreglo y repito el proceso sin las posiciones anteriores.

Toma alrededor de n^2.

Solucion 2
Utilizamos una hash table, para guardar todos los datos y luego utilizando la target como key para ver si hay una solución.

Toma alrededor de n.
