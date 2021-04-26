#include   < stdio.h >
	int   main ()
	{
	     / * Cruz Contreras Jose Aldair
	    Equipo AMUKE
	    21 abr 21
	    Programa 5. Pide dos valores reales, calcula el volumen de un trapecio y muestra resultado
	    * /
	

	    área de flotación , altura, volumen;
	

	    printf ( " \ n  \ n Programa 6 " );
	    printf ( " \ n  \ n Saca el volumen del trapecio " );
	    printf ( " \ n  \ n Dame el valor real de la area " );
	    scanf ( " % f " , & área); // Permite capturar un valor real y lo guarda en variable primer
	    printf ( " \ n  \ n Dame el valor real de la altura H " );
	    scanf ( " % f " , & altura); // Permite capturar un valor real y lo guarda en variable primer
	    volumen = (área * altura); // Formula matematica para calcular el volumen de un trapecio.
	    printf ( " \ n El volumen del trapecio es % f " , volumen);
	

	    return   0 ;
	}

