#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>



int main(){
	
    float A1,A2,A3;
    
    system("cls");
    printf ("PROGRAMMA CHE DETERMINA SE I VALORI INSERITI SIANO POSSIBILI VALORI DEGLI ANGOLI DI UN TRIANGOLO:\n\n");
    
    printf ("inserire il valore del primo angolo       ---> ");
    scanf ("%f",& A1);
    
    printf ("\n\ninserire il valore del secondo angolo ---> ");
    scanf ("%f",& A2);
    
    printf ("\n\ninseire il valore del terzo angolo    ---> ");
    scanf ("%f",& A3);
    
    if (A1+A2+A3==180)
    {
        printf ("\n\nsono possibili valori di angoli di un triangolo");
    }
    else
    {
        printf ("\n\nnon sono valori di angoli di un triangolo\n\n");
    }
    
    system("PAUSE");   
}
