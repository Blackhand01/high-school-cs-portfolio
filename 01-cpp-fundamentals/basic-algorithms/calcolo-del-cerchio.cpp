#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<iostream>


int main (){

float const p=3.14;
float R,C,AC;

do{
	
printf("\n\ninserire il valore del raggio ---> ");
scanf("%f", &R);

}while (R<=0);

C=R*2*p;            //a C viene assegnato il valore di R per 2 per 
AC=pow(R,2)*p;             

printf("\n\nla circonferenza del cerchio misura --> %f",C);
printf("\n\nl'area del cerchio misura           --> %.2f\n\n",AC);

system("PAUSE");
}
