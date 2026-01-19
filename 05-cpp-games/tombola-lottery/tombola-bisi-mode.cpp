//PROGRAMMA 6 SCHEDINE

#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<math.h>
#include<time.h>

int main()
{
	
	int const SCHEDINA=15, TOMBOLONE=90;
	
	int VET1[SCHEDINA], VET2[SCHEDINA], VET3[SCHEDINA], VET4[SCHEDINA], VET5[SCHEDINA], VET6[SCHEDINA], VET7[SCHEDINA], VET8[SCHEDINA];  // VET2[SCHEDINA],
	int col, riga, gestsched, i, indice1, indice2, indice3, indice4, indice5, indice6,gestnum, gestnvcol, c, contsom, trovato, numerorandom, Ordinato, comodo, Scan, ordin;
	
//	float
	
    char rispUscita, scelta ,risp;
	
	
	srand(time(0));                        //AVVIAMENTO DEL RANDOM
	
//	do{

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

getch();


	gotoxy(1,60); printf("\n\n");
	system("pause");
}

