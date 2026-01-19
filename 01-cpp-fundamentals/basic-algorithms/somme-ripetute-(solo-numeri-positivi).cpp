#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main(){

int m,n,r,c;
char risp;

do{

printf("             PROGRAMMA CHE MOLTIPLICA 2 FATTORI CON LA TECNICA DELLE ADDIZIONI SUCCESSIVE\n\n\n");

	system("cls");

	printf("inserire il valore del primo fattore   ---> ");
	scanf("%d",&m);
	
	printf("inserire il valore del secondo fattore ---> ");
	scanf("%d",&n);

	c=0;
	r=0;
	
	do{
	r=r+m;
	c++;
	}while(c<n);
	
	printf("\n\nIl risultato %c ---> %d\n\n",130,r);	
	
    fflush(stdin);                              //ripetizione del programma
		do{
			printf("\n\nSE VUOI RIPETERE IL PROGRAMMA PREMI 'S'\n\nSE VUOI TERMINARLO PREMI 'N'\n\n ");
			fflush(stdin);
			scanf("%c",& risp);
		} while(risp!='S' && risp!='s' && risp!='N' && risp!='n');
		
	}while(risp=='S' || risp=='s');      
	
	system("pause");
}

