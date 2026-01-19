#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main()
{
	float L,P,A;
	system("cls");
	do{	
		printf("inserire il valore del lato");
		scanf("%f",&L);
	} while(L<=0);
	P=L*4;
	A=L*L;
	printf("\n\nil perimetro del quadrato misura --> %.2f",P);
	printf("\n\nl'area del quadrato misura --> %.2f\n\n",A);
	system("PAUSE");
}

