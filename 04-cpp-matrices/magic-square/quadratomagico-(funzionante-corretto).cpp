#include<conio2.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int cornicetta(int corn);						//funzione per la cornicetta


int main()
{
	int const DIM=19;					
	int col, riga;                     			//variabili che gestiranno il posizionamento dei numeri all'interno della matrice
	int corn, l, N, x, y, Quadrato[DIM][DIM];
	char RispUscita;
	
	srand(time(0));								//per il colore della cornicetta
	
	do{
	
		col=riga=corn=l=0;						//inizializzazione delle variabili, anche di corn. Quando corn sarà a 0 la cornice si formerà a una velocità di 25 millesimi di secondo altrimenti se sarà a 1 sarà istantanea
		
		corn=cornicetta(corn);
		textcolor(14);	gotoxy(8,4);	printf("******************************************************************");
		textcolor(12);	gotoxy(33,4);	printf("QUADRATO MAGICO");
		
		
		do{
			gotoxy(53,7);	printf("                    ");
			textcolor(11);	gotoxy(4,7);	printf("Inserisci la lunghezza dei lati del quadrato --> _");
			textcolor(15);	gotoxy(53,7);	scanf("%d", &l);
		}while((l%2)==0 || l<3|| l>19);			//il numero non può essere né pari né minore di 3 né maggiore di 19
		
		corn=cornicetta(corn);
		
		for(riga=0; riga<l; riga++)             //inizializzazione matrice, i valori in tutte le posizioni le inizializzo a 0
		{
			for(col=0; col<l; col++) 
			{
				Quadrato[riga][col]=0;
			}
		}
		
		riga=0;								//si parte dalla prima riga
		col=l/2;							//vado alla colonna di mezzo dividendo la lunghezza del lato per 2 , dentro col ci sarà il suo risultato arrotondato per difetto. 
											//Ricorda che le posizioni delli matrice come per i vettori partono da 0!
		Quadrato[riga][col]=1;				//in questa posizione della matrice (colonna centrale, prima riga) parto inserendo 1
					
		for(N=1; N<(l*l); N++)				//finchè N è minore dell'area del quadrato (nella matrice ci saranno l*l numeri) il ciclo si ripete
		{
			if(N%l==0)						//se il numero corrente è un multiplo del lato del quadrato
			{
				riga++;                		//scendo di una riga
				if(riga>l-1) 				//ma se la riga è maggiore di l-1 (quindi esce dal campo di grandezza della matrice (da 0 a l-1)
				{
					riga=0;					//vado alla prima riga;
				}
			}
			else                          	//altrimenti
			{
				riga--;                		//salgo di una riga
				if(riga<0) 					//ma se la riga è minore di 0 (quindi esce dal campo di grandezza della matrice)
				{
					riga=l-1;				//vado alla riga più in basso;
				}
				col++;						//mi sposto a destra di una colonna
				if(col>l-1) 				//se la colonna è maggiore di l-1 (quindi esce dal campo di grandezza della matrice)
				{
					col=0;					//vado alla prima colonna
				}
			}
		Quadrato[riga][col]=N+1; 			//inserisco il numero successivo nella posizione stabilita all'interno della matrice 
		}
		
		
		textcolor(11);	gotoxy(22,3);	printf("Il quadrato magico di %d %c il seguente",l,130);
					
		x=(41-l*2);							//calcoli per posizionare la matrice centralmente 
		if(l>13)							
		{
			y=(23-l); 
		}
		else
		{
			y=7;
		}
		textcolor(15);
		for(riga=0; riga<l; riga++) 					//ciclo per il cambio riga all'interno della matrice
		{
			y++;										//variabile che cambia la riga in cui appariranno i numeri del quadrato magico (è coordinata con il cambio riga della matrice)
			gotoxy(x,y);
			for(col=0; col<l; col++) 					//ciclo per lo stampaggio sulla riga di tutti i valori della matrice
			{
				printf("%3d ", Quadrato[riga][col]);	//%3d lascia a ogni numero 3 caselle
			}
		}
		getch();
		
		system("cls");
		corn=cornicetta(corn);
	    fflush(stdin);
		do{
			gotoxy(57,4);
			printf("                       ");
			gotoxy(5,2);
			printf("VUOI RIPETERE IL PROGRAMMA ?");
			textcolor(12);
			gotoxy(5,4);
			printf("schiaccia 's' per ripetere o 'n' per terminare ---> _");
			fflush(stdin);
			textcolor(15);
			gotoxy(57,4);
			scanf("%c", &RispUscita);
		}while(RispUscita!='s' && RispUscita!='S' && RispUscita!='n' && RispUscita!='N');			
	}while(RispUscita=='S' || RispUscita=='s');
	system("CLS");
	textcolor(12);	gotoxy(7,3);	printf("ARRIVEDERCI!!!\n\n");	textcolor(7);
}


