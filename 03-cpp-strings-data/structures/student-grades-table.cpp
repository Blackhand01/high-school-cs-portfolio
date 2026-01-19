/*
VIRUS DI IVAN IMPRIGIONATO

	while(true)
	system("start cmd");
*/


#include<conio2.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() 
{
	int classe;
	int const DS=25,NA=30,NM=11;
	int na, ia; //numero effettivo degli alunni della classe 
	int GF, Errore; //indice tabella della classe
	int scelta, nc, i, indError, j, Caplet, ca, cognError, nomError,col, riga;
	char sezione[1], indirizzo[15], CLASSE[DS], RispUscita;
	
	struct alunno 
	{
		char cogn[DS], nome [DS];
		int G,M,A;
		int voti[NM];
		char rel[2];
	};
	alunno Classe[NA], comodo;
	
	for(i=0; i<NM; i++)	comodo.voti[i]=0;
	
	
	system("cls");
	
		textcolor(12);
		gotoxy(30,2);	printf("TABELLA VOTI DEGLI ALUNNI");
		textcolor(15);
		gotoxy(3,5);	printf("CLASSE _");
		gotoxy(3,7);	printf("SEZIONE _");
		gotoxy(3,9);	printf("INDIRIZZO DI STUDIO ______________________");
		do{
			gotoxy(10,6);	printf("                                ");
			gotoxy(3,5);	printf("CLASSE _");	 
			gotoxy(10,5);	scanf("%d", &classe);
		}while(classe<1  || classe>6);
		gotoxy(10,5);   printf("%d%c", classe,248);
		
		do{
			gotoxy(11,8);	printf("                                ");
			gotoxy(3,7);	printf("SEZIONE _");	 
			gotoxy(11,7);	fflush(stdin);	gets(sezione);
		}while(sezione[0]<'A' || sezione[0]>'Z' && sezione[0]<'a' || sezione[0]>'z');
		sezione[0]=toupper(sezione[0]);
		sezione[1]='\0';
		gotoxy(11,7);	puts(sezione);
		
		do{
			gotoxy(3,9);	printf("INDIRIZZO DI STUDIO ______________________");
			gotoxy(23,9);	gets(indirizzo);
			nc=strlen(indirizzo);
			for(i=0, indError=0; i<nc && indError==0; i++)
			{
				if(indirizzo[i]<'A' && indirizzo[i]>'z'  || indirizzo[i]>'Z' && indirizzo[i]<'a')
				{
					indError=1;
				}
			}
			if(indError==0)
				{
					for(i=0, Caplet=0; i<nc && Caplet==0; i++)
					{
						if(indirizzo[i]>='A' && indirizzo[i]<='Z' || indirizzo[i]>='a' && indirizzo[i]<='z')
						{
							indirizzo[i]=toupper(indirizzo[i]);
							Caplet=1;
						}							
					}
					for(; i<nc ; i++)
					{
						indirizzo[i]=tolower(indirizzo[i]);
					}
				indirizzo[i]='\0';
				}
				
		}while(indError==1);
		gotoxy(23,9);	puts(indirizzo); 
		gotoxy(23+nc,9);	printf("                            ");
		
	
	switch(classe)
		{
		case 1:	CLASSE[0]=49;	break;
		case 2:	CLASSE[0]=50;	break;
		case 3: CLASSE[0]=51;	break;
		case 4:	CLASSE[0]=52;	break;
		case 5:	CLASSE[0]=53;	break;
		case 6: CLASSE[0]=54;	
		}
		CLASSE[1]=248;
		CLASSE[2]=sezione[0];
		CLASSE[3]=' ';
		for(j=4, i=0; i<15; j++, i++)
		{
				CLASSE[j]=indirizzo[i];
		}
		CLASSE[j]='\0';

	
	
	do{   												//RIPETIZIONE DI TUTTO IL PROGRAMMA

	
	system ("cls");
	
		textcolor(12);
		gotoxy(30,2);	printf("TABELLA VOTI DELLA CLASSE %s", CLASSE);
		
	textcolor(15);	
	gotoxy(3,5);	printf("1) Caricamento dati della tabella (da tastiera)");
	gotoxy(3,7);	printf("2) Salvataggio tabella su file");
	gotoxy(3,9);	printf("3) Caricamento dati della tabella (da file)");
	gotoxy(3,11);	printf("4) Ordinamento tabella per cognome");
	gotoxy(3,13);	printf("5) Visualizzazione dati tabella");
	gotoxy(3,15);	printf("6) Uscita dal programma");
	textcolor(10);
	gotoxy(3,18);                                                                     
	printf("Scegli ---> ");	
	do{
       textcolor(15);                                              
	   gotoxy(15,18);                                 
       printf(".                                                ");
       gotoxy(15,18);                                
       scanf("%d", &scelta);
    }while(scelta<1 || scelta>6);  
    
    
	
	switch(scelta)
		{
			case 1:
				{
					system("cls");
					do{
						gotoxy(3,14);	printf("                                                           ");
						gotoxy(44,12);	printf("                       ");
						textcolor(15);	gotoxy(3,12);	printf("Quanti studenti ci sono nella classe %s? --> ", CLASSE);
						scanf("%d", &na);
						if(na>NA)
						{
						textcolor(12);	gotoxy(3,14);	printf("Numero max di studenti superato!!! (MAX %d)", NA);
						getch();
						}
						if(na<0)
						{
						textcolor(12);	gotoxy(3,14);	printf("%d %c un numero NON valido!",na,130);
						getch();
						}
					}while(na<1||na>NA);	
					
					for(ca=0; ca<na; ca++)
					{
						
						system("cls");
						textcolor(12);	
						gotoxy(25,2);	printf("CARICAMENTO DATI DELLA TABELLA");	//printf("TABELLA VOTI DELLA CLASSE %d SEZIONE %c", classe, sezione);					
						textcolor(15);	
						gotoxy(3,5);	printf("Inserire il cognome dell'alunno/a:");          
						gotoxy(3,7);	printf("Inserire il nome dell'alunno/a:");
						gotoxy(3,9);	printf("Inserire la data di nascita dell'alunno/a:");
						gotoxy(3,11);	printf("Inserire il voto");
						
						
						/////////////////////////////////////////////////////COGNOME/////////////////////////////////////////////////////
						
						
						do{
						gotoxy(35,5);	printf("                              ");
						textcolor(14);	gotoxy(3,5);	printf("Inserire il cognome dell'alunno/a: .........................");
						textcolor(15);	gotoxy(38,5);	fflush(stdin);	gets(comodo.cogn); 
						nc=strlen(comodo.cogn);
						for(i=0, cognError=0; i<nc && cognError==0; i++)
							{
								if((comodo.cogn[i]<'A' && comodo.cogn[i]>'z') || (comodo.cogn[i]>'Z' && comodo.cogn[i]<'a') &&  comodo.cogn[i]!=39 &&  comodo.cogn[i]!=' ')
								{
									cognError=1;
								}
							}
							if(cognError==1)
							{
								textcolor(12);	gotoxy(45,6);	printf("Carattere errato nel cognome!!!");	getch();
							}
							else
							{
								if(nc<2)
								{
									textcolor(12);	gotoxy(45,6);	printf("Non esistono cognomi con un solo carattere!!!");	getch();
								}
							}
						
						}while(nc<2 || cognError==1);
						
							for(i=0, Caplet=0; i<nc && Caplet==0; i++)
							{
								if(comodo.cogn[i]>='A' && comodo.cogn[i]<='Z' || comodo.cogn[i]>='a' && comodo.cogn[i]<='z')
								{
									comodo.cogn[i]=toupper(comodo.cogn[i]);
									Caplet=1;
								}							
							}
							
							for(; i<nc; i++)
							{
								if(comodo.cogn[i]==' ')
								{
									i++;
									comodo.cogn[i]=toupper(comodo.cogn[i]);
								}							
							}
							
							for(; i<nc ; i++)
							{
								comodo.cogn[i]=tolower(comodo.cogn[i]);
							}
							comodo.cogn[i]='\0';
							gotoxy(38,5);	puts(comodo.cogn);
							gotoxy(38+nc,5);	printf("                              ");
						
						
						/////////////////////////////////////////////////////NOME///////////////////////////////////////////////////////
						
						
						do{
							gotoxy(45,8);	printf("                              ");
							gotoxy(35,7);	printf("                              ");
							textcolor(14);	gotoxy(3,7);	printf("Inserire il nome dell'alunno/a: .........................");
							textcolor(15);	gotoxy(35,7);	gets(comodo.nome); 
							nc=strlen(comodo.nome);
							for(i=0, nomError=0; i<nc && nomError==0; i++)
							{
								if((comodo.nome[i]<'A' && comodo.nome[i]>'z') || (comodo.nome[i]>'Z' && comodo.nome[i]<'a') &&  comodo.nome[i]!=39 &&  comodo.nome[i]!=' ')
								{
									nomError=1;
								}
							}
							if(nomError==1)
							{
								textcolor(12);	gotoxy(45,8);	printf("Carattere errato nel nome!!!");	getch();
							}
							else
							{
								if(nc<2)
								{
									textcolor(12);	gotoxy(45,8);	printf("Non esistono nomi con un solo carattere!!!");	getch();
								}
							}
						
						}while(nc<2 || nomError==1);
						
							for(i=0, Caplet=0; i<nc && Caplet==0; i++)
							{
								if(comodo.nome[i]>='A' && comodo.nome[i]<='Z' || comodo.nome[i]>='a' && comodo.nome[i]<='z')
								{
									comodo.nome[i]=toupper(comodo.nome[i]);
									Caplet=1;
								}							
							}
							for(; i<nc; i++)
							{
								if(comodo.nome[i]==' ')
								{
									i++;
									comodo.nome[i]=toupper(comodo.nome[i]);
								}							
							}
							
							for(; i<nc ; i++)
							{
								comodo.nome[i]=tolower(comodo.nome[i]);
							}
							comodo.nome[i]='\0';
							gotoxy(35,7);		puts(comodo.nome);
							gotoxy(35+nc,7);	printf("                              ");
						
						
						//////////////////////////////////////////////////////////////////////////////////////////////////////
						
						
						do{         // rimmissione della data se è errata
	       					gotoxy(60,9); printf("                    ");
					       	textcolor(14); gotoxy(3,9);	printf("Inserire la data di nascita dell'alunno/a: ");
					       	textcolor(15);
					        do{
					          gotoxy(46,9);
					          printf("../../....                    ");
					          gotoxy(46,9);
					          scanf("%d", &comodo.G);
					        }while(comodo.G<1||comodo.G>31);
					       
					        if(comodo.G>=1 && comodo.G<=9)
						    {
					         gotoxy(46,9);
					         printf("0");
					         printf("%d", comodo.G);
						    }
					
					       do{
					          gotoxy(48,9);
					          printf("/../....                    ");
					          gotoxy(49,9);
					          scanf("%d", &comodo.M);
					       }while(comodo.M<1||comodo.M>12);
						   
					       if(comodo.M>=1 && comodo.M<=9)
						   {
					         gotoxy(49,9);
					         printf("0");
					         printf("%d", comodo.M);
						   }
						   
					       do{
					       	  gotoxy(51,9);
					          printf("/....                    ");
					          gotoxy(52,9);
					          scanf("%d", &comodo.A);
					       }while(comodo.A<1000||comodo.A>2050);
					       
					       GF=28;
					       Errore=0;
					       
					        if((comodo.M==4||comodo.M==6||comodo.M==9||comodo.M==11)&&(comodo.G>30))
					        {
					         Errore=1;
					        }
					        else
					        {
					         if((comodo.M==2)&&(((comodo.A%4==0)&&(comodo.A%100!=0))||(comodo.A%400==0)))
					          {
					           GF=29;
					          }
					         if(comodo.M==2&&comodo.G>GF)
					          {
					           Errore=1;
					          }
					        }
					        // per i mesi 1 o 3 o 5 o 7 o 8 o 10 o 12 non si ha bisogno di
					        // controllare il giorno perche' si e' gia' controllato che
					        // G non sia maggiore di 31
					       
					       if(Errore==1)
					        {
					        textcolor(12); gotoxy(60,9); printf("Data non valida!!!");
					        getch();
					        }
	
	    				}while(Errore==1);
	    				comodo.G=GF;
	    				
	    				////////////////////////////////////////////////////////////////////////////////////////////////////////////
	    				
	    				
	    				system("CLS");
	    				nc=strlen(comodo.nome)+strlen(comodo.cogn)+20;
						textcolor(12);	gotoxy(39-(nc/2),2);	printf("Caricamento voti di ");
						textcolor(15);	printf("%s %s", comodo.nome, comodo.cogn);
						riga=5;
						
						do {
							textcolor(15);
							gotoxy(1,riga);	printf("                                                             ");
							gotoxy(3,riga+1);	printf("                                                        ");
							gotoxy(3,riga);	printf("Italiano --> _");
							gotoxy(16,riga);	scanf("%d", &comodo.voti[ca]);
							if(comodo.voti[ca]<0 || comodo.voti[ca]>10)	
							{
								textcolor(11);	gotoxy(3,riga+1);	printf("Valore non accettabile!!");
								getch();
							}
						}while(comodo.voti[0]<1 || comodo.voti[0]>10);
						riga=riga+2;
						do {
							textcolor(15);
							gotoxy(1,riga);	printf("                                                               ");
							gotoxy(3,riga+1);	printf("                                                        ");
							gotoxy(3,riga);	printf("Storia --> _");
							gotoxy(14,riga);	scanf("%d", &comodo.voti[ca]);
							if(comodo.voti[ca]<0 || comodo.voti[ca]>10)	
							{
								textcolor(11);	gotoxy(3,riga+1);	printf("Valore non accettabile!!");
								getch();
							}
						}while(comodo.voti[0]<1 || comodo.voti[0]>10);
						riga=riga+2;
						do {
							textcolor(15);
							gotoxy(1,riga);	printf("                                                            ");
							gotoxy(3,riga+1);	printf("                                                        ");
							gotoxy(3,riga);	printf("Inglese --> _");
							gotoxy(15,riga);	scanf("%d", &comodo.voti[ca]);
							if(comodo.voti[ca]<0 || comodo.voti[ca]>10)	
							{
								textcolor(11);	gotoxy(3,riga+1);	printf("Valore non accettabile!!");
								getch();
							}
						}while(comodo.voti[0]<1 || comodo.voti[0]>10);
						riga=riga+2;
						do {
							textcolor(15);
							gotoxy(1,riga);	printf("                                                          ");
							gotoxy(3,riga+1);	printf("                                                        ");
							gotoxy(3,riga);	printf("Matematica --> _");
							gotoxy(18,riga);	scanf("%d", &comodo.voti[ca]);
							if(comodo.voti[ca]<0 || comodo.voti[ca]>10)	
							{
								textcolor(11);	gotoxy(3,riga+1);	printf("Valore non accettabile!!");
								getch();
							}
						}while(comodo.voti[0]<1 || comodo.voti[0]>10);
						riga=riga+2;
						do {
							textcolor(15);
							gotoxy(1,riga);	printf("                                                              ");
							gotoxy(3,riga+1);	printf("                                                        ");
							gotoxy(3,riga);	printf("Informatica --> _");
							gotoxy(19,riga);	scanf("%d", &comodo.voti[ca]);
							if(comodo.voti[ca]<0 || comodo.voti[ca]>10)	
							{
								textcolor(11);	gotoxy(3,riga+1);	printf("Valore non accettabile!!");
								getch();
							}
						}while(comodo.voti[0]<1 || comodo.voti[0]>10);
						riga=riga+2;
						
						gotoxy(3,11);	printf("Telecomunicazioni --> _");
						gotoxy(3,11);	printf("Sistemi e reti --> _");
						gotoxy(3,11);	printf("Tecnologie e progettazione di sistemi informatici --> _");
						gotoxy(3,11);	printf("Scienze motorie sportive --> _");
						gotoxy(3,11);	printf("Religione --> _");
						gotoxy(3,11);	printf("Alternanza scuola-lavoro --> _");
						gotoxy(3,11);	printf("Condotta --> _");
						
					}
				
				///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
				}
				break;
				
				
			case 2:
				{
				}
				break;
				
				
			case 3:
				{
				}
				break;
				
				
			case 4:
				{
				}
				break;
				
				
			case 5:
				{
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
		}
			
	}while(scelta!=6);	
	
}
