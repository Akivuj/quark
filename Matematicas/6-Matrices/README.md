Video 1 (¿Qué es un sistema de ecuaciones lineales?) https://www.youtube.com/watch?v=Al_WbyKFpdI


Ecuaciones lineales

Una ecuación lineal en la que n variables x1, x2, . . . , xn se define como una ecuación que se puede expresar en la forma

a1x1+a2x2+…+anxn=b

donde a1, a2, . . . , an y b son constantes reales. Las variables en la ecuación lineal algunas veces se denominan incógnitas.

EJEMPLO
Las ecuaciones siguientes son lineales

x+3y=7
x1−2x2−3x3+x4=7
y=12x+3z+1
x1+x2+…+xn=1

Las siguientes ecuaciones no son lineales:

x+3y2=7
3x+2y−z+xz=4
y−sen(x)=0
x1−−√+2x2+x3=1

Una solución de una ecuación lineal a1x1 +a2x2 +. . .+anxn = b es una sucesión de n números s1, s2, . . . , sn de modo que la ecuación se cumple cuando se sustituye x1 = s1 , x2 = s2 , . . . , xn = sn. El conjunto de todas las soluciones de la ecuación se denomina conjunto solución o, algunas veces, solución general de la ecuación.


Sistemas lineales

Un conjunto finito de ecuaciones lineales en las variables x1, x2, . . . , xn se denomina sistema de ecuaciones lineales o sistema lineal. Una sucesión de números s1, s2, . . . , sn se denomina solución del sistema si x1 = s, x2 = s2, . . . , xn = sn es una solución de todas y cada una de las ecuaciones del sistema.

EJEMPLO
El sistema

4x1−x2+3x3=−1
3x1+x2+9x3=−4

tiene la solución x1 = 1, x2 = 2, x3 = −1, ya que estos valores satisfacen ambas ecuaciones. Sin embargo, x1 = 1, x2 = 8, x3 = 1 no es una solución, ya que estos valores satisfacen sólo la primera de las dos ecuaciones del sistema.

Un sistema arbitrario de m ecuaciones lineales en n incógnitas se puede escribir como

a11x1+a12x2+…+a1nxn=b1
a21x1+a22x2+…+a2nxn=b2

⋮⋮⋮⋮

am1x1+am2x2+…+amnxn=bm

donde x1, x2, . . . , xn son las incógnitas y las letras a y b con subíndices denotan constantes.

EJEMPLO
Un sistema general de tres ecuaciones lineales con cuatro incógnitas se puede escribir como

a11x1+a12x2+a13x3+a14x4=b1
a21x1+a22x2+a23x3+a24x4=b2
a31x1+a32x2+a33x3+a34x4=b3

Los subíndices dobles en los coeficientes de las incógnitas constituyen un mecanismo útil que se utiliza para especificar la ubicación del coeficiente en el sistema. El primer subíndice en el coeficiente aij indica la ecuación en que aparece el coeficiente, y el segundo subíndice indica a que incógnita multiplica. Así, a12 está en la primera ecuación y multiplica a la incógnita x2.


Matrices aumentadas
 
Video 2 (¿Qué es una matriz?) https://www.youtube.com/watch?v=4YX9YmRE62c

Si mentalmente se ubica a los signos +, las letras x y los signos =, entonces un sistema de m ecuaciones lineales con n incógnitas puede abreviarse al escribir sólo el arreglo rectangular de números:

⎡⎣⎢⎢⎢⎢a11a21⋮am1a12a22⋮am2………a1na2n⋮amnb1b2⋮bm⎤⎦⎥⎥⎥⎥

Este arreglo se denomina matriz aumentada del sistema.

Nota: La última columna corresponde al conjunto de los coeficientes que no acompañan a ninguna variable (término independiente).

EJEMPLO
La matriz aumentada del sistema de ecuaciones

x1+x2+2x3=9
2x1+4x2−3x3=1
3x1+6x2−5x3=0

es

⎡⎣⎢1231462−3−5910⎤⎦⎥

Observación: Al elaborar una matriz aumentada, las incógnitas deben escribirse en el mismo orden en cada ecuación.

El método básico para resolver un sistema de ecuaciones lineales es sustituir el sistema dado por un nuevo sistema que tenga el mismo conjunto solución, pero que sea más fácil de resolver. Este nuevo sistema suele obtenerse en una serie de pasos mediante la aplicación de los tres tipos de operaciones siguientes para eliminar incógnitas de manera sistemática.

Multiplicar una ecuación por una constante diferente de cero.
Intercambiar dos ecuaciones.
Sumar un múltiplo de una ecuación a otra ecuación.
Dado que los renglones (líneas horizontales) de una matriz aumentada corresponden a las ecuaciones en el sistema asociado, las tres operaciones mencionadas corresponden a las siguientes operaciones efectuadas en los renglones de la matriz aumentada.

Video 3 (Operaciones elementales en matrices) https://www.youtube.com/watch?v=yORRk_C05Wk

1. Multiplicar un renglón por una constante diferente de cero.
2. Intercambiar dos renglones.
3. Sumar un múltiplo de un renglón a otro renglón.
Las tres operaciones anteriores se denominan operaciones elementales en los renglones.


Notación y terminología de matrices

Definición: Una matriz es un arreglo rectangular de números. Los números en el arreglo se denominan elementos de la matriz.

EJEMPLO
Algunos ejemplos de matrices son

⎡⎣⎢13−1204⎤⎦⎥,[210−3],⎡⎣⎢⎢⎢−2–√30π120e00⎤⎦⎥⎥⎥,[13],[4]

El tamaño de una matriz se describe en términos del número de renglones (líneas horizontales) y de columnas (líneas verticales) que contiene. Por ejemplo, la primera matriz del ejemplo anterior tiene tres renglones y dos columnas, de modo que su tamaño es 3 por 2 (que se escribe 3x2). En la descripción del tamaño, el primer número siempre denota el número de renglones y el segundo, el de columnas. Las demás matrices del ejemplo anterior son de tamaño 1x4, 3x3, 2x1 y 1x1, respectivamente.

El elemento que aparece en el renglón i y la columna j de una matriz A se denota por aij. Así, una matriz general 3x4 se puede escribir como

A=⎡⎣⎢a11a21a31a12a22a32a13a23a33a11a24a34⎤⎦⎥

y una matriz general m x n, como

⎡⎣⎢⎢⎢⎢a11a21⋮am1a12a22⋮am2………a1na2n⋮amn⎤⎦⎥⎥⎥⎥

EJERCICIOS
1. De las siguientes ecuaciones, ¿cuáles son lineales en x1, x2 y x3?

a) x1+5x2−2–√x3=1
b) x1+3x2+x1x3=2
c) x1=−7x2+3x3
d) x−21+x2+8x3=5
e) x351−2x2+x3=4
f) πx1−2–√x2+13x3=713

2. Dado que k es una constante, ¿cuáles de las siguientes ecuaciones son lineales?

a) x1−x2+x3=sen(k)
b) kx1−1kx2=9
c) 2kx1+7x2−x3=0

3. Hallar la matriz aumentada de cada uno de los siguientes sistemas de ecuaciones lineales

a)
3x1−2x2=−1
4x1+5x2=3
7x1+3x2=2

b)
2x1+2x3=1
3x1−x2+4x3=3
6x1+x2−x3=0

c)
x1+2x2−x4+x5=1
3x2+x3−x5=2$
x3+7x4=1

d)
x1=1
x2=2
x3=3