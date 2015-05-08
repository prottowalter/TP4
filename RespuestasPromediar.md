1. ####for (nl=0,nc=0;(c=getchar())!=EOF...
 Analizemos la primer expresión de la sentencia for:  

                                            nl=0,nc=0
La expresión contiene la coma, que en este caso es un **OPERADOR BINARIO**. 

	La pragmática de esta expresión consta del ordenamiento de evaluación de izquierda 
a derecha de las expresiones dadas.

    La semántica se explica como la evaluación del primer operando con un resultado void, 
luego se pasa a la evaluación del segundo operando, siendo este el tipo y valor que retorna
la **OPERACIÓN COMA**. Por lo tanto determina una **ASOCIACIÓN** a izquierda. Está de más decir, pero 
es aclaratorio, que si hubiese más de dos operandos finalmente, la operación retornará
el valor de la evaluación del operando que se encuentre más a la derecha.
	Esto es lo mismo que escribir 
	
	                		 nl=nc=0  observen que el igual es asociativo a derecha
Por lo tanto a la variable nc le asigna el 0, luego a la variable  nl le asigna el 0, que es el valor de la evaluación anterior, que es el resultado de evaluar el operando mas a la derecha como en la OPERACIÓN COMA.
2. Nos veríamos tentados a escribir en el codigo:

					      c = getchar() != EOF
	Ya que es natural asociar en el orden de lectura, es decir a izquierda y evaluar las
expresiones en ese sentido, sin embargo, en este caso el operador != cambia el orden de 
evaluación de esta expresión.
	Diremos que el operador != (DISTINTO) tiene mayor **PRECEDENCIA** que =(IGUAL). 
	
 La PRECEDENCIA indica el orden de evaluación de las expresiones.
	El codigo sin paréntesis, obliga a la expresión a evaluarse de la siguiente manera:
	
						c = (getchar() != EOF)
	Retornando, tanto la expresión como c, dos valores posibles debido a la evaluación
en primer instancia del parentesis, 0 o 1, y luego evaluará la asignación a la veariable c a 0
o 1.
3.  La sentencia if del codigo nos indica si no es final de flujo (stream) envia por stderr
(stream) el mensaje *"no se pudo leer de la entrada debido a un error" seguida por : y el error quedando el puntero en la siguiente linea* (por lo general por pantalla, a menos redireccione el programador) pragmáticamente hablando.

	Si lo analizamos semanticamente evalua la expresion de la sentencia, si la función
!feof(stdin) devuelve 1 entonces se llama a la rutina perror("No se pudo seguir...).
4. La función perror() produce un mensaje que va a la salida estandar de errores, 
describiendo el último error encontrado durante una llamada al sistema o a ciertas funciones de biblioteca.
La cadena de caracteres s que se pasa como argumento, se muestra primero, luego un signo de
dos puntos y un espacio en blanco; por último, el mensaje y un salto de línea. Para ser de 
más utilidad, la cadena de caracteres pasada como argumento debería incluir el nombre de 
la función que incurrió en el error.
5. La pragmática para ambas funciones es la misma, indica si quedaron mas datos por leer en la stdin o
el stream que sea. Por lo tanto una se puede reemplazar con la otra.

				!feof(stdin) == ferror(stdin)
	Semánticamente son totalmente distintas:

          !feof(stdin): invoca la funcion feof con el argumento apuntador de stream a stdin y devuelve el valor de la señal eof, y luego la niega.
          ferror(stdin): es la invocación de la función ferror con el argumento apuntadorr de stream a stdin y devuelve el valor de la señal de error.
6. Sabemos que el % implica la aparición de una variable formateada dentro de un literal cadena, el .1f
no da formato a la amplitud, y le da un formato de precisión de 1 decimal en flotante.
7. El casteo implica la transformación del tipo de dato de la variable al tipo que encierra los paréntesis que la anteceden. En este caso es por un tema de precisión en el resultado de la expresión.
8. 
9. Promediar < Promediar.c > estadisticas.txt
10. No, cuando la cantidad de lineas es cero osea un flujo vacio, da división por cero.
11. No, tb cuenta los carecteres '\n' o newLine.
12. Hay que agregarlos con % dentro del argumento literal cadena de cualquier printf y su    correspondiente variable en los siguientes argumentos.
