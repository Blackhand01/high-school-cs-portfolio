#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>                                               // per le radici e le potenze è necessaria l'inclusione di questa libreria

int main() {

	float a,b,c,x,x1,x2,D;                                 // dichiarazione delle variabili
	char risp;                                            // costante utile alla ripetizione del programma

	do {                                                // inzio ripetizione del programma

		system("CLS");                                // pulisce tutta la schermata di valori sottostante ad esso

		printf("PROGRAMMA CHE RISOLVE UN' EQUAZIONE DI 2%c GRADO DELLA FORMA: ax^2 + bx + c = 0",248);              // 248 in ascii °
		printf("\n\ninserire a (coefficiente di x^2)   ---> ");
		scanf("%f",&a);
		printf("\n\ninserire b (coefficiente di x)     ---> ");
		scanf("%f",&b);
		printf("\n\ninserire c (termine noto)          ---> ");
		scanf("%f",&c);
		
	    if((D=pow(b,2)-4*a*c)<0){                      //se D (discriminante) è minore di 0 allora l'equazione è impossibile
	    	
	    printf("\n\n                        EQUAZIONE IMPOSSIBILE!!!");
	    }
		else{
		
		x1=(-b-sqrt(D))/(2*a*c);
		x2=(-b+sqrt(D))/(2*a*c);
		if(x1>x2){
		//printf("\n\nle soluzioni dell' equazione sono ---> (%.2f; %.2f)",x1,x2);
		//}
		//else{
		x=x2;
		x2=x1;
		x1=x;
	    }
		printf("\n\nle soluzioni dell' equazione sono ---> (%.2f; %.2f)",x1,x2);	
		}
			
		fflush(stdin);                              //ripetizione del programma
		do{
			printf("\n\nSE VUOI RIPETERE IL PROGRAMMA PREMI 'S'\n\nSE VUOI TERMINARE PREMI 'N'\n\n ");
			fflush(stdin);
			scanf("%c",& risp);
		} while(risp!='S' && risp!='s' && risp!='N' && risp!='n');
		
	}while(risp=='S' || risp=='s');               //fine ripetizione del programma
	system("PAUSE");                             //aspetta la pressione di un tasto per terminare il programma
}
