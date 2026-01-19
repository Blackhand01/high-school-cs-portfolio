#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main(){

int m,n,r,c;
char risp;

do{
	system("cls");

printf("             PROGRAMMA CHE MOLTIPLICA 2 FATTORI CON LA TECNICA DELLE ADDIZIONI SUCCESSIVE\n\n\n");

	system("cls");

	printf("inserire il valore del primo fattore   ---> ");
	scanf("%d",&m);
	
	printf("inserire il valore del secondo fattore ---> ");
	scanf("%d",&n);

	c=0;
	r=0;
	
	if(n<0)
	{ 
		do{
		r=r+m;
		c=c-1;
		}while(c>n);
	}
	else
	{   
	    do{
		r=r+m;
		c++;
	    }while(c<n);
	}
	
	if(m>0 && n>0 || m<0 &&n>0)
	{
	printf("\n\n%d\n\n",r);	
	} 
	else{
	printf("\n\n-%d\n\n",r);			
	}
    
	fflush(stdin);                              //ripetizione del programma
	
		do{
			printf("\n\nSE VUOI RIPETERE IL PROGRAMMA PREMI 'S'\n\nSE VUOI TERMINARE PREMI 'N'\n\n ");
			fflush(stdin);
			scanf("%c",& risp);
		} while(risp!='S' && risp!='s' && risp!='N' && risp!='n');
		
	}while(risp=='S' || risp=='s');      
	
	system("pause");
}
   