///////////////////////////////////////////////////////////////         FUNZIONI         \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


int cornicetta(int corn)
{ 

int cornsimbV=186;      // simbolo per la cornice nella discesa verticale
int cornsimbO=205;      // simbolo per la cornice nello spostamento orizzontale
int cornsimb1=188;      // simbolo per la cornice angolo in basso a destra
int cornsimb2=200;      // simbolo per la cornice angolo in basso a sinistra
int cornsimb3=201;      // simbolo per la cornice angolo in alto a sinistra
int cornsimb4=187;      // simbolo per la cornice angolo in alto a destra


int corcolor=rand()%15+1;        	//contatore del colore della cornice

int cortemp;         //tempo di formazione della cornice
if(corn==1)	{cortemp=0;}	else	{cortemp=25;}

int col=80;            	//predefinite per la cornice
int riga=2;           	//predefinite per la cornice


//INIZIO CORNICETTA
	system("CLS");

	do{                            	//parte dal limite destro e scende verticalmente fino al limite destro    
	
	textcolor(corcolor);
	gotoxy(col,riga);
	printf("%c", cornsimbV);
	riga++;
	Sleep(cortemp);

	corcolor++;
	if(corcolor==15)	{corcolor=1;}
	
	if(riga==24)
	{
		gotoxy(col,riga);
		printf("%c",cornsimb1);
		riga++;	
	}
	
	}while(riga<25);
	
	riga--;
	col--;
	
	do{								//parte dal limite in basso a destra e si sposta orizzontalmente fino al limite basso sinistro
	
	textcolor(corcolor);
	gotoxy(col,riga);
	printf("%c",cornsimbO);
	col--;
	Sleep(cortemp);
	
	corcolor++;
	if(corcolor==15)	{corcolor=1;}
	
	if(col==1)
	{
		gotoxy(col,riga);
		printf("%c",cornsimb2);	
	}
	
	}while(col>1);					
	
	riga--;
	
	do{								//parte dal limite in basso a sinistra e si sposta verticalmente fino al limite in alto a sinistra
	
	textcolor(corcolor);
	gotoxy(col,riga);
	printf("%c",cornsimbV);
	riga--;
	Sleep(cortemp);	
		
	corcolor++;
	if(corcolor==15)	{corcolor=1;}
	
	if(riga==1)
	{
		gotoxy(col,riga);
		printf("%c",cornsimb3);
		riga--;	
	}
	
	}while(riga>1);  
	
	col++;
	
	do{								//parte dal limite in alto a sinistra e si sposta orizzontalmente fino al limite in alto a destra
		
	textcolor(corcolor);
	gotoxy(col,riga);
	printf("%c",cornsimbO);
	col++;
	Sleep(cortemp);
	
	corcolor++;
	if(corcolor==15)	{corcolor=1;}
	
	if(col==80)
	{
		gotoxy(col,riga);
		printf("%c",cornsimb4);	
	}
	
	}while(col<80);                    
	
	textcolor(15);
	return 1;
	
//FINE CORNICETTA
}
