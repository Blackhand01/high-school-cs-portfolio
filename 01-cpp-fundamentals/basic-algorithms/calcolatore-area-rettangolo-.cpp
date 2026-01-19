#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<iostream>



int main (){
float B,H,A;
do{
printf ("inserire il valore della base     ");
scanf ("%f",& B);
printf ("inserire il valore dell'altezza   ");
scanf ("%f",& H);
} while (B<=0 && H<=0);
A=B*H;
printf ("l'area del rettangolo misura ---> %.2f\n\n",A);
system("PAUSE");
}

