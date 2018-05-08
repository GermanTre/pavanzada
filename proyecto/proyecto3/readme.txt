Problema
Roma gave Chef an array of intergers.
Chef wants to make all integers in the array equal to 1.
In a single operation, he can select a prime number p and a subset of the integers, and then divide all of the integers in the subset by p.
Chef can make this operation only if every integer in the selected subset is divisible by p.

Please help Chef to make all the integers in the array equal to 1 with minimum number of operations.

Contraints
Integers no mayor a 15000.


Solución
Primero debemos sacar los números primos y la manera que lo logramos fue:

1. Utilizando la guía de la pagina en la referencia pudimos ver que solo utilizando
los números primos de 2 al 127 podemos saber si un numero hasta el 15000 es un numero primo.

2. Ya que tenemos los números primos lo que sigue es leer los imputs que nos da el usuario.

3. Ya que tenemos los inputs del usuario, primero utilizaremos los números primo fijos que tenemos si para ver
si alguno cumple que puede dividir los números dados.

4. Si el paso anterior no cumplió con la regla ya utilizamos la formula utilizada en la Referencia para checar los demás
números primos hasta el 15000.

5. Si los pasos anteriores no dieron u resultado solo tenemos que indicarle al usuario que los numero dados no son divisibles
por el mismo numero hasta el 15000. 

Ejemplo

Input
1 //Numero de pruebas
3 //Tamaño de arrey de inputs
1 2 4 // Array de inputs

Output
2 //Número primo divisible entre todos.(No incluye el 1)


Referencia:
http://www.counton.org/explorer/primes/checking-if-a-number-is-prime/
