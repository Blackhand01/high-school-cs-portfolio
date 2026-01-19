#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <conio2.h> 
#include <time.h>
#include <math.h>

int main()
{
	int N,i;
	int scelta,stat,risp,somma,pari,dispari,cp,cd;
	float media,mediap,mediad;
	int const DIMV=100;
	int V[DIMV],VPOS[DIMV],VNEG[DIMV];
	
	
	N,i,stat=0;
	
	//---------------------------------------MENU'------------------------------------------------------------------------------------------------------------------
do{	

	system("cls");
	textcolor(11);
	gotoxy(20,1);
	printf("VETTORI - MENU' PRINCIPALE");
	printf("\n\n 1. Caricamento dei vettori");
	printf("\n\n 2. Calcolo della media dei valori");
	printf("\n\n 3. Calcolo della media dei valori di posizione pari e dispari");
	printf("\n\n 4. Visualizzazione valori negativi e positivi");
	printf("\n\n 5. Visualizzazione dei valori caricati");
	printf("\n\n 6. Uscita del programma");
	printf("\n\n\n    Scegli --> .");
	do{
	   gotoxy(16,16);
       printf(".                                                ");
       gotoxy(16,16);
       scanf("%d", &scelta);
    }while(scelta<1 || scelta>6);
	
	//------------------------------------SWITCH-----------------------------------------------------------------------------------------------------------------
	
	switch (scelta)
{
	case 1:
	{system ("CLS");
	
	
		if(stat)	
		
			
       {			           	
       	printf("\n\n***** Sono presenti %d valori precedentemente caricati !!!\n", N);
        do{
           printf("\n***** Vuoi procedere ad una nuova immissione? (s/n) --> ");
           fflush(stdin);
           scanf("%c", &risp);
          }while(risp != 's' && risp != 'S' && risp != 'n' && risp != 'N');
		}
		       if(risp == 's' || risp == 'S') { stat=0; }     
       
       
       if(!stat)
	   
	   		
	   {system("CLS");
	   	do{system("CLS");
		printf("\nInserisci il numero di valori da inserire (multiplo di 10 < di 100)--->  ");
	   	scanf("%d", &N);
	   	if(N%10!=0 || N>100)
	   	{
	   		system("cls");
	   		gotoxy(32,12);
	   		printf("Hai sbagliato!");
	   		Sleep(2000);
		}
		   }while(N%10!=0 || N>100);

        printf("\nImmetti %d ", N); if(N==1) { printf("valore\n");} else { printf("valori uno alla volta\n");}

        for(i=0; i<N; i++)		
        {
         printf("\nValore n%c:  %d   -  Inserisci Valore:  ",248, i+1);
         scanf("%d", &V[i]);
        }
       
        stat=1;		
        printf("\n\n\nValori caricati!!!");
        getch();
       }
      }break;
      
    case 2 :
    {
     if(stat)	
    {
	 system("CLS");
     for(i=0,somma=0,media=0;i<N;i++)
     {
     	somma=somma+V[i];
	 }
	 media=somma/N;
	 printf("La somma e'--->  %d\n", somma);
	 printf("La media e'--->  %2.f", media);
	 getch();
    }
    
    else
    {
    	system("CLS");
		printf("Inserisci i valori!");
		getch();
	}
	}break;
	
	case 3 :
	{
	 if(stat)
	 {
	 	system("CLS");
	 	for(i=1,somma=0,mediap=0,mediad=0,pari=0,dispari=0,cp=0,cd=0;i<N;i++)
	 	{
	 		if(i%2==0)
	 		{
	 			pari=pari+V[i];
	 			cp++;
			}
			
			if(i%2!=0)
			{
				dispari=dispari+V[i];
				cd++;
			}
		}
		
		mediap=pari/cp;
		mediad=dispari/cd;
		printf("I valori situati nelle posizioni logiche pari sono------>  %d", cp);
		printf("\n\nLa loro media e'--->  %2.f", mediap);
		printf("\n\nI valori situati nelle posizioni logiche dispari sono--->  %d", cd);
		printf("\n\nLa loro media e'--->  %2.f", mediad);
		
	 	getch();
	 }
	 else
    {
    	system("CLS");
		printf("Inserisci i valori!");
		getch();
	}
	}break;
	
	case 4 :
	{
	 if(stat==1)
	 {
	 	system("CLS");
	 	
	 	//for()
	 }	
	}break;
    

}
}while(scelta!=6);
}
