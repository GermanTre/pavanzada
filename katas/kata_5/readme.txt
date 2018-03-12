Problema
Tenemos que hacer una a hash table donde guarde las palabras y mientras mas aparecen aumentar su tamaño.

Requisitos
Tiene que ser capas de reconocer que Add y add son las mismas palabras.


Solución
Para solucionarlo primero tenemos que que quitar las letras mayúsculas, después cuando leemos una palabra que
no esta en la hash, la agregamos y ponemos su numero como uno, mas adelante cuando leemos una palabra que si
esta en la hash table debes de volverla a agregar solo aumentamos su numero en uno, para terminar describimos
que mientras mas grande es ese numero su tamaño debe de aumentar para indicar que esa palabra a aparecido más
veces que las anteriores.
