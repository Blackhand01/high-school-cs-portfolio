#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<math.h>
#include<time.h>

int main(){


	int const SCHEDINA=15, TOMBOLONE=90;
	
	int VET1[SCHEDINA], VET2[SCHEDINA], VET3[SCHEDINA], VET4[SCHEDINA], VET5[SCHEDINA], VET6[SCHEDINA], VET7[SCHEDINA], VET8[SCHEDINA], SCHEDEGIOC[TOMBOLONE];
	int GIOC1[SCHEDINA], GIOC2[SCHEDINA], GIOC3[SCHEDINA], GIOC4[SCHEDINA], GIOC5[SCHEDINA], GIOC6[SCHEDINA];  // VET2[SCHEDINA],
	int col, riga, gestsched, i, indice1, indice2, indice3, indice4, indice5, indice6,gestnum, gestnvcol, c, contsom, trovato, numerorandom, Ordinato, comodo, Scan, ordin;
	int  scelta1,  tempo, color, cortemp, corcolor, avv, cor2color, cor2temp, NumeroGiocatori, a, Ii, Ng, sceltaSchedina;
	
//	float
	
    char rispUscita ,risp, cornsimb, corn2simb, symbol, risp2;


	system("CLS");


srand(time(0));                        //AVVIAMENTO DEL RANDOM

textbackground(15);                    //Sfondo bianco

a=0;

system("cls");                         //PULIZIA SCHERMO

	
textcolor(12);                         //Inizio schermata di apertura
gotoxy(30,12);
printf("TOMBOLA VIRTUALE");
	
	textcolor(4);
	gotoxy(21,20);
	printf("%c Premi un tasto per continuare...", 127);
	
	getch();                          //Fine schermata di apertura
	
	system("cls");
		textbackground(0);             //Inizio schermata di caricamento del gioco
	system("cls");

	col=20;
	
		textcolor(15);

		gotoxy(30,13);
	printf("Caricamento in corso");
	
	do{
			
		textcolor(7);
		gotoxy(col,14);
		col=col+2;
		printf("%c%c",219,219);
		if(col==30){		printf("%c%c%c%c",219,219,219,219); col=col+4;
		Sleep(400);
		}
		if(col==50){		printf("%c%c%c%c%c%c%c%c%c%c",219,219,219,219,219,219,219,219,219,219); col=col+10;}
		
		Sleep(300);
	}while(col<=60);
	
		gotoxy(30,13);

	Sleep(1000);
	
	textbackground(0);
	
              //Fine schermata di caricamento del gioco

//*******************do{                                              //RIPETIZIONE TUTTO IL PROGRAMMA


system("CLS");
    
                                      
//                                      IMPOSTAZIONI

                                       // Comandi della cornicetta
                                    
cornsimb=178;      // simbolo per la cornice  [219]
corcolor=1;        //contatore del colore della cornice
cortemp=20;         //tempo di formazione della cornice


                                       // Comandi della 2° cornicetta
                                    
corn2simb=16;      //simbolo per la cornice [16 per i laterali, 30 per i verticali]
cor2color=1;       //contatore del colore della cornice
cor2temp=20;       //tempo di formazione della cornice


//                                     FINE IMPOSTAZIONI 
	

/////////////////////////////////////////////////////////

//


	                                   //INIZIO CORNICETTA SCHERMATA HOME
	                                   
	                                   
col=80;            //predefinite per la cornice
riga=1;            //predefinite per la cornice

	do{                                
	
	textcolor(corcolor);
	gotoxy(col,riga);
	printf("%c", cornsimb);
	riga++;
	Sleep(cortemp);

	corcolor++;
	
	if(corcolor==15)
	{
		corcolor=1;
    }
	
	}while(riga<25);
	
	
	do{
	
	textcolor(corcolor);
	gotoxy(col,riga);
	printf("%c",cornsimb);
	col--;
	Sleep(cortemp);
	
	corcolor++;
	
	if(corcolor==15)
	{
		corcolor=1;
    }
	
	}while(col>1);
	
	
	do{
	
	textcolor(corcolor);
	gotoxy(col,riga);
	printf("%c",cornsimb);
	riga--;
	Sleep(cortemp);	
		
	corcolor++;
	
	if(corcolor==15)
	{
		corcolor=1;
    }
	
	}while(riga>1);  
	
	
	do{
		
	textcolor(corcolor);
	gotoxy(col,riga);
	printf("%c",cornsimb);
	col++;
	Sleep(cortemp);
	
	corcolor++;

	if(corcolor==15)
	{
		corcolor=1;
    }
	
	}while(col<80);                    //FINE CORNICETTA SCHERMATA HOME
	
	
	
	
		textcolor(9);                  //INIZIO DEL MENU
		gotoxy(30,3);
		printf("TOMBOLA VIRTUALE");
		
		textcolor(11);
		
		gotoxy(5,7);
		printf("1 - Istruzioni del gioco");
		
		gotoxy(5,9);
		printf("2 - Vai al gioco!!! ");
		
		gotoxy(5,11);
		printf("Scegli ---> . ");
		
		do{
		gotoxy(17,11);
		printf("                           ");
		textcolor(7);
		gotoxy(18,11);
		scanf("%d", &scelta1);
	    }while(scelta1<1 || scelta1>2);
	    
	    
	    switch(scelta1)
	    {
	    	
	    	case 1:
	    		{
	    			system("cls");
	    			
	    			printf("prossimamente le istruzioni del gioco...");
	    		
				}
				break;
				
				
				
				
				
				
			case 2:
				{                   /////CASE 2 DEL PRIMO SWITCH
				system("cls");
				
				do{
					
				printf("Quanti giocatori siete? (max 6) --> ");
				scanf("%d", &NumeroGiocatori);
				
				}while(NumeroGiocatori<1 || NumeroGiocatori>6);
				
				
				
				for(Ng=0; Ng<NumeroGiocatori; Ng++)
				{
					
					do{                      //do dell' aggioranmento schede se 0
						
						
						
						
						system("cls");

						//	printf("\n\n\n\n***************** Schedina 1 **************************");
						
						for(i=0; i<SCHEDINA; i++) {VET1[i]=0;}
						
							
						for(i=0, gestnum=1; gestnum<90 && i<SCHEDINA; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
						{
							c=0;
							numerorandom=rand()%2+2;       //SERVE PER DECIDERE SE MAX 2 O 3 PER COLONNA
							gestnvcol=rand()%numerorandom+1;  //COLONNA DA 1 A 2 O 3 DIPENDE DALL'ISTRUZIONE PRECEDENTE
							
							do{
								
							VET1[i]=rand()%10+gestnum;         //ASSEGNAZIONE VALORE RANDOM AL VETTORE--> DA 0 A 9 +gestnum(1) --> DA 1 A 10
							
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET1[i]==VET1[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++; c++;}                                         //se non e' sato trovato si incrementano le variabili
							
							}while(c<gestnvcol);                                //tutto questo fino a che c non diventa quanto il numero rando da 1 a 3 dei valori per colonna della schedina
							
							
						}
						
						
							do{
						
							if(i!=16) 
							{ 
							VET1[i]=rand()%20+71;
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET1[i]==VET1[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++;}                                            //se non e' sato trovato si incrementano le variabili
							}
							
							}while(i<16); 	//i--;  //i sarà SCHEDINA
						
							
							
							
							
						
								
						
						///////		printf("\n\n\n\n***************** Schedina 2 **************************");
							
						
						
						for(i=0; i<SCHEDINA; i++) {VET2[i]=0;}
						
							
						for(i=0, gestnum=1; gestnum<90 && i<SCHEDINA; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
						{
							c=0;
							numerorandom=rand()%2+2;       //SERVE PER DECIDERE SE MAX 2 O 3 PER COLONNA
							gestnvcol=rand()%numerorandom+1;  //COLONNA DA 1 A 2 O 3 DIPENDE DALL'ISTRUZIONE PRECEDENTE
							
							do{
								
							VET2[i]=rand()%10+gestnum;         //ASSEGNAZIONE VALORE RANDOM AL VETTORE--> DA 0 A 9 +gestnum(1) --> DA 1 A 10
							
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET2[i]==VET2[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++; c++;}                                         //se non e' sato trovato si incrementano le variabili
							
							}while(c<gestnvcol);                                //tutto questo fino a che c non diventa quanto il numero rando da 1 a 3 dei valori per colonna della schedina
							
							
						}
						
						
							do{
						
							if(i!=16) 
							{ 
							VET2[i]=rand()%20+71;
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET2[i]==VET2[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++;}                                            //se non e' sato trovato si incrementano le variabili
							}
							
							}while(i<16); 	//i--;  //i sarà SCHEDINA
							
							
							
							
							
							
						///////			printf("\n\n\n\n***************** Schedina 3 **************************");
							
						
						
						for(i=0; i<SCHEDINA; i++) {VET3[i]=0;}
						
							
						for(i=0, gestnum=1; gestnum<90 && i<SCHEDINA; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
						{
							c=0;
							numerorandom=rand()%2+2;       //SERVE PER DECIDERE SE MAX 2 O 3 PER COLONNA
							gestnvcol=rand()%numerorandom+1;  //COLONNA DA 1 A 2 O 3 DIPENDE DALL'ISTRUZIONE PRECEDENTE
							
							do{
								
							VET3[i]=rand()%10+gestnum;         //ASSEGNAZIONE VALORE RANDOM AL VETTORE--> DA 0 A 9 +gestnum(1) --> DA 1 A 10
							
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET3[i]==VET3[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++; c++;}                                         //se non e' sato trovato si incrementano le variabili
							
							}while(c<gestnvcol);                                //tutto questo fino a che c non diventa quanto il numero rando da 1 a 3 dei valori per colonna della schedina
							
							
						}
						
						
							do{
						
							if(i!=16) 
							{ 
							VET3[i]=rand()%20+71;
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET3[i]==VET3[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++;}                                            //se non e' sato trovato si incrementano le variabili
							}
							
							}while(i<16); 	//i--;  //i sarà SCHEDINA
						
							
							
							
							
							
								
						
						///////		printf("\n\n\n\n***************** Schedina 4 **************************");
							
						
						
						for(i=0; i<SCHEDINA; i++) {VET4[i]=0;}
						
							
						for(i=0, gestnum=1; gestnum<90 && i<SCHEDINA; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
						{
							c=0;
							numerorandom=rand()%2+2;       //SERVE PER DECIDERE SE MAX 2 O 3 PER COLONNA
							gestnvcol=rand()%numerorandom+1;  //COLONNA DA 1 A 2 O 3 DIPENDE DALL'ISTRUZIONE PRECEDENTE
							
							do{
								
							VET4[i]=rand()%10+gestnum;         //ASSEGNAZIONE VALORE RANDOM AL VETTORE--> DA 0 A 9 +gestnum(1) --> DA 1 A 10
							
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET4[i]==VET4[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++; c++;}                                         //se non e' sato trovato si incrementano le variabili
							
							}while(c<gestnvcol);                                //tutto questo fino a che c non diventa quanto il numero rando da 1 a 3 dei valori per colonna della schedina
							
							
						}
						
						
							do{
						
							if(i!=16) 
							{ 
							VET4[i]=rand()%20+71;
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET4[i]==VET4[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++;}                                            //se non e' sato trovato si incrementano le variabili
							}
							
							}while(i<16); 	//i--;  //i sarà SCHEDINA
							
							
							
							
							
						
						///////			printf("\n\n\n\n***************** Schedina 5 **************************");
							
						
						
						for(i=0; i<SCHEDINA; i++) {VET5[i]=0;}
						
							
						for(i	=0, gestnum=1; gestnum<90 && i<SCHEDINA; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
						{
							c=0;
							numerorandom=rand()%2+2;       //SERVE PER DECIDERE SE MAX 2 O 3 PER COLONNA
							gestnvcol=rand()%numerorandom+1;  //COLONNA DA 1 A 2 O 3 DIPENDE DALL'ISTRUZIONE PRECEDENTE
							
							do{
								
							VET5[i]=rand()%10+gestnum;         //ASSEGNAZIONE VALORE RANDOM AL VETTORE--> DA 0 A 9 +gestnum(1) --> DA 1 A 10
							
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET5[i]==VET5[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++; c++;}                                         //se non e' sato trovato si incrementano le variabili
							
							}while(c<gestnvcol);                                //tutto questo fino a che c non diventa quanto il numero rando da 1 a 3 dei valori per colonna della schedina
							
							
						}
						
						
							do{
						
							if(i!=16) 
							{ 
							VET5[i]=rand()%20+71;
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET5[i]==VET5[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++;}                                            //se non e' sato trovato si incrementano le variabili
							}
							
							}while(i<16); 	//i--;  //i sarà SCHEDINA
						
							
							
							
							
							
								
						
						///////		printf("\n\n\n\n***************** Schedina 6 **************************");
							
						
						
						for(i=0; i<SCHEDINA; i++) {VET6[i]=0;}
						
							
						for(i=0, gestnum=1; gestnum<90 && i<SCHEDINA; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
						{
							c=0;
							numerorandom=rand()%2+2;       //SERVE PER DECIDERE SE MAX 2 O 3 PER COLONNA
							gestnvcol=rand()%numerorandom+1;  //COLONNA DA 1 A 2 O 3 DIPENDE DALL'ISTRUZIONE PRECEDENTE
							
							do{
								
							VET6[i]=rand()%10+gestnum;         //ASSEGNAZIONE VALORE RANDOM AL VETTORE--> DA 0 A 9 +gestnum(1) --> DA 1 A 10
							
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET6[i]==VET6[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++; c++;}                                         //se non e' sato trovato si incrementano le variabili
							
							}while(c<gestnvcol);                                //tutto questo fino a che c non diventa quanto il numero rando da 1 a 3 dei valori per colonna della schedina
							
							
						}
						
						
							do{
						
							if(i!=16) 
							{ 
							VET6[i]=rand()%20+71;
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET6[i]==VET6[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++;}                                            //se non e' sato trovato si incrementano le variabili
							}
							
							}while(i<16); 	//i--;  //i sarà SCHEDINA
							
							
							
							
							
							
							
							
							
							
							
							
							
						///////		printf("\n\n\n\n***************** Schedina 7 **************************");
							
						
						
						for(i=0; i<SCHEDINA; i++) {VET7[i]=0;}
						
							
						for(i=0, gestnum=1; gestnum<90 && i<SCHEDINA; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
						{
							c=0;
							numerorandom=rand()%2+2;       //SERVE PER DECIDERE SE MAX 2 O 3 PER COLONNA
							gestnvcol=rand()%numerorandom+1;  //COLONNA DA 1 A 2 O 3 DIPENDE DALL'ISTRUZIONE PRECEDENTE
							
							do{
								
							VET7[i]=rand()%10+gestnum;         //ASSEGNAZIONE VALORE RANDOM AL VETTORE--> DA 0 A 9 +gestnum(1) --> DA 1 A 10
							
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET7[i]==VET7[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++; c++;}                                         //se non e' sato trovato si incrementano le variabili
							
							}while(c<gestnvcol);                                //tutto questo fino a che c non diventa quanto il numero rando da 1 a 3 dei valori per colonna della schedina
							
							
						}
						
						
							do{
						
							if(i!=16) 
							{ 
							VET7[i]=rand()%20+71;
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET7[i]==VET7[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++;}                                            //se non e' sato trovato si incrementano le variabili
							}
							
							}while(i<16); 	//i--;  //i sarà SCHEDINA
						
							
							
							
							
							
								
						
						//////	printf("\n\n\n\n***************** Schedina 8 **************************");
							
						
						
						for(i=0; i<SCHEDINA; i++) {VET8[i]=0;}
						
							
						for(i=0, gestnum=1; gestnum<90 && i<SCHEDINA; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
						{
							c=0;
							numerorandom=rand()%2+2;       //SERVE PER DECIDERE SE MAX 2 O 3 PER COLONNA
							gestnvcol=rand()%numerorandom+1;  //COLONNA DA 1 A 2 O 3 DIPENDE DALL'ISTRUZIONE PRECEDENTE
							
							do{
								
							VET8[i]=rand()%10+gestnum;         //ASSEGNAZIONE VALORE RANDOM AL VETTORE--> DA 0 A 9 +gestnum(1) --> DA 1 A 10
							
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET8[i]==VET8[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++; c++;}                                         //se non e' sato trovato si incrementano le variabili
							
							}while(c<gestnvcol);                                //tutto questo fino a che c non diventa quanto il numero rando da 1 a 3 dei valori per colonna della schedina
							
							
						}
						
						
							do{
						
							if(i!=16) 
							{ 
							VET8[i]=rand()%20+71;
							for(indice1=0, trovato=0; indice1<SCHEDINA && trovato==0; indice1++)      //RICERCA SE IL VALORE DEL VETTORE NON SIA GIA' STATO ESTRATTO
							{
								if(i==indice1){indice1++;	}                                    //OVVIAMENTE USCIRA' TROVATO NON APPENA  i sarà uguaale a indice1 (AD ESEMPIO ENTRAMBI 0)
								if(VET8[i]==VET8[indice1]) {trovato=1;}                          
							}
							if(trovato==0) {i++;}                                            //se non e' sato trovato si incrementano le variabili
							}
							
							}while(i<16); 	//i--;  //i sarà SCHEDINA
							
							
						/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
						
						
						
						//////////////////////////////////////////////////////ORDINAMENTO DEI VETTORI/////////////////////////////////////////////////////////////////////////////////////
						
						
						//ORDINAMENTO VET1************************************************
						for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET1[i]>VET1[i+1])
								{
									comodo=VET1[i];
									VET1[i]=VET1[i+1];
									VET1[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
						
						//ORDINAMENTO VET2************************************************
						for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET2[i]>VET2[i+1])
								{
									comodo=VET2[i];
									VET2[i]=VET2[i+1];
									VET2[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
						
						//ORDINAMENTO VET3************************************************
						for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET3[i]>VET3[i+1])
								{
									comodo=VET3[i];
									VET3[i]=VET3[i+1];
									VET3[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
						
						//ORDINAMENTO VET4************************************************
						for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET4[i]>VET4[i+1])
								{
									comodo=VET4[i];
									VET4[i]=VET4[i+1];
									VET4[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
						
						//ORDINAMENTO VET5************************************************
						for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET5[i]>VET5[i+1])
								{
									comodo=VET5[i];
									VET5[i]=VET5[i+1];
									VET5[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
						
						//ORDINAMENTO VET6************************************************
						for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET6[i]>VET6[i+1])
								{
									comodo=VET6[i];
									VET6[i]=VET6[i+1];
									VET6[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
						
						//ORDINAMENTO VET7************************************************
						for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET7[i]>VET7[i+1])
								{
									comodo=VET7[i];
									VET7[i]=VET7[i+1];
									VET7[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
						
						//ORDINAMENTO VET8************************************************
						for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET8[i]>VET8[i+1])
								{
									comodo=VET8[i];
									VET8[i]=VET8[i+1];
									VET8[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
						
						
						
						
						
						
						
						//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
						
						
						
						
						///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
							
							
						
							
						////////////////////////////////////////////////////////    A  4  GIOCATORI con schermata intera  ////////////////////////////////////////////////////////////////
							
						//  													   RETTANGOLO PERFETTO
							col=1;
							riga=2;      ///PARTE DALLA SECONDA RIGA
							
							do{
							
							gotoxy(col,riga);
							printf("%c",219); //righe tabellone a 2 giocatori verticale |
							riga++;
							}while(riga!=58);
							
							
							col=80;
							riga=57;
							
							do{
							
							gotoxy(col,riga);
							printf("%c",219); //righe tabellone a 2 giocatori
							riga--;
							}while(riga!=1);
							
							
							col=2;
							riga=2;         ///PARTE DALLA SECONDA RIGA
							
							do{
							
							gotoxy(col,riga);
							printf("%c",219);                      
							col++;
							}while(col!=81);
							
							
							col=1;
							riga=57;
							
							do{
								
							gotoxy(col,riga);
							printf("%c",219);				   
							col++;
							}while(col!=80);
							
						
							
						//	                                                    CROCE (a 6 schermata intera)
							 
							 
							 col=2;                            //colonna orizzontale della croce a 4
							 riga=16;
							 do{
							 	
							 	gotoxy(col,riga);
							 	printf("%c",219);
							 	col++;
							 }while(col!=80);
							 
							 col=2;                            //colonna orizzontale della croce a 4
							 riga=30;
							 do{
							 	
							 	gotoxy(col,riga);
							 	printf("%c",219);
							 	col++;
							 }while(col!=80);
							
							
							 col=2;                            //colonna orizzontale della croce a 4
							 riga=44;
							 do{
							 	
							 	gotoxy(col,riga);
							 	printf("%c",219);
							 	col++;
							 }while(col!=80);
							 
							 col=41;                            //colonna orizzontale della croce a 4
							 riga=56;
							 do{
							 	
							 	gotoxy(col,riga);
							 	printf("%c",219);
							 	riga--;
							 }while(riga!=2);
							 
							 
							 
							 
							 
							 
							 
							 
							
						//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
						gotoxy(2,3); printf("SCHEDINA 1");
						
						col=4;
						riga=7;
						
						for(i=0, ordin=11; i<SCHEDINA; i++)
						{
						
							
								gotoxy(col,riga); 
								if(VET1[i]>=10) 
								{
								printf("%d",VET1[i]);
								} 
								else
								{
								printf(" %d",VET1[i]);
								}
							
							riga=riga+2;
							
							if(riga==13) 
							{
							col=col+4; 
							riga=7;
							}
								
						}
						
						
						/////////////////////////////////////////////////////////////////////////
						
						gotoxy(42,3); printf("SCHEDINA 2");
						
						
						col=44;
						riga=7;
						
						for(i=0; i<SCHEDINA; i++)
						{
							
							gotoxy(col,riga); 
							if(VET2[i]>=10) {printf("%d",VET2[i]);} 
							else
							{
							printf(" %d",VET2[i]);
							}
							riga=riga+2; 
							
							if(riga==13) 
							{
							col=col+4;
							riga=7;
							}
								
						}
						
						////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
						
						gotoxy(2,17); printf("SCHEDINA 3");
						
						col=4;
						riga=21;
						
						for(i=0; i<SCHEDINA; i++)
						{
							
							gotoxy(col,riga); 
							if(VET3[i]>=10) {printf("%d",VET3[i]);} 
							else
							{
							printf(" %d",VET3[i]);
							}
							riga=riga+2;
							
							
							if(riga==27) 
							{
							col=col+4;
							riga=21;
							}
								
						}
						
						
						///////////////////////////////////////////////////////////////////////////////////////
						
						gotoxy(42,17); printf("SCHEDINA 4");
						
						col=44;
						riga=21;
						
						for(i=0; i<SCHEDINA; i++)
						{
							
							gotoxy(col,riga); 
							if(VET4[i]>=10) {printf("%d",VET4[i]);} 
							else
							{
							printf(" %d",VET4[i]);
							}
							riga=riga+2; 
							
							if(riga==27) 
							{
							col=col+4;
							riga=21;
							}
								
						}
						
						
						///////////////////////////////////////////////////////////////////////////////////////////
						
						
						gotoxy(2,31); printf("SCHEDINA 5");
						
						col=4;
						riga=35;
						
						for(i=0; i<SCHEDINA; i++)
						{
							
							gotoxy(col,riga); 
							if(VET5[i]>=10) {printf("%d",VET5[i]);} 
							else
							{
							printf(" %d",VET5[i]);
							}
							riga=riga+2;
							
							if(riga==41) 
							{
							col=col+4; 
							riga=35;
							}
								
						}
						
						
						/////////////////////////////////////////////////
						
						
						
						gotoxy(42,31); printf("SCHEDINA 6");
						
						col=44;
						riga=35;
						
						for(i=0; i<SCHEDINA; i++)
						{
							
							gotoxy(col,riga); 
							if(VET6[i]>=10) {printf("%d",VET6[i]);} 
							else
							{
							printf(" %d",VET6[i]);
							}
							riga=riga+2; 
							
							if(riga==41) 
							{
							col=col+4;
							riga=35;
							}
								
						}
						
						
						////////////////////////////////////////////////////
						gotoxy(2,45); printf("SCHEDINA 7");
						
						col=4;
						riga=49;
						
						for(i=0; i<SCHEDINA; i++)
						{
							
							gotoxy(col,riga); 
							if(VET7[i]>=10) {printf("%d",VET7[i]);} 
							else
							{
							printf(" %d",VET7[i]);
							}
							riga=riga+2;
							
							if(riga==55) 
							{
							col=col+4;
							riga=49;
							}
								
						}
						
						
						/////////////////////////////////////////////////
						
						
						gotoxy(42,45); printf("SCHEDINA 8");
						
						col=44;
						riga=49;
						
						for(i=0; i<SCHEDINA; i++)
						{
							
							gotoxy(col,riga); 
							if(VET8[i]>=10) {printf("%d",VET8[i]);} 
							else
							{
							printf(" %d",VET8[i]);
							}
							riga=riga+2; 
							
							if(riga==55) 
							{
							col=col+4;
							riga=49;
							}
								
						}
						
						do{
						textcolor(12);
						gotoxy(2,1); printf("GIOCATORE %d: scegli il numero della schedina fortunata --> .",Ng+1);
						gotoxy(61,1); scanf("%d", &sceltaSchedina);
						}while(sceltaSchedina<1 || sceltaSchedina>8);
			
						textcolor(7);

				
				switch(sceltaSchedina)
				{
					
					case 1:
					{
						for(i=0, Ii=a; i<SCHEDINA; i++, Ii++)
						{
							SCHEDEGIOC[Ii]=VET1[i];
							printf("\n\n%d",SCHEDEGIOC[Ii]);
							getch();
						}
						
					
					}
					break;
					
					
					
					case 2:
					{
						for(i=0, Ii=a; i<SCHEDINA; i++, Ii++)
						{
							SCHEDEGIOC[Ii]=VET2[i];
							printf("\n\n%d",SCHEDEGIOC[Ii]);
							getch();
						}
					
					}
					break;
					
					
					
					case 3:
					{
						for(i=0, Ii=a; i<SCHEDINA; i++, Ii++)
						{
							SCHEDEGIOC[Ii]=VET3[i];
						}
					}
					break;
					
					
					
					case 4:
					{
						for(i=0, Ii=a; i<SCHEDINA; i++, Ii++)
						{
							SCHEDEGIOC[Ii]=VET4[i];
						}
					}
					break;
					
					
					
					case 5:
					{
						for(i=0, Ii=a; i<SCHEDINA; i++, Ii++)
						{
							SCHEDEGIOC[Ii]=VET5[i];
						}
					}
					break;
					
					
					
					case 6:
					{
						for(i=0, Ii=a; i<SCHEDINA; i++, Ii++)
						{
							SCHEDEGIOC[Ii]=VET6[i];
						}
					}
					break;
					
					
					
					case 7:
					{
						for(i=0, Ii=a; i<SCHEDINA; i++, Ii++)
						{
							SCHEDEGIOC[Ii]=VET7[i];
						}
					}
					break;
					
					
					
					
					case 8:
					{
						for(i=0, Ii=a; i<SCHEDINA; i++, Ii++)
						{
							SCHEDEGIOC[Ii]=VET8[i];
						}
					}
					break;
					
					
				}       //SWITCH CASE 2 DEL PRIMO SWITCH
				
				a=Ii;
					
				}while(sceltaSchedina==0);    //se 0 aggiornà le schede
					
				}        ///for
				system("cls");
	//////////////////////////////////////////////////////QUI!!!!	il problema è qui		FDSSSSSSSSSSSSSSSSSSsadasdewfdsvfdvfdggdfgrggcgc
				for(i=0; i<TOMBOLONE; i++)
				{
					printf("\n\n %d --> %d", i+1,SCHEDEGIOC[i]);
				}
				getch();
				
				switch(NumeroGiocatori)
				{		
						
						case 1:
						{
							system("cls");
							
							for(Ii=0, i=0; i<SCHEDINA; Ii++, i++)
							{
								GIOC1[i]=SCHEDEGIOC[Ii];
							}	
							
							for(i=0; i<SCHEDINA; i++)
							{
								printf("\n\n%d --> %d", i+1, GIOC1[i]);
							}
							getch();
							
						}
						break;
						
						
						case 2:
						{
							system("cls");
							
							for(Ii=0, i=0; i<15; Ii++, i++)
							{
								GIOC1[i]=SCHEDEGIOC[Ii];
								printf("\n\n%d --> %d", i+1, GIOC1[i]);
								getch();
							}
							
							for(Ii=15, i=0; i<15; Ii++, i++)
							{
								GIOC2[i]=SCHEDEGIOC[Ii];
								printf("\n\n%d --> %d", i+1, GIOC2[i]);
								getch();
							}
							
							
						}
						break;
						
						
						case 3:
						{
							system("cls");
							
							for(Ii=0, i=0; i<15; Ii++, i++)
							{
								GIOC1[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=15, i=0; i<15; Ii++, i++)
							{
								GIOC2[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=30, i=0; i<15; Ii++, i++)
							{
								GIOC3[i]=SCHEDEGIOC[Ii];
							}
							
							
							//ORDINAMENTO VETTORI*********************************
							
							
	col=1;
	riga=2;      ///PARTE DALLA SECONDA RIGA
	
	do{
	
	gotoxy(col,riga);
	printf("%c",219); //righe tabellone a 2 giocatori verticale |
	riga++;
	}while(riga!=58);
	
	
	col=80;
	riga=57;
	
	do{
	
	gotoxy(col,riga);
	printf("%c",219); //righe tabellone a 2 giocatori
	riga--;
	}while(riga!=1);
	
	
	col=2;
	riga=2;         ///PARTE DALLA SECONDA RIGA
	
	do{
	
	gotoxy(col,riga);
	printf("%c",219);                      
	col++;
	}while(col!=81);
	
	
	col=1;
	riga=57;
	
	do{
		
	gotoxy(col,riga);
	printf("%c",219);				   
	col++;
	}while(col!=80);
	

	
//	                                                    CROCE (a 4)
	 
	 
	 col=2;                            //colonna orizzontale della croce a 4
	 riga=16;
	 do{
	 	
	 	gotoxy(col,riga);
	 	printf("%c",219);
	 	col++;
	 }while(col!=80);
	 
	 col=2;                            //colonna orizzontale della croce a 4
	 riga=30;
	 do{
	 	
	 	gotoxy(col,riga);
	 	printf("%c",219);
	 	col++;
	 }while(col!=80);
	
	
	 col=2;                            //colonna orizzontale della croce a 4
	 riga=44;
	 do{
	 	
	 	gotoxy(col,riga);
	 	printf("%c",219);
	 	col++;
	 }while(col!=80);
	 
	 
	 for(Scan=1, Ordinato=0; Scan<SCHEDINA && Ordinato==0; Scan++)      //ordinamento vettore GIOC1
						{
							for(i=0, Ordinato=1; i<SCHEDINA-Scan; i++)
							{
								if(VET1[i]>VET1[i+1])
								{
									comodo=VET1[i];
									VET1[i]=VET1[i+1];
									VET1[i+1]=comodo;
									Ordinato=0;
								}
							}
						}
	 
	 
	 gotoxy(2,3); printf("GIOCATORE 1");
	 
	 col=4;
						riga=7;
						
						for(i=0, ordin=11; i<SCHEDINA; i++)
						{
						
							
								gotoxy(col,riga); 
								if(GIOC1[i]>=10) 
								{
								printf("%d",GIOC1[i]);
								} 
								else
								{
								printf(" %d",GIOC1[i]);
								}
							
							riga=riga+2;
							
							if(riga==13) 
							{
							col=col+4; 
							riga=7;
							}
								
						}
	 
							
						}
						break;
						
						
						case 4:
						{
							system("cls");
							
							for(Ii=0, i=0; i<15; Ii++, i++);
							{
								GIOC1[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=15, i=0; i<15; Ii++, i++);
							{
								GIOC2[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=30, i=0; i<15; Ii++, i++);
							{
								GIOC3[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=45, i=0; i<15; Ii++, i++);
							{
								GIOC4[i]=SCHEDEGIOC[Ii];
							}
							
						}
						break;
						
						
						case 5:
						{
							system("cls");
							
							for(Ii=0, i=0; i<15; Ii++, i++);
							{
								GIOC1[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=15, i=0; i<15; Ii++, i++);
							{
								GIOC2[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=30, i=0; i<15; Ii++, i++);
							{
								GIOC3[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=45, i=0; i<15; Ii++, i++);
							{
								GIOC4[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=60, i=0; i<15; Ii++, i++);
							{
								GIOC5[i]=SCHEDEGIOC[Ii];
							}
							
						}
						break;
						
						
						case 6:
						{
							system("cls");
							
							for(Ii=0, i=0; i<15; Ii++, i++);
							{
								GIOC1[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=15, i=0; i<15; Ii++, i++);
							{
								GIOC2[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=30, i=0; i<15; Ii++, i++);
							{
								GIOC3[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=45, i=0; i<15; Ii++, i++);
							{
								GIOC4[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=60, i=0; i<15; Ii++, i++);
							{
								GIOC5[i]=SCHEDEGIOC[Ii];
							}
							
							for(Ii=75, i=0; i<15; Ii++, i++);
							{
								GIOC6[i]=SCHEDEGIOC[Ii];
							}
						getch();
							
						}
						break;
				}
			/*	
				for(Ii=0, i=0; i<15; Ii++, i++);
				{
					GIOC1[i]=SCHEDEGIOC[Ii];
				}
				
				for(Ii=15, i=0; i<15; Ii++, i++);
				{
					GIOC2[i]=SCHEDEGIOC[Ii];
				}
				
				for(Ii=30, i=0; i<15; Ii++, i++);
				{
					GIOC3[i]=SCHEDEGIOC[Ii];
				}
				
				for(Ii=45, i=0; i<15; Ii++, i++);
				{
					GIOC4[i]=SCHEDEGIOC[Ii];
				}
				
				for(Ii=60, i=0; i<15; Ii++, i++);
				{
					GIOC5[i]=SCHEDEGIOC[Ii];
				}
				
				for(Ii=75, i=0; i<15; Ii++, i++);
				{
					GIOC6[i]=SCHEDEGIOC[Ii];
				}
				
				//ora devo stampare questi vettori GIOC
				
					*/
					
				}                 /////CASE 2 DEL PRIMO SWITCH
				break;
	    	
	    	
	    	
	    	
	    	
		}
	


getch();




	gotoxy(1,60); printf("\n\n");
	system("pause");
}






