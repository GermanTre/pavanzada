Problema
El usuario quiere saber un cierto numero de números primos y el numero primo en la posición que el elige.

El primer imput indica el numero de primos que quiere saber, los demás indicas la posición del numero primo que quiere.

Características:
Los números no pasan de 15000.

Ejemplo:

Imput
4 //Nos indica que quiere saber 4 números primos
3 //Quiere el 3 numero primo.
2 //Quiere el 2 numero primo.
5 //Quiere el 5 numero primo.
7 //Quiere el 7 numero primo.

Output
5 //Es el número primo en la posición 3.
3 //Es el número primo en la posición 2.
11 //Es el número primo en la posición 5.
17 //Es el número primo en la posición 7.

Solución
Primero debemos sacar los números primos y la manera que lo logramos fue:
1. Utilizando la guía de la pagina en la referencia pudimos ver que solo utilizando los números primos de 2 al 127 podemos saber si un numero hasta el 15000 es un numero primo.

Después debemos de saber si el numero primo que el usuario quiere esta dentro del rango de 2 al 127.
Si esta dentro solo le pasamos ese numero primo.
Si no vamos a pasar por todos los números y dividirlos por los números primos y si nos da un residuo de 0 es que no es primo y pasamos al siguiente numero, pero si no
y todas las divisiones nos dan un residuo diferente a 0 eso nos indica que si es un numero primo y solo vemos que es el de la posición que desea el usuario.



Referencia:
http://www.counton.org/explorer/primes/checking-if-a-number-is-prime/
