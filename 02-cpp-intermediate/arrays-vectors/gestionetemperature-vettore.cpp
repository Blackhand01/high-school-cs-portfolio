#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>   //contiene la funzione getch
#include<conio2.h>
/*
Gestione delle temperature con le seguenti opzioni:

1) Caricamento delle NT Temperature del Giorno
2) Ricerca Temperatura Minima
3) Ricerca Temperatura Massima
4) Calcolo Temperatura Media
5) Visualizzazione Temperature in un intervallo orario
6) Visualizzazione delle NT Temperature del Giorno
7) Fine programma


Dati in Input
temp    Vettore dei valori delle temperature, reale, contiene valori qualsiasi:
			-la posizione 0 conterrà il valore della temperatura dell'ora 0 (mezzanotte),
			-la posizione 1 conterrà il valore della temperatura dell'ora 1 (una di notte),
			-la posizione 2 conterrà il valore della temperatura dell'ora 2 (due di notte),
			. . .
			-la posizione 12 conterrà il valore della temperatura dell'ora 12 (mezzogiorno),
			. . .
			-la posizione 23 conterrà il valore della temperatura dell'ora 23 (undici di sera),
scelta	Valore opzione scelta del menù, intero;
risp    Risposta alla domanda di conferma per terminare il programma, carattere, può essere 'S','s','N','n';
orai    Ora iniziale dell'intervallo orario relativo all'opzione 5; (Corrispondenza tra ora e posizione nel vettore)
oraf    Ora finale dell'intervallo orario relativo all'opzione 5;

Dati in Output
temp	Vedere Input;
tmin    Temperatura minima;
tmax    Temperatura massima;
tmedia  Media aritmetica dei valori delle temperature caricate nel vettore temp;
orai    Vedere Input;
oraf    Vedere Input;

Dati Locali
NT      Numero temperature, dimensione del vettore temp, costante=24 : 1 temperatura x ogni ora del giorno;
somma   Sommatore dei valori contenuti in temp, per calcolare tmedia, reale;
tcar    Variabile di stato tcar=1 valori temperature caricati, tcar=0 valori non caricati;
imin    Indice temperatura minima
imax    Indice temperatura massima
i		Indice per la gestione del vettore temp;
*/
 
