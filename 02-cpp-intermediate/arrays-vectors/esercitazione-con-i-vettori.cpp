#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio2.h>

int main()
{
	
	int const DIM=100;       
	                        
	int  NVU, NV, NV2, VPOS[DIM], VNEG[DIM], i, j, k, ineg, ipos, col, riga, state, Risp, scelta, cpari, cdispari, cpositivi, cnegativi, rig, Nmaxscan, Scan, Nmaxscan2, Scan2 ;               //dichiarazione delle variabili intere
	int Met, Trovato, Continuare, Linf, Lsup, Ordinato, comodo, A, Vcar, state6;
	float V1[DIM], V2[DIM], VU[DIM+DIM], S, M, Sp, Sd, Mp, Md, Xri;                                                                 //dichiarazione delle variabili float 
	char  RispUscita;



	
	state=state6=Vcar=0;			// Vettore non caricato dato che è a 0 
		
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
A=NV;
//	*/
 do{				                                                 // INIZIO Ripetizione di tutto il programma	                           
                                                                               //INIZIO Menù 

	system("CLS");           //pulizia di tutto il programma 
	

	textcolor(15);gotoxy(1,1);                                                                      
	printf("--- Men%c di gestione dei valori del vettore ------------------------------------", 163);  
	
	gotoxy(3,4);                                                           
	printf("1) Caricamento di %d valori del vettore", NV);
	if(state==1){textcolor(15);}else{textcolor(7);}
	gotoxy(3,6);   
	if(state==1){textcolor(15);}else{textcolor(7);}                                                                  
	printf("2) Calcolo della media dei valori del vettore");
	if(state==1){textcolor(15);}else{textcolor(7);}
	gotoxy(3,8);                                                                     
	printf("3) Calcolo della media dei valori nelle posizioni logiche pari e dispari");
	if(state==1){textcolor(15);}else{textcolor(7);}
	gotoxy(3,10);
	printf("4) Memorizzazione dei valori positivi e negativi del vettore");
	if(state==1){textcolor(15);}else{textcolor(7);}
	gotoxy(3,12);
	printf("5) Visualizzazione dei vettori caricati");
	if(state==1){textcolor(15);}else{textcolor(7);}
	gotoxy(3,14);                                                                   
	printf("6) Ordinamento del vettore");
	if(state==1){textcolor(15);}else{textcolor(7);}
	gotoxy(3,16);                                                                   
	printf("7) Ricerca di un valore nel vettore");
	if(state==1 && state6==1){textcolor(15);}else{textcolor(7);}
	gotoxy(3,18);                                                                   
	printf("8) Merge");
	textcolor(15);
	gotoxy(3,20);                                                                     
	printf("9) Esci");
	if(state==1){textcolor(15);}
	gotoxy(3,22);                                                                     
	printf("Scegli ---> ");	
	do{                                               //ripetizione di tutto il programma 
	   gotoxy(15,22);                                 // la colonna è uguale a 15 e la riga è uguale a 16
       printf(".                                                ");
       gotoxy(15,22);                                 // la colonna è uguale a 15 e la riga è uguale a 16
       scanf("%d", &scelta);
    }while(scelta<1 || scelta>9);                     //controllo della scelta
    
                                       //FINE Menù
                                       
    M=0;
    Mp=0;
    Md=0;
    
   	system("CLS");                                 //pulizia del programma 
   	textcolor(7);
    switch(scelta)
     {
     	
     	case 1:
		{
	        
		system("CLS");	               //pulizia di tutto il programma 
	                  
		if(state==1) 
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
                scanf("%d", &Risp);
            }while(Risp<1 || Risp>3);                         //fine ripetizione del programma 
            
            system("CLS");                                    
            
            if(Risp==1)
            {
            	 for(i=0, col=3, riga=1; i<NV; i++, riga=riga+2)		// Ciclo di visualizzazione dei valori già inseriti
				 {
                  gotoxy(col,riga);                      
            	  printf("%d) valore ---> %.0f", i+1, V1[i]);
            	  
				 }
				getch();
			}
			
			if(Risp==2)
			{
				state=0;
			}
			
		   // getch();
			
	     	}while(!(Risp==2 || Risp==3));	
	     } 
		 
	     	
			if(state==0)
			{
			
			gotoxy(1,1);
            printf("Immetti %d valori interi uno alla volta", NV);
		
			
            for(i=0,col=1, riga=4; i<NV; i++,riga=riga+2)		// Ciclo di inserimento dei valori
            {
            	do{
            	gotoxy(col,riga);
            	printf(".                                  ");
            	gotoxy(col,riga);
            	printf("%d) Valore --> ", i+1);
            	scanf("%f", &V1[i]);
            	}while(V1[i]<1 && V1[i]>-1); //è per non prendere lo 0
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
	   		S=S+V1[i];
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
		
		for(Mp=0, Sp=0, cpari=0, i=1; i<NV; i=i+2,cpari++)
	    {
	    Sp=Sp+V1[i];
	    }
	    
	    for(Md=0, Sd=0, cdispari=0, i=0; i<NV; i=i+2,cdispari++)
	    {
	    Sd=Sd+V1[i];
	    }
	  
	    Mp=Sp/cpari;
	    gotoxy(1,3);
	    printf("La media dei valori nelle posizioni logiche pari del vettore %c     %.2f", 130, Mp);
	    
	    Md=Sd/cdispari;
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
		
       
			
			for(i=0, cpositivi=0,cnegativi=0,ipos=0, ineg=0;  i<NV;  i++)
			{
	 			if(V1[i]>0)
	 			{	
	 				VPOS[ipos]=V1[i];
	 				ipos++;
	 				cpositivi++;
				}
		
				if(V1[i]<0)
				{
					VNEG[ineg]=V1[i];
					ineg++;
					cnegativi++;
				}
			}	
		Vcar=1;
		
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
			for(i=0, rig=0; i<NV; i++, rig++)		// Ciclo di visualizzazione dei valori già inseriti
			{
			if(i==NV-1)
			   {
			    printf("  %.0f.", V1[i]);
			   } 
			   else
			   {
			   printf("  %.0f,", V1[i]);
			   }
			   
			   if(rig==10) {printf("\n"); rig=0;}                      
            	  
           	}
				
				if(Vcar==1)
				{
			
					if(cpositivi>0){
					
					printf("\n\n\n\nNel vettore sono contenuti %d valori positivi e sono:\n\n", cpositivi);
					
			    	for(ipos=0, rig=0; ipos<cpositivi; ipos++, rig++)
			   		{
			   		if(ipos==cpositivi-1)
					   {
					   printf("  %d.", VPOS[ipos]);
					   } 
					   else
					   {
					   printf("  %d,", VPOS[ipos]);
					   }
					   
					   if(rig==10) {printf("\n"); rig=0;}
			    	}
			    	
					}
					else
					{
					printf("\n\n\n\nNel vettore non sono contenuti valori positivi.");
					}
					
					if(cnegativi>0){
					printf("\n\n\nNel vettore sono contenuti %d valori negativi e sono:\n\n", cnegativi);
				
					for(ineg=0, rig=0; ineg<cnegativi; ineg++, rig++)
			    	{
			    		
			    	if(ineg==cnegativi-1)
					   {
					   printf("  %d.", VNEG[ineg]);
					   } 
					   else
					   {
					   printf("  %d,", VNEG[ineg]);
					   }
					   
					   if(rig==10) {printf("\n"); rig=0;}
					}
	    	
			    	}
					else
					{
					printf("\n\n\n\nNel vettore non sono contenuti valori negativi.");
					}
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
	  		
	  		if(state==1)
	  		{
			Nmaxscan=NV;
			for(Scan=1,Ordinato=0; Scan<Nmaxscan && Ordinato==0; Scan++)
			{
				for(i=0,Ordinato=1; i<Nmaxscan-Scan; i++)
				{
					if(V1[i]>V1[i+1])
					{
						comodo=V1[i];
						V1[i]=V1[i+1];
						V1[i+1]=comodo;
						Ordinato=0;
					}
				}
			}
			
			printf("************Vettore ordinato !!!*********************************");
			getch();
			system("cls");
			printf("I %d valori da te inseriti sono in ordine crescente:\n\n",NV);
			for(i=0, rig=0; i<NV; i++, rig++)		// Ciclo di visualizzazione dei valori già inseriti
			{
				
			if(i==NV-1)
			   {
			    printf("  %.0f.", V1[i]);
			   } 
			   else
			   {
			   printf("  %.0f,", V1[i]);
			   }
			   
			}
			state6=1;
			
			}
	    	else
    		{
    			
    		system("CLS");
			printf("Nessun vettore caricato!!!");
		
			}
	    	
	  	
		  	
		}
		break;
		
		
	  case 7:
	  	{
	  		system("cls");
	  		
	  	if(state==1)
	  	{
		  	
			gotoxy(3,2); printf("Immetti un valore da ricercare --> .");
			gotoxy(38,2); scanf("%f", &Xri);
	  		
			if(Ordinato==1)
	  		{
				
				Linf=0;
				Lsup=NV-1;
				
				Trovato=0;
				Continuare=1;
				
				while(Continuare==1)
				{
						
					Met=(Linf+Lsup)/2;
					
						if(V1[Met]==Xri) 
						{
							Trovato=1;
							Continuare=0;
						}
						
						else
						{
						
							if(Xri<V1[Met])
							{
								Lsup=Met-1;
							}
							
							else
							{
								Linf=Met+1;
							}
							
							if(Linf>Lsup) {Continuare=0;}				
						}	
				}
	
			}
			else
			{
				for(Trovato=0, Continuare=1, i=0; i<NV && Continuare==1; i++)
				{
					if(Xri==V1[i]) {Trovato=1;Continuare=0;}
					else
					{
						if(V1[i]>Xri) {Continuare=0;}
						
					}
					
				}
		
			}
			
			if(Trovato==1) 
			{
				printf("Il valore %f %c stato  trovato alla posizione %d", V1[i-1], 130, i);
			}
			for(i=0; i<NV; i++)		// Ciclo di visualizzazione dei valori già inseriti
				 {
                  gotoxy(col,riga);                      
            	  printf("\n\n%d) valore ---> %.0f", i+1, V1[i]);
            	  
				 }
				getch();
	  	}
	  	
	  	else
	  	
	  	{
	  		system("CLS");
			printf("Il vettore non %c stato caricato!!!",130);	
		}
	  	
		}
		break;
		
		
		case 8:
	  	{
	  		system("cls");
	  		
	  	if(state==1 && state6==1)
	  	{
	  		printf("Immettere un valore multiplo di 10 e minore di 100!");
	gotoxy(1,6);
	printf("Inserisci quanti sono i valori della sequenza --> ");
	
	
	do{                                          //Inizio controllo di NV
	
	gotoxy(51,6);
	printf (".                                                  ");
	gotoxy(51,6);	
	scanf("%d", &NV2);
	
	gotoxy(1,9);
	if(NV2>DIM)
	{
	printf("IL VALORE DA TE INSERITO SUPERA LA GRANDEZZA MASSIMA DISPONIBILE (100)");	
	Sleep(4000);
	}
	else{
	
	if(NV2<10 || NV2%10!=0 )
	{
	printf("IL NUMERO DI VALORI DEVE ESSERE UN MULTIPLO DI 10!!!"); 
	Sleep(2500);
	}
    }
	gotoxy(1,9);
	printf("                                                                                 ");
	
	}while(NV2%10!=0 || NV2>DIM || NV2<10);
	
	system("cls");
	  		
			gotoxy(1,1);
            printf("Immetti %d valori interi uno alla volta", NV2);
		
			
            for(j=0,col=1, riga=4; j<NV2; j++,riga=riga+2)		// Ciclo di inserimento dei valori
            {
            	do{
            	gotoxy(col,riga);
            	printf(".                                  ");
            	gotoxy(col,riga);
            	printf("%d) Valore --> ", j+1);
            	scanf("%f", &V2[j]);
            	}while(V2[j]<1 && V2[j]>-1); //è per non prendere lo 0	 
			}
			
			Nmaxscan2=NV2;
			for(Scan2=1,Ordinato=0; Scan2<Nmaxscan2 && Ordinato==0; Scan2++)
			{
				for(i=0,Ordinato=1; i<Nmaxscan2-Scan2; i++)
				{
					if(V2[j]>V2[j+1])
					{
						comodo=V2[j];
						V2[j]=V2[j+1];
						V2[j+1]=comodo;
						Ordinato=0;
					}
				}
			}
			
			
			
				//NVU=NV2+NV;
				for(i=j=k=0; i<NV && j<NV2; k++)
				{
					if(V1[i]< V2[j])
					{
						VU[k]=V1[i];
						i++;
					}
					else
					{
						VU[k]=V2[j];
						j++;
					}
				}
				
				if(i==NV)
				{
					for(; j<NV2; k++, j++)
					{
						VU[k]=V2[j];
					}
				}
				
				else
				{
					for(;i<NV; k++, j++)
					{
						VU[k]=V1[i];
					}
				}
				
				
			printf("I %d valori da te inseriti sono in ordine crescente:\n\n",NV+NV2);
			for(k=0, rig=0; k<NV+NV2; k++, rig++)		// Ciclo di visualizzazione dei valori già inseriti
			{
				
			if(i==(NV+NV2)-1)
			   {
			    printf("  %.0f.", VU[k]);
			   } 
			   else
			   {
			   printf("  %.0f,", VU[k]);
			   }
			   
			}	
			getch();	  		
	  		
	  		}
	  		
	  	else

	  	{
	  		system("CLS");
			printf("Nessun vettore caricato o il vettore non %c stato ordinato!!!",130);
				
		}
	  	
		}
		break;
		
	  
	  case 9:
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
    
    
 }while(scelta != 9); // Fine ripetizione del programma
 
 
} // Fine Programma
