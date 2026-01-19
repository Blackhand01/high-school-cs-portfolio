/*
Programma con domanda per ripetere la sua esecuzione
senza dover terminare il programma e rieseguirlo
*/

#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>   //contiene la funzione getch

//#include<conio2.h>  contiene la funzione gotoxy
//#include<iostream>  contiene le funzioni cin>> e cout<< del C++

int main()
{
 float IT, SCONTO, ITS;  //variabili utilizzate
 int S;
 char risp;
 
 do{    // Inizio ripetizione del programma       

    system("CLS");
    printf("Calcolo dello sconto per fasce di importo\n");

    do{
       printf("\nInserisci l'importo totale della spesa > 0 --> ");
       scanf("%f", &IT);             
    }while(IT<=0);

    if(IT<=100)
     {
      S=5;
     }
    else
     {
      if(IT<=250)
       {
        S=10;
       }
      else
       {
        S=20;
       }
     }

    SCONTO=(IT/100)*S;
    ITS=IT-SCONTO;

    printf("\nImporto iniziale: %.2f Euro", IT);
    printf("\n\nSconto applicato: %d%% per un totale di %.2f Euro", S, SCONTO);
    printf("\n\nImporto scontato da pagare: %.2f Euro", ITS);   
    getch();

    fflush(stdin);
    
    do{
       printf("\n\nVuoi ripetere il programma ? (s/n) --> ");
       fflush(stdin);
       scanf("%c", &risp);
    }while(risp != 's' && risp != 'S' && risp != 'n' && risp != 'N');

 }while(risp=='s'||risp=='S'); // Fine ripetizione del programma

} // Fine Programma 