int main()
{
 int const NT=6;
 float temp[NT];
 float tmin, tmax, tmedia, somma;
 int scelta, orai, oraf, tcar, imin, imax, i;
 char risp;

// Inizializzazioni
 tcar=0;			// Vettore temperature non caricato

 do{				// ripetizione di tutto il programma
    system ("CLS");
    printf ("\nProgramma di Gestione delle Temperature di un Giorno");
    
// Visualizzazione Menu
    gotoxy(3,1);
    printf ("\n--- Menu' temperature -------------------------------------");
    printf ("\n\n 1) Caricamento delle %d Temperature del Giorno", NT);
    printf ("\n\n 2) Ricerca Temperatura Minima");
    printf ("\n\n 3) Ricerca Temperatura Massima");
    printf ("\n\n 4) Calcolo Temperatura Media");
    printf ("\n\n 5) Visualizzazione Temperature in un intervallo orario");
    printf ("\n\n 6) Visualizzazione delle %d Temperature del Giorno", NT);
    printf ("\n\n 7) Fine programma"); 
    printf ("\n\n\n    Scegli --> .");
    do{
	   gotoxy(16,19);
       printf(".                                                ");
       gotoxy(16,19);
       scanf("%d", &scelta);
    }while(scelta<1 || scelta>7);

// Selezione dell'opzione scelta     
     switch(scelta)
     {
      case 1:					// Caricamento del vettore temp
      {
	   system ("CLS");
       if(tcar==1)		// se il vettore è già stato caricato...
       {				// ...si chiede il consenso alla riscrittura
       	printf("\n\n***** Sono presenti %d valori precedentemente caricati !!!\n", NT);
        do{
           printf("\n***** Vuoi procedere ad una nuova immissione? (s/n) --> ");
           fflush(stdin);
           scanf("%c", &risp);
        }while(risp != 's' && risp != 'S' && risp != 'n' && risp != 'N');
        if(risp == 's' || risp == 'S') { tcar=0; }     // Se si vogliono ricaricare i valori si "forza" tcar=0 cioè "vettore vuoto";
       }
       
       if(tcar==0)		// se il vettore è vuoto si procede al caricamento dei valori
	   {				// altrimenti non si fa nulla cioè si lasciano i valori caricati precedentemente
        system("CLS");
        printf("\nImmetti %d valori uno alla volta\n", NT);
/*
       printf("\nImmetti %d ", NT); if(NT==1) { printf("valore\n");} else { printf("valori uno alla volta\n");}
*/
        for(i=0; i<NT; i++)		// Ciclo di caricamento del vettore delle temperature
        {
         printf("\nOra:  %d   -   Valore temperatura:  ", i);
         scanf("%f", &temp[i]);
        }
       
        tcar=1;					// Temperature caricate
        printf("\n\n\nTemperature caricate!!!");
        getch();
       }
      } break;

      case 2:					// Ricerca Temperatura Minima
      {
       if(tcar==1)
       {
        system("CLS");
        printf("\nRicerca della Temperatura Minima\n");
        
        for(imin=0, i=1; i<NT; i++)		// Ciclo di scansione del vettore delle temperature
        {
         if(temp[i]<temp[imin]) 
         {
		  imin=i;
		 }
        }
        
        printf("\n\nTemperatura Minima:  %.1f   all'ora:  %d", temp[imin], imin);
       }
       else
       {
        system("CLS");
        printf("\nTemperature non caricate, ricerca impossibile!!!");
       }
       getch();
      } break;

      case 3:					// Ricerca Temperatura Massima 
      {
       if(tcar==1)
       {
        system("CLS");
        printf("\nRicerca della Temperatura Massima\n");
       
        for(imax=0, i=1; i<NT; i++)		// Ciclo di scansione del vettore temperature
        {
         if(temp[i]>temp[imax])
         {
		  imax=i;
		 }
        }
        
        printf("\n\nTemperatura Massima:  %.1f   all'ora:  %d", temp[imax], imax);
       }
       else
       {
        system("CLS");
        printf("\nTemperature non caricate, ricerca impossibile!!!");
       }
       getch();
      } break;
 
      case 4:					// Calcolo Temperatura Media
      {
       if(tcar==1)
       {
        system("CLS");
        printf("\nCalcolo della Temperatura Media\n");
        
        somma=0;
        for(i=0; i<NT; i++)			// Ciclo per la somma dei valori del vettore temperature
        {
		 somma=somma+temp[i];
		}
		
        tmedia=somma/NT;			// Calcolo della media
        printf("\n\nTemperatura Media:  %.1f", tmedia);
       }
       else
       {
        system("CLS");
        printf("\nTemperature non caricate, calcolo impossibile!!!");
       }
       getch();
      } break;

      case 5:						// Visualizzazione Temperature in un intervallo 
      {
       if(tcar==1)
       {
        system("CLS");
        printf("\nVisualizzazione Temperature in un intervallo orario\n");
        
        do{
           printf("\n\nImmetti l'ora iniziale --> ");
           scanf("%d", &orai);
           if(orai<0||orai>=NT)
           {
           	printf("\nOra iniziale %d :  Fuori intervallo!", orai);
           	getch();
		   }
        }while(orai<0||orai>=NT);		// oppure >NT-1
        
        do{
           printf("\n\nImmetti l'ora finale --> ");
           scanf("%d", &oraf);
           if(oraf<orai||oraf>=NT)
           {
           	printf("\nOra finale %d :  Fuori intervallo!", oraf);
           	getch();           	
		   }
        }while(oraf<orai||oraf>=NT);
        
        for(i=orai; i<=oraf; i++)		// Ciclo di visualizzazione del vettore delle temperature
        {
           printf("\nOra:  %d   -   Temperatura:  %.1f", i, temp[i]);
		}
       }
       else
       {
        system("CLS");
        printf("\nTemperature non caricate, visualizzazione impossibile!!!");
       }
       getch();
      } break;

      case 6:							// Visualizzazione completa delle Temperature 
      {
       if(tcar==1)
       {
        system("CLS");
        printf("\nVisualizzazione completa delle Temperature\n");
        
        for(i=0; i<NT; i++)				// Ciclo di visualizzazione del vettore delle temperature
        {
		 printf("\nOra:  %d   -   Temperatura:  %.1f", i, temp[i]);
		}
       }
       else
       {
        system("CLS");
        printf("\nTemperature non caricate, visualizzazione impossibile!!!");
       }
       getch();
      } break;

// Fine Programma
      case 7:		// Gestione dell'uscita
      {
       do{
          gotoxy(1,21);
          printf("Sei sicuro? (s/n) --> .  ");
          fflush(stdin);
          gotoxy(23,21);
          scanf("%c", &risp);
       }while(risp != 's' && risp != 'S' && risp != 'n' && risp != 'N');
       if(risp == 'n' || risp == 'N') { scelta=0; }     // Se c'è un ripensamento si "forza" un valore diverso dall'Uscita (7)   
      }
    } // fine switch_case
 }while(scelta != 7); // Fine ripetizione del programma
} // Fine Programma
