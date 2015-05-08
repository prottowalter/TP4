1. ####for (nl=0,nc=0;(c=getchar())!=EOF...
 Analizemos la primer expresi�n de la sentencia for:        
                                            nl=0,nc=0
La expresi�n contiene la coma, que en este caso es un **OPERADOR BINARIO**. 

	La pragm�tica de esta expresi�n consta del ordenamiento de evaluaci�n de izquierda 
a derecha de las expresiones dadas.

    La sem�ntica se explica como la evaluaci�n del primer operando con un resultado void, 
luego se pasa a la evaluaci�n del segundo operando, siendo este el tipo y valor que retorna
la **OPERACI�N COMA**. Por lo tanto determina una **ASOCIACI�N** a izquierda. Est� de m�s decir, pero 
es aclaratorio, que si hubiese m�s de dos operandos finalmente, la operaci�n retornar�
el valor de la evaluaci�n del operando que se encuentre m�s a la derecha.
	Esto es lo mismo que escribir 
	                        nl=nc=0 observen que el igual es asociativo a derecha
Por lo tanto a la variable nc le asigna el 0, luego a la variable  nl le asigna el 0 y el valor de la expresi�n es 0 que es el resultado de evaluar el operando mas a la derecha como en la OPERACI�N COMA.
2. Nos ver�amos tentados a escribir en el codigo:
							c = getchar() != EOF
	Ya que es natural asociar en el orden de lectura, es decir a izquierda y evaluar las
expresiones en ese sentido, sin embargo, en este caso el operador != cambia el orden de 
evaluaci�n de esta expresi�n.
	Diremos que el operador != (DISTINTO) tiene mayor **PRECEDENCIA** que =(IGUAL). 
	
 La PRECEDENCIA indica el orden de evaluaci�n de las expresiones.
	El codigo sin par�ntesis, obliga a la expresi�n a evaluarse de la siguiente manera:
							c = (getchar() != EOF)
	Retornando, tanto la expresi�n como c, dos valores posibles debido a la evaluaci�n
en primer instancia del parentesis, 0 o 1, y luego evaluar� la asignaci�n a la veariable c a 0
o 1.
3.  la sentencia if del codigo nos indica si no es final de flujo (stream) envia por stderr
(stream) el mensaje *"no se pudo leer de la entrada debido a un error" seguida por : y el error quedando el puntero en la siguiente linea* (por lo general por pantalla, a menos redireccione el programador) pragm�ticamente hablando.

	Si lo analizamos semanticamente evalua la expresion de la sentencia, si la funci�n
!feof(stdin) devuelve 1 entonces se llama a la rutina perror("No se pudo seguir...).
4. La funci�n perror() produce un mensaje que va a la salida estandar de errores, 
describiendo el �ltimo error encontrado durante una llamada al sistema o a ciertas funciones de biblioteca.
La cadena de caracteres s que se pasa como argumento, se muestra primero, luego un signo de
dos puntos y un espacio en blanco; por �ltimo, el mensaje y un salto de l�nea. Para ser de 
m�s utilidad, la cadena de caracteres pasada como argumento deber�a incluir el nombre de 
la funci�n que incurri� en el error.
5. La pragm�tica para ambas funciones es la misma, indica si quedaron mas datos por leer en la stdin o
el stream que sea. Por lo tanto una se puede reemplazar con la otra.
				!feof(stdin) == ferror(stdin)
	Sem�nticamente son totalmente distintas:

          !feof(stdin): invoca la funcion feof con el argumento apuntador de stream a stdin y devuelve el valor de la se�al eof, y luego la niega.
          ferror(stdin): es la invocaci�n de la funci�n ferror con el argumento apuntadorr de stream a stdin y devuelve el valor de la se�al de error.
6. Sabemos que el % implica la aparici�n de una variable formateada dentro de un literal cadena, el .1f
no da formato a la amplitud, y le da un formato de precisi�n de 1 decimal en flotante.
7. El casteo implica la transformaci�n del tipo de dato de la variable al tipo que encierra los par�ntesis que la anteceden. En este caso es por un tema de precisi�n en el resultado de la expresi�n.
8. 
9. Promediar < Promediar.c > estadisticas.txt
10. No, cuando la cantidad de lineas es cero osea un flujo vacio, da divisi�n por cero.
11. No, tb cuenta los carecteres '\n' o newLine.
12. Hay que agregarlos con % dentro del argumento literal cadena de cualquier printf y su    correspondiente variable en los siguientes argumentos.