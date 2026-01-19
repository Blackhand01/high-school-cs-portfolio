#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio2.h>
#include<string.h>

int main()
{
	
	int const DIM=200; 
	
	int i, nc, scelta, na, ne, ni, no, nu, cp, ip, fp, riga, nalf, nvoc, ccons, cnum, calf, cpunt, npunteg;
	
	char frase[DIM], Frase[DIM], risp2;
					                                                 // INIZIO Ripetizione di tutto il programma	                           
                                                                               //INIZIO Menù 
	
	scelta=nc=i=0;
	
	do{
	
		system("CLS");           //pulizia di tutto il programma 
		
		
		gotoxy(1,1); 
		textcolor(12);                                                                     
		printf("--- Men%c gestione della stringa  ------------------------------------", 163);  
		
		gotoxy(3,4); 
		textcolor(11);                                                           
		printf("1) Caricamento della stringa ");  
		gotoxy(3,6); 
		textcolor(11); 
		printf("2) Visualizzazione della stringa"); 
		gotoxy(3,8);
		textcolor(11); 
		printf("3) Visualizzazione della distribuzione delle vocali");
		gotoxy(3,10);     
		textcolor(11);                                               
		printf("4) Visualizzazione del numero di consonanti, di numeri e di punteggiatura");
		gotoxy(3,12);   
		textcolor(11);                                                 
		printf("5) Visualizzazione del numero di parole contenute");
		gotoxy(3,14);  
		textcolor(11);                                                  
		printf("6) Esci");
		
		textcolor(15);
		gotoxy(3,16);                                                                     
		printf("Scegli ---> ");
		
		do{                                               //ripetizione di tutto il programma 
		   gotoxy(15,16);                                 // la colonna è uguale a 15 e la riga è uguale a 16
	       printf(".                                                ");
	       fflush(stdin);
	       gotoxy(15,16);                                 // la colonna è uguale a 15 e la riga è uguale a 16
	       scanf("%d", &scelta);
	    }while(scelta<1 || scelta>5); 
	    
	    
	    
	    switch(scelta)
	    {
	    	case 1:
	    		{
	    			system("CLS");
	    			
	    			do{
	    				gotoxy(3,2);
	    				printf("Inserisci la frase (max %d crt) ", DIM);
	    				gotoxy(3,5);
						gets(frase);
					}while(frase[i]<1 || frase[i]>DIM);
					
					nc=strlen(frase);
					
					
					for(i=0; i<nc; i++)
					{
						Frase[i]=toupper(frase[i]);
						
					}
					Frase[i]='\0';
					
					gotoxy(60,20);
					printf("Usati: %d/%d",nc,DIM);
					
					// puts(frase);
					// printf("\n\n %d", nc);
	    			
	    			getch();
				}
				break;
				
				
				case 2:
					{
						system("CLS");
						gotoxy(20,2);
						printf("Visualizzazione stringhe");
						printf("\n\n\n  Frase minuscola");
						riga=7;
						gotoxy(3,riga);
						puts(frase);
						riga=riga+3;
						gotoxy(3,riga);
						printf("Frase maiuscola");
						riga=riga+2;
						gotoxy(3,riga);
						puts(Frase);
						
						getch();
					
					}
					break;
					
					
				case 3:                                   // CONTATORE DI VOCALI
					{
						system("CLS");
						
						gotoxy(25,1); printf("Contatore di vocali");
						
						for(na=ne=ni=no=nu=i=0; i<nc; i++)
						{
							switch(Frase[i])
							{
								case 'A':
									{
										na++;
									}
									break;
								
								case 'E':
									{
										ne++;
									}
									break;
									
								case 'I':
									{
										ni++;
									}
									break;
									
								case 'O':
									{
										no++;
									}
									break;
									
								case 'U':
									{
										nu++;
									}
									
											
									
							}  // chisura dello switch che conta le vocali
						
						}  // chisura del for che conta le vocali
						
						
						nvoc=na+ne+ni+no+nu;
						
						gotoxy(3,4); 
					
						if(na==0)
						{
							printf("Non ci sono 'A' nella stringa");
						}
						else
						{
							if(na==1)
							{
								printf("C'%c una sola 'A' nella stringa",130);
							}
							else
							{
									printf("Le 'A' nella stringa sono %d", na);
							}
						}
						
						
						gotoxy(3,6); 
						
						if(ne==0)
						{
							printf("Non ci sono 'E' nella stringa");
						}
						else
						{
							if(ne==1)
							{
								printf("C'%c una sola 'E' nella stringa",130);
							}
							else
							{
									printf("Le 'E' nella stringa sono %d", ne);
							}
						}
						
						gotoxy(3,8); 
						
						if(ni==0)
						{
							printf("Non ci sono 'I' nella stringa");
						}
						else
						{
							if(ni==1)
							{
								printf("C'%c una sola 'I' nella stringa",130);
							}
							else
							{
									printf("Le 'I' nella stringa sono %d", ni);
							}
						}
						
						gotoxy(3,10); 
						
						if(no==0)
						{
							printf("Non ci sono 'O' nella stringa");
						}
						else
						{
							if(no==1)
							{
								printf("C'%c una sola 'O' nella stringa",130);
							}
							else
							{
									printf("Le 'O' nella stringa sono %d", no);
							}
						}
						
						gotoxy(3,12); 
						
						if(nu==0)
						{
							printf("Non ci sono 'U' nella stringa");
						}
						else
						{
							if(nu==1)
							{
								printf("C'%c una sola 'U' nella stringa",130);
							}
							else
							{
									printf("Le 'U' nella stringa sono %d", nu);
							}
						}
				
						gotoxy(3,15); 
						printf("Le vocali in tutto sono %d", nvoc);
						
						getch();
						
					}
					break;
				
				
				case 4:
					{
						cnum=0;
						
						system("CLS");
						for(i=ccons=calf=0; i<nc; i++)
						{
							
							if(Frase[i] >= 65 && Frase[i] <= 90)
							{
								calf++;
							}
							else
							{
								if(Frase[i] >= 48 && Frase[i] <= 57)
								{
									cnum++;
								}
								else
								{
									if(Frase[i] == 33 || Frase[i] == 34  || Frase[i] == 39  || Frase[i] == 40  || Frase[i] == 41  || Frase[i] == 44  || Frase[i] == 46  || Frase[i] == 47  || Frase[i] == 58  || Frase[i] == 59  || Frase[i] == 60  || Frase[i] == 62  || Frase[i] == 63  || Frase[i] == 91  || Frase[i] == 92  || Frase[i] == 93  || Frase[i] == 94  || Frase[i] == 96  || Frase[i] == 247)
									{
										cpunt++;
									}
								}
								
							}
						}
					    
					    ccons=calf-nvoc;
					    
					    gotoxy(3,3);
					    if(ccons==0) {printf("Non ci sono consonanti nella frase"); }
					    else
						{
							if(ccons==1) {printf("C'%c' una sola consonante nella frase",130); }
							else
							{
								printf("Ci sono %d consonanti nella frase", ccons); 
							}
						}
						
						gotoxy(3,5);
					    if(cnum==0) {printf("Non ci sono numeri nella frase"); }
					    else
						{
							if(cnum==1) {printf("C'%c' un solo numero nella frase",130); }
							else
							{
								printf("Ci sono %d numeri nella frase", cnum); 
							}
						}
						
						gotoxy(3,7);
					    if(cpunt==0) {printf("Non ci sono segni di punteggiatura nella frase"); }
					    else
						{
							if(cpunt==1) {printf("C'%c' un solo segno di punteggiatura nella frase",130); }
							else
							{
								printf("Ci sono %d segni di punteggiatura nella frase", cpunt); 
							}
						}
						
						getch();
					    
					    
					}
					break;
					
				case 5:
					{
						system("CLS");
						
						cp=i=cp=ip=0;
						do{
							while(i<nc && ip==0)
							{
								if(!(frase[i]>='A' && frase [i]<='Z') || (frase[i]>='a' && frase [i]<='z'))
								{
									i++;
								}
								else
								{
									ip=1;fp=0;
								}
							}
							while (i<nc && fp==0)
							{
								if ((frase[i]>='A' && frase [i]<='Z') || (frase[i]>='a' && frase [i]<='z'))
								{
									i++;
								}
								else 
								{
									ip=0;fp=1;cp++;
								}
							}
						}while (i<nc);
						if (ip==1)
						{
							cp++;
						}
						
						printf("Le parole nella frase sono %d", cp);
						
						getch();
						
					}
					break;
					
					
					case 6:
						{
							
						system("cls");
			            
						fflush(stdin);
					    do{
					    gotoxy(60,3);
					    printf("                               ");
					    
					    textcolor(12);
						gotoxy(1,1);
						printf("SEI SICURO DI VOLER TERMINARE IL PROGRAMMA ?");
						gotoxy(1,3);
						printf("schiaccia 's' per terminare o 'n' per tornare al men%c ---> ",163);
						fflush(stdin);
						textcolor(7);
						gotoxy(60,3);
						scanf("%c", &risp2);
						
						}while(risp2!='s' && risp2!='S' && risp2!='n' && risp2!='N');
						
					
			      		if(risp2 == 'n' ||  risp2 == 'N') { scelta=0; }
						}
					
	
		}
	}while(scelta!=6);
}
