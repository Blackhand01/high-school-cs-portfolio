#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<iostream>

int main(){
	
	int c,nv;
	float s,v,m;
	char risp;

	do{
		
	system("cls");
			
	printf("PROGRAMMA CHE CALCOLA LA MEDIA ARITMETICA DI UNA SEQUENZA DI VALORI\n\n\n");
	
	do{
		printf("inserire il numero di valori della sequenza ---> ");
		scanf("%d", &nv);
	}while(nv<=0);
	
	c=s=0;
	
	do{
	
	printf("\n\ninserire il %d%c valore ---> ",c+1,248);    //c+1 != da c=c+1
	scanf("%f", &v);
	
	s=s+v;
	c++;
    }while(c<nv);
    
    m=s/nv;
    
    printf("\n\nLa media aritmetica della sequenza di %d valori %c ---> %.2f\n\n",nv,130,m);
    
	fflush(stdin);

    do{
	printf("VUOI RIPETERE IL PROGRAMMA?\n(schiaccia 's' per confermare o 'n' per terminare) ---> ");
	fflush(stdin);
	scanf("%c",&risp);
      }while(risp!='s' && risp!='S' && risp!='n' && risp!='N');
      
    }while(risp=='s' || risp=='S');
    
    system("pause");
} 


