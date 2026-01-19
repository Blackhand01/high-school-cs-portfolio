#include<conio2.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int const DIM=100;
	char cognome[DIM], nome[DIM], Cognome[DIM], Nome[DIM], lnascita[DIM], Lnascita[DIM], sesso, risp;
	int Cognerror, i, nccognome, Nomerror, ncnome, ncnascita, Nascerror;
	int G,M, A, GF, Errore;
		
do{
		
	system("CLS");

	textcolor(14); gotoxy(33,2); printf("CODICE FISCALE");
	
	textcolor(11);
	gotoxy(3,5);	printf("COGNOME  ..............................");
	gotoxy(3,7);	printf("NOME     ..............................");
	gotoxy(3,9);	printf("DATA DI ");
	gotoxy(3,10);	printf("NASCITA  ..............................");
	gotoxy(3,12);	printf("SESSO    . ");
	gotoxy(3,14);	printf("LUOGO DI");
	gotoxy(3,15);	printf("NASCITA  ..............................");



//////////////////////////	COGNOME			
	do{
		gotoxy(60,5); printf("                      ");
		
		textcolor(15); gotoxy(3,5); printf("COGNOME  ..............................");
		textcolor(15); gotoxy(12,5); gets(cognome);
		
		nccognome=strlen(cognome);
		
		for(i=0; i<nccognome; i++)
		{
		Cognome[i]=toupper(cognome[i]);
		}
		Cognome[i]='\0';
		
		for(i=0, Cognerror=0; i<nccognome && Cognerror==0; i++)
		{
			if(Cognome[i]>='A' && Cognome[i]<='Z' || Cognome[i] == 39 || Cognome[i] == ' ')
		 {
		 	Cognerror=0;
		 }
		 else
		 {
		 	Cognerror=1;
		 	textcolor(12); gotoxy(60,5); printf("Cognome errato!!");
		 }
		}
		
	 
	}while(Cognerror==1);
	
	gotoxy(12,5); puts(Cognome);
	gotoxy(12+nccognome,5); printf("                                ");
	
//////////////////////////NOME	
	
	do{
		gotoxy(60,7); printf("                      ");
		
		textcolor(15); gotoxy(3,7);	printf("NOME     ..............................");
		textcolor(15); gotoxy(12,7); gets(nome);
		
		ncnome=strlen(nome);
		
		for(i=0; i<ncnome; i++)
		{
		Nome[i]=toupper(nome[i]);
		}
		Nome[i]='\0';
		
		for(i=0, Nomerror=0; i<ncnome && Nomerror==0; i++)
		{
			if(Nome[i]>='A' && Nome[i]<='Z' || Nome[i] == 39 || Nome[i] == ' ')
		 {
		 	Nomerror=0;
		 }
		 else
		 {
		 	Nomerror=1;
		 	textcolor(12); gotoxy(60,7); printf("Nome errato!!");
		 }
		}
		
	 
	}while(Nomerror==1);
	
	gotoxy(12,7); puts(Nome);
	gotoxy(12+ncnome,7); printf("                                        ");		
	
	
	
	do{         // rimmissione della data se è errata
       	textcolor(15);
       	gotoxy(3,9);	printf("DATA DI ");
		gotoxy(3,10);	printf("NASCITA  ../../....");
       	
        do{
          gotoxy(12,10);
          printf("../../....                    ");
          gotoxy(12,10);
          scanf("%d", &G);
        }while(G<1||G>31);
       
        if(G>=1 && G<=9)
	    {
         gotoxy(12,10);
         printf("0");
         printf("%d", G);
	    }

       do{
          gotoxy(14,10);
          printf("/../....                    ");
          gotoxy(15,10);
          scanf("%d", &M);
       }while(M<1||M>12);
	   
       if(M>=1 && M<=9)
	   {
         gotoxy(15,10);
         printf("0");
         printf("%d", M);
	   }
	   
       do{
       	  gotoxy(17,10);
          printf("/....                    ");
          gotoxy(18,10);
          scanf("%d", &A);
       }while(A<1000||A>2050);
       
       GF=28;
       Errore=0;
       
        if((M==4||M==6||M==9||M==11)&&(G>30))
        {
         Errore=1;
        }
        else
        {
         if((M==2)&&(((A%4==0)&&(A%100!=0))||(A%400==0)))
          {
           GF=29;
          }
         if(M==2&&G>GF)
          {
           Errore=1;
          }
        }
        // per i mesi 1 o 3 o 5 o 7 o 8 o 10 o 12 non si ha bisogno di
        // controllare il giorno perche' si e' gia' controllato che
        // G non sia maggiore di 31
       
       if(Errore==1)
        {
        textcolor(12); gotoxy(50,10); printf("Data non valida!!!");
        }
        //gotoxy(5,17);
        //getch();

    	}while(Errore==1);
    
   
    
    
	do{
	     gotoxy(3,12);	printf("SESSO    . ");
	     fflush(stdin);
	     gotoxy(12,12);
	     scanf("%c", &sesso);
	    }while(sesso != 'm' && sesso != 'M' && sesso != 'f' && sesso != 'F');
	    
	  if(sesso =='m' || sesso =='M') 
	  {gotoxy(12,12); printf("M");}
	  
	  if(sesso =='f' || sesso =='F') 
	  {gotoxy(12,12); printf("F");}
	  
	  
	 
	do{
       gotoxy(5,20);
       printf("Vuoi ripetere il programma ? (s/n) --> .");
       fflush(stdin);
       gotoxy(44,20);
       scanf("%c", &risp);
    }while(risp != 's' && risp != 'S' && risp != 'n' && risp != 'N');
 }while(risp=='s'||risp=='S'); // Fine ripetizione del programma
}
