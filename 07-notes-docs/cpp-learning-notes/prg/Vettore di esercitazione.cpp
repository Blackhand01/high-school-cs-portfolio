#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio2.h>

int main()
{
	
	int const DIM=100;       
	                        
	int  NV, VPOS[DIM], VNEG[DIM], i, in, ip, col, riga, state, RispCase1, scelta, cp, cd, cn, rig;               //dichiarazione delle variabili intere

	float V[DIM], S, M, Sp, Sd, Mp, Md;                                                                      //dichiarazione delle variabili float 

	char  RispUscita;


	
	state=0;			// Vettore non caricato dato che è a 0 
		
	system ("CLS");
    gotoxy(10,1);
    printf ("PROGRAMMA DI GESTIONE DEI VALORI DEL VETTORE (Grandezza massima 100)");
    gotoxy(1,4);
	printf("Immettere un valore multiplo di 10 e minore di 100!");
	gotoxy(1,6);
	printf("Inserisci quanti sono i valori della sequenza --> ");
	
	
	do{                                          //Inizio controllo di NV
	
	gotoxy(51,6);
	printf (".                                                  ");
	gotoxy(51,6);	
	scanf("%d", &NV);
	
	gotoxy(1,9);
	if(NV>DIM)
	{
	printf("IL VALORE DA TE INSERITO SUPERA LA GRANDEZZA MASSIMA DISPONIBILE (100)");	
	Sleep(4000);
	}
	else{
	
	if(NV<10 || NV%10!=0 )
	{
	printf("IL NUMERO DI VALORI DEVE ESSERE UN MULTIPLO DI 10!!!"); 
	Sleep(2500);
	}
    }
	gotoxy(1,9);
	printf("                                                                                 ");
	
	}while(NV%10!=0 || NV>DIM || NV<10);         //Fine controllo di NV [Resto==0 and NV<=DIM and NV>=10]

//	*/
 do{				                                                 // INIZIO Ripetizione di tutto il programma	                           
                                                                               //INIZIO Menù 

	system("CLS");           //pulizia di tutto il programma 
	

	gotoxy(1,1);                                                                      
	printf("--- Men%c di gestione dei valori del vettore ------------------------------------", 163);  
	
	gotoxy(3,4);                                                           
	printf("1) Caricamento di %d valori del vettore", NV);
	gotoxy(3,6);                                                                     
	printf("2) Calcolo della media dei valori del vettore");
	gotoxy(3,8);                                                                     
	printf("3) Calcolo della media dei valori nelle posizioni logiche pari e dispari");
	gotoxy(3,10);                                                                      
	printf("4) Memorizzazione dei valori positivi e negativi del vettore");
	gotoxy(3,12);                                                                     
	printf("5) Visualizzazione dei vettori caricati");
	gotoxy(3,14);                                                                   
	printf("6) Esci");
	gotoxy(3,16);                                                                     
	printf("Scegli ---> ");
	
	do{                                               //ripetizione di tutto il programma 
	   gotoxy(15,16);                                 // la colonna è uguale a 15 e la riga è uguale a 16
       printf(".                                                ");
       gotoxy(15,16);                                 // la colonna è uguale a 15 e la riga è uguale a 16
       scanf("%d", &scelta);
    }while(scelta<1 || scelta>6);                     //controllo della scelta
    
                                       //FINE Menù
                                       
    M=0;
    Mp=0;
    Md=0;
    
   	system("CLS");                                 //pulizia del programma 
   	
    switch(scelta)
     {
     	
     	case 1:
		{
	        
		system("CLS");	               //pulizia di tutto il programma 
	                  
		if(state==1) ////////////////////////////////////////////////////////////////////////////
		 {
		 	do{                              //ripetizione di tutto il programma 
		 
		 	system("CLS");
		    gotoxy(1,1);
		    printf("Nel vettore sono già presenti dei dati caricati !!!");
		    gotoxy(3,4);
		    printf("1) Vuoi visualizzare i dati presenti?");
		    gotoxy(3,6);
			printf("2) Vuoi sovrascrivere i vecchi dati e immetterne nuovi?");
			gotoxy(3,8);
			printf("3) Vuoi continuare con i vecchi dati?");
			gotoxy(3,10);
			printf("Scegli ---> ");
	
	        do{
	            gotoxy(15,10);
                printf(".                                                ");
                gotoxy(15,10);
                scanf("%d", &RispCase1);
            }while(RispCase1<1 || RispCase1>3);                         //fine ripetizione del programma 
            
            system("CLS");                                    
            
            if(RispCase1==1)
            {
            	 for(i=0, col=3, riga=1; i<NV; i++, riga=riga+2)		// Ciclo di visualizzazione dei valori già inseriti
				 {
                  gotoxy(col,riga);                      
            	  printf("%d) valore ---> %.3f", i+1, V[i]);
            	  
				 }
				getch();
			}
			
			if(RispCase1==2)
			{
				state=0;
			}
			
		   // getch();
			
	     	}while(!(RispCase1==2 || RispCase1==3));	
	     } 
		 
	     	
			if(state==0)
			{
			
			gotoxy(1,1);
            printf("Immetti %d valori uno alla volta", NV);
		
			
            for(i=0,col=1, riga=4; i<NV; i++,riga=riga+2)		// Ciclo di inserimento dei valori
            {
            gotoxy(col,riga);
            printf("%d) Valore ---> ", i+1);
            scanf("%f", &V[i]);
           }
       
           state=1;					   // valori caricati
           gotoxy(1,riga++);
           printf("Valori caricati!!!");
        
           Sleep(1000);
       // getch();
          }
        
      	}                                //FINE caricamento valori del vettore
	  	break;

	  		 

	  	case 2:
	 	 {
	 	 	
	 	 	system("CLS");
	  	
	  		if(state==1)
	  		{
			
	    	for(S=0, i=0; i<NV; i++)
	   		{	
	   		S=S+V[i];
	   		}
	    
	   		 M=S/NV;
	    	gotoxy(1,3);
	    	printf("La media della sequenza dei %d valori del vettore %c ---> %.2f",NV, 130, M);
	  		}
			else
    		{
    		system("CLS");
			printf("Valori non caricati!!!");
		
			}
			
	 		getch();
	  
	  	}
	  	break;
	  


	  	case 3:
	  	{
	  	
	  	system("CLS");
	  	
	  	if(state==1)
	  	{
		
		for(Sp=0, cp=0, i=1; i<NV; i=i+2,cp++)
	    {
	    Sp=Sp+V[i];
	    }
	    
	    for(Sd=0, cd=0, i=0; i<NV; i=i+2,cd++)
	    {
	    Sd=Sd+V[i];
	    }
	  
	    Mp=Sp/cp;
	    gotoxy(1,3);
	    printf("La media dei valori nelle posizioni logiche pari del vettore %c     %.2f", 130, Mp);
	    
	    Md=Sd/cd;
	    gotoxy(1,5);
	    printf("La media dei valori nelle posizioni logiche dispari del vettore %c  %.2f", 130, Md);
		}
		else
    	{
    	system("CLS");
		printf("Valori non caricati!!!");
		}
	    
	    getch();
	
	   	}	
	    break;	
	  
	  
	  	case 4:
	  	{
	  		
	  	system("CLS");
	  		
	  	if(state==1)
        {
        	
		system("CLS");
		
        for(i=0; i<NV; i++)
		{
			
			for(i=0, cp=0,cn=0,ip=0, in=0;  i<NV;  i++)
			{
	 			if(V[i]>0)
	 			{	
	 				VPOS[ip]=V[i];
	 				ip++;
	 				cp++;
				}
		
				if(V[i]<0)
				{
					VNEG[in]=V[i];
					in++;
					cn++;
				}
			}	
		}	
		
		printf("\n*** Memorizzazione dei valori positivi e negativi effettuata !!!****************");
	
	 	}	
	 
	 	else
    	{
    	system("CLS");
		printf("Valori non caricati!!!");
		
		}
		
		getch();
		
		}
		break;
		
		case 5:
		{
		
		system("CLS");
		
		if(state==1)
		{
			
			printf("I %d valori da te inseriti sono:\n\n",NV);
			for(i=0, rig=0; i<NV; i++, riga=riga++)		// Ciclo di visualizzazione dei valori già inseriti
			{
			if(i==NV-1)
			   {
			    printf("  %.1f.", V[i]);
			   } 
			   else
			   {
			   printf("  %.1f,", V[i]);
			   }
			   
			   if(rig==9) {printf("\n"); rig=0;}                      
            	  
           	}
			
			if(cp>0){
			
			printf("\n\n\n\nNel vettore sono contenuti %d valori positivi e sono:\n\n", cp);
			
	    	for(ip=0, rig=0; ip<cp; ip++, rig++)
	   		{
	   		if(ip==cp-1)
			   {
			   printf("  %d.", VPOS[ip]);
			   } 
			   else
			   {
			   printf("  %d,", VPOS[ip]);
			   }
			   
			   if(rig==10) {printf("\n"); rig=0;}
	    	}
	    	
			}
			else
			{
			printf("\n\n\n\nNel vettore non sono contenuti valori positivi.");
			}
			
			if(cn>0){
			printf("\n\n\nNel vettore sono contenuti %d valori negativi e sono:\n\n", cn);
		
			for(in=0, rig=0; in<cn; in++, rig++)
	    	{
	    		
	    	if(in==cn-1)
			   {
			   printf("  %d.", VNEG[in]);
			   } 
			   else
			   {
			   printf("  %d,", VNEG[in]);
			   }
			   
			   if(rig==10) {printf("\n"); rig=0;}
			}
	    	
	    	}
			else
			{
			printf("\n\n\n\nNel vettore non sono contenuti valori negativi.");
			}
	    	
	    	}
	    	else
    		{
    		system("CLS");
			printf("Nessun vettore caricato!!!");
		
			}
	    	getch();
	    	
		}
		break;
	  
	  case 6:
	  {
	  	 
	  	 system("cls");
            
			fflush(stdin);
		    do{
		    gotoxy(60,3);
		    printf("                    ");
		    
			gotoxy(1,1);
			printf("SEI SICURO DI VOLER TERMINARE IL PROGRAMMA ?");
			gotoxy(1,3);
			printf("schiaccia 's' per terminare o 'n' per tornare al men%c ---> ",163);
			fflush(stdin);
		
			gotoxy(60,3);
			scanf("%c", &RispUscita);
			
			}while(RispUscita!='s' && RispUscita!='S' && RispUscita!='n' && RispUscita!='N');
       
        if(RispUscita == 'n' || RispUscita == 'N') { scelta=0; }     // Se c'è un ripensamento si "forza" un valore diverso dall'Uscita (6)   
      }
    } // fine switch_case
    
    
 }while(scelta != 6); // Fine ripetizione del programma
 
 
} // Fine Programma
