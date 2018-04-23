Descripción

A character in UTF8 can be from 1 to 4 bytes long, subjected to the following rules:

    For 1-byte character, the first bit is a 0, followed by its unicode code.
    For n-bytes character, the first n-bits are all one's, the n+1 bit is 0, followed by n-1 bytes with most significant 2 bits being 10.

Solución

Lo primero que debemos hacer es poder transformar el numero introducido a bits, al tener
el numero en bits solo tenemos que hacer las comprobaciones requeridas para indicar que
es un carácter de tipo UTF8 (Tiene que cumplir con las reglas mencionadas en la descripción)


Complejidad

Si consideramos "n" la cantidad de bits totales ya que estamos pasando por todos los bits
para comprobar las reglas esto nos deja con un complejidad de "n".
