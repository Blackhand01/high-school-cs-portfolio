#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()

{

float L1,L2,L3;

do{

system("cls");
printf ("PROGRAMMA CHE DETERMINA SE I VALORI DA TE INSERITI SIANO\n\nO NO I POSSIBILI VALORI DI LATI DI UN TRIANGOLO:\n\n");	

printf ("inserire il valore del primo lato:         ");
scanf ("%f",& L1);


printf ("\n\ninserire il valore del secondo lato:       ");
scanf ("%f",& L2);

printf ("\n\ninseire il valore del terzo lato:          ");
scanf ("%f",& L3);

} while (L1<L2*L3 and L2<L1*L3 and L3<L1*L2);

printf ("questi sono i possibili valori dei lati di un triangolo.\n\n");

system("PAUSE");


}
