Problema
Tienes un matriz y tienes que llegar a una de sus posiciones antes de que se te acaben la cantidad de veces que puedes
adivinar.
Mientras te mueves el juego te va indicando en que dirección esta la bomba.


Constraints


1 ≤ W ≤ 10000  (Ancho)
1 ≤ H ≤ 10000  (Alto)
2 ≤ N ≤ 100    (Numero de saltos)
0 ≤ X, X0 < W  (Posicion inicial en x)
0 ≤ Y, Y0 < H  (Posición inicial de y)

Response time per turn ≤ 150ms
Response time per turn ≤ 150ms

Solución
La manera que hice para solucionarlo fue ver donde esta la bomba, si solo esta entre arriba, abajo, derecho o izquierda
solo uno de sus ejes saco la distancia  de su posición a la posición mayor que tiene que estar y la divido (o multiplico) entre dos
y me muevo a esa ventana, si la dirección en que la bomba esta requiere que mueva los dos ejes hago lo mismo que con uno,
pero ya que se en que posición mover uno de los ejes muevo el otro dependiendo de hacia donde esta la bomba.

Ya que cada ves que me muevo estoy reduciendo las posibilidades a la mitad su complejidad es O = (Log n).

Maneras de mejorar
La manera para mejorar el código es utilizando la posición donde esta y dependiendo de donde esta la bomba limitar las
posiciones en que se puede mover Batman y si la división (o multiplicar) esta entre esa posición lo vuelvo a dividir entre 2 hasta que
este en uno de los rangos adecuados
