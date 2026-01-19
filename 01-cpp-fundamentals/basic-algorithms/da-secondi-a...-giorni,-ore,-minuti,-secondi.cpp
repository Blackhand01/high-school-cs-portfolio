#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<iostream>

int main(){
	
	int ts,g,h,m,s,r1,r2;
	char risp;

	do{
		
	system("cls");
			
	printf("PROGRAMMA CHE CONVERTE UN TEMPO ESPRESSO IN SECONDI IN:\n\nGIORNI, ORE, MINUTI, SECONDI");
	
	do{
		printf("\n\ninserisci il tempo in secondi---> ");
		scanf("%d",&ts);
	}while(ts<0);
	g=ts/86400;
	h=ts%86400/3600;

	m=r1%3600/60;  
	s=m%60;

	printf("il tempo convertito in giorni, ore, minuti e secondi %c:\n\n%d giorni, %d ore, %d minuti, %d secondi\n\n",130,g,h,m,s);

	system("pause");	

    fflush(stdin);

    do{
	printf("\n\nVUOI RIPETERE IL PROGRAMMA?\n(schiaccia 's' per confermare o 'n' per terminare) ---> ");
	fflush(stdin);
	scanf("%c",&risp);
      }while(risp!='s' && risp!='S' && risp!='n' && risp!='N');
      
    }while(risp=='s' || risp=='S');
    
}


