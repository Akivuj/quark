C++ Profesional

Okay futur@s 🐱‍💻gamecoders🐱‍👤, habiendo visto lo básico del C++, POO, Clases y Repositorios, vamos a volver a C++ para repasar y ver algunos temas más de este fantástico lenguaje. Esto te permitirá llegar bien preparad@ al desafío final y a los próximos cursos 😉


1) Repaso de Punteros en C++
Los punteros (o apuntadores) son variables que se utilizan para almacenar direcciones de memoria, puntualmente las direcciones de memoria que fueron asignadas a variables convencionales en las que se almacenan datos de distinto tipo. Vale la pena entonces recordar que a todas las variables en C++ se les asigna un espacio de memoria en el cual se va almacenar el valor que se le asigne en algún punto de la aplicación a esa variable, el tamaño de dicho espacio va depender del tipo de dato que se pretende almacenar en la variable, del compilador y de la arquitectura del procesador. Cada uno de los espacios de memoria cuenta con una dirección para identificarlo, esta dirección es por lo general un número en representación hexadecimal. Es precisamente ese número correspondiente a la dirección lo que se almacena en un puntero...

Ir a: Punteros en C++ https://www.codingame.com/playgrounds/51214/manejo-dinamico-de-memoria-y-polimorfismo-practica-4/punteros-en-c


2) Administración dinámica de memoria en el lenguaje C
Muchas veces se requiere que un puntero apunte a un espacio de memoria que no está ocupado por otra variable o empleado por el sistema para algún fin, un espacio que pueda ser asignado en tiempo de ejecución del programa; que si en algún momento este espacio es insuficiente, se pueda reasignar a un espacio más grande y se pueda liberar el espacio asignado inicialmente para que sea empleado por otros punteros que lo requieran. También necesitamos poder liberar el espacio de memoria en el caso que la información contenida en él ya no sea relevante, de esta manera el espacio liberado se podría utilizar en otras partes del programa. Esta forma de gestionar la memoria se denomina "Administración dinámica de memoria".

Ir al contenido: https://quark.academy/mod/page/view.php?id=4205 


3) Administración dinámica de memoria en el lenguaje C++
La administración dinámica de memoria en C++ se lleva a cabo mediante los operadores new y delete.

Ir al contenido: https://quark.academy/mod/page/view.php?id=4206


4) Importancia de los Destructores Virtuales
Para comprender la importancia de los destructores en C++, lo primero que hay que entender es cuándo se usan. Y, como te puedes imaginar por el nombre, si un constructor se usa para la creación de un objeto, el destructor se utiliza para destruir el objeto cuando se ha dejado de usar.

Ir al contenido: https://quark.academy/mod/page/view.php?id=4207


5) Smart Pointers
El mundo no se acaba con los operadores new y delete. Desde la versión 11 de C++ están disponibles los Smart Pointers (punteros inteligentes). Veamos una introducción al tema:

https://www.youtube.com/watch?v=4f87Rtquj6M

Puntero inteligente (Smart Pointers) https://quark.academy/mod/page/view.php?id=3928


6) Patrones de diseño: Modelo-Vista-Presentador (MVP)
Es interesante comprender más a fondo el concepto de separación de responsabilidades y desacoplamiento de capas, para ello dejamos una introducción al patrón de arquitectura MVP o Modelo-Vista-Presentador con un ejemplo sencillo.

La explicación del patrón aquí https://drive.google.com/file/d/1OJtaknbCLDSvZ1140kIgWwVwCL43oYKC/view?usp=sharing, y el ejemplo para descargar desde aquí https://drive.google.com/file/d/1fYLrs5xGuNMhJ2Wu6bzukZdClzTpSFxF/view?usp=sharing.

Nota: realmente no importa el lenguaje en el que está implementado el ejemplo, se puede aplicar perfectamente este patrón en C++. Es importante que lo apliques en tu desafío final del curso 🐱‍💻


7) Desafío "El Soldado" para practicar 🤸‍♂️
A continuación presentamos un desafío que te ayudará a llegar mejor preparado al desafío final del curso. La idea es que primero lo resuelvas sin aplicar el patrón de arquitectura MVP, y que una vez lo tengas resuelto y funcionando, puedas hacer una segunda iteración de trabajo y le apliques MVP.

Te dejamos en 👉este link https://drive.google.com/file/d/1JNaAtydpoJVs3Ism2ZoNoKbP8a2ZtREi/view?usp=sharing👈, el enunciado del desafío, para que realices la primera iteración de trabajo.

Para la segunda iteración de trabajo, te dejamos en 👉este link https://drive.google.com/file/d/1W3IXm5eqcTMS_bP93OucrCA78jt8dC3c/view?usp=sharing👈 el código con la solución para que lo tomes de referencia (cortesía de uno de nuestros estudiantes Carlos Canavesio o Chars#8984 en discord). Recuerda que en esta segunda iteración implementamos MVP y adicionalmente, también aplicamos un patrón Factory Method (aunque no es necesario que lo domines para rendir el desafío final del curso).

Esperamos que este desafío te ayude a levelear tus skills de C++ y POO 🐱‍🐉


8) C++ Enumerations 🤸‍♀️
¿Todavía no sabes utilizar enumerations? no te preocupes 😋 accede al siguiente 👉 link https://www.programiz.com/cpp-programming/enumeration👈 y aprende a utilizarlos.


9) Material complementario
Más sobre los operadores new y delete https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
Diferencias entre new y malloc() https://www.geeksforgeeks.org/malloc-vs-new/
Diferencias entre delete and free() https://www.geeksforgeeks.org/delete-and-free-in-cpp/
Más sobre destructores https://www.ecured.cu/Destructores_(Programaci%C3%B3n)
Lista de programas hechos en C++ https://www.geeksforgeeks.org/cc-programs/ para volverte 🐱‍👤 Ninja C++ Developer 🐱‍👓
Nota: no es necesario que mires todos los programas pero te sugerimos que al menos explores dos o tres de cada categoría.


Bibliografía / Fuentes:
- https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
- https://www.codingame.com/playgrounds/51214/manejo-dinamico-de-memoria-y-polimorfismo-practica-4/asignacion-y-liberacion-dinamica-de-memoria
- http://agora.pucp.edu.pe/inf2170681/10.htm
- Cómo programar en c++ by Harvey Deitel, Paul Deitel https://www.buscalibre.com.ar/libro-c-como-programar/9786073227391/p/41827456