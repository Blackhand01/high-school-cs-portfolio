//Tombola Bisi-mode

#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<math.h>
#include<time.h>

int main()
{
	
	int const SCHEDINA=15, TOMBOLONE=90;
	
	int VET1[SCHEDINA], VET2[SCHEDINA],VET3[SCHEDINA], VET4[SCHEDINA], VET5[SCHEDINA], VET6[SCHEDINA]; // VET2[SCHEDINA],
	int col, riga, gestsched, i, indice1, indice2, indice3, indice4, indice5, indice6,gestnum, gestnvcol, c, contsom, trovato, numerorandom;
	
//	float
	
//	char rispUscita, scelta ,risp
	
	
	
	system("cls");
	
	
	riga=2;
	
	gotoxy(15,riga); 
	printf("TOMBOLA MAGICA");
	
	
/*	riga=riga+2;
	gotoxy(1,riga); 	
	printf("*************Men%c del gioco***************",151);
	
	riga=riga+2;
	printf(" Quanti giocatori siete?");
	
	
	do{
		
	}while(scelta)
*/

srand(time(0));                        //AVVIAMENTO DEL RANDOM

for(i=0; i<15; i++) {VET1[i]=0;}

	
for(i=0, gestnum=1; gestnum<90; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
{
	c=0;
	numerorandom=rand()%2+2;
	gestnvcol=rand()%numerorandom+1;
	printf("\n\nNV%d",gestnvcol);
	
	do{
	VET1[i]=rand()%10+gestnum;
//	Sleep(1000);
	printf("\n\ncampo%d",gestnum+10); 
	printf("\n\nvettorevalore%d",VET1[i]);
	
	for(indice1=0, trovato=0; indice1<15 && trovato==0; indice1++)
	{
		if(i==indice1){indice1++;	}
		if(VET1[i]==VET1[indice1]) {trovato=1;}
	}
	printf("\n\n%d",trovato);
	if(trovato==0) 
	{i++; c++;}
	printf("\n\n%d",c);
	getch();
	}while(c<gestnvcol);
	
	
}


	if(i!=16) { VET1[i]=rand()%20+71; i++;} 
	//i--;  //i sarà 15
	for(i=0; i<15; i++)
	{
	printf("\n\n%d%c posizione --> %d",i+1,267,VET1[i]);
	}
	
	getch();
	
	
	
	
	
	
	
for(i=0; i<15; i++) {VET2[i]=0;}

	
for(i=0, gestnum=1; gestnum<90; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
{
	c=0;
	numerorandom=rand()%2+2;
	gestnvcol=rand()%numerorandom+1;
	printf("\n\nNV%d",gestnvcol);
	
	do{
	VET2[i]=rand()%10+gestnum;
//	Sleep(1000);
	printf("\n\ncampo%d",gestnum+10); 
	printf("\n\nvettorevalore%d",VET2[i]);
	
	for(indice1=0, trovato=0; indice1<15 && trovato==0; indice1++)
	{
		if(i==indice1){indice1++;	}
		if(VET2[i]==VET2[indice1]) {trovato=1;}
	}
	printf("\n\n%d",trovato);
	if(trovato==0) 
	{i++; c++;}
	printf("\n\n%d",c);
	getch();
	}while(c<gestnvcol);
	
	
}


	if(i!=16) { VET2[i]=rand()%20+71; i++;} 
	//i--;  //i sarà 15
	for(i=0; i<15; i++)
	{
	printf("\n\n%d%c posizione --> %d",i+1,267,VET2[i]);
	}
	
	getch();
	
	
	
	
	
	
	
	
for(i=0; i<15; i++) {VET3[i]=0;}

	
for(i=0, gestnum=1; gestnum<90; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
{
	c=0;
	numerorandom=rand()%2+2;
	gestnvcol=rand()%numerorandom+1;
	printf("\n\nNV%d",gestnvcol);
	
	do{
	VET3[i]=rand()%10+gestnum;
//	Sleep(1000);
	printf("\n\ncampo%d",gestnum+10); 
	printf("\n\nvettorevalore%d",VET3[i]);
	
	for(indice1=0, trovato=0; indice1<15 && trovato==0; indice1++)
	{
		if(i==indice1){indice1++;	}
		if(VET3[i]==VET3[indice1]) {trovato=1;}
	}
	printf("\n\n%d",trovato);
	if(trovato==0) 
	{i++; c++;}
	printf("\n\n%d",c);
	getch();
	}while(c<gestnvcol);
	
	
}


	if(i!=16) { VET3[i]=rand()%20+71; i++;} 
	//i--;  //i sarà 15
	for(i=0; i<15; i++)
	{
	printf("\n\n%d%c posizione --> %d",i+1,267,VET3[i]);
	}
	
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	for(i=0; i<15; i++) {VET4[i]=0;}

	
for(i=0, gestnum=1; gestnum<90; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
{
	c=0;
	numerorandom=rand()%2+2;
	gestnvcol=rand()%numerorandom+1;
	printf("\n\nNV%d",gestnvcol);
	
	do{
	VET4[i]=rand()%10+gestnum;
//	Sleep(1000);
	printf("\n\ncampo%d",gestnum+10); 
	printf("\n\nvettorevalore%d",VET4[i]);
	
	for(indice1=0, trovato=0; indice1<15 && trovato==0; indice1++)
	{
		if(i==indice1){indice1++;	}
		if(VET4[i]==VET4[indice1]) {trovato=1;}
	}
	printf("\n\n%d",trovato);
	if(trovato==0) 
	{i++; c++;}
	printf("\n\n%d",c);
	getch();
	}while(c<gestnvcol);
	
	
}


	if(i!=16) { VET4[i]=rand()%20+71; i++;} 
	//i--;  //i sarà 15
	for(i=0; i<15; i++)
	{
	printf("\n\n%d%c posizione --> %d",i+1,267,VET4[i]);
	}
	
	getch();
	
	
	
	
	
	
	
	
		for(i=0; i<15; i++) {VET5[i]=0;}

	
for(i=0, gestnum=1; gestnum<90; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
{
	c=0;
	numerorandom=rand()%2+2;
	gestnvcol=rand()%numerorandom+1;
	printf("\n\nNV%d",gestnvcol);
	
	do{
	VET5[i]=rand()%10+gestnum;
//	Sleep(1000);
	printf("\n\ncampo%d",gestnum+10); 
	printf("\n\nvettorevalore%d",VET5[i]);
	
	for(indice1=0, trovato=0; indice1<15 && trovato==0; indice1++)
	{
		if(i==indice1){indice1++;	}
		if(VET5[i]==VET5[indice1]) {trovato=1;}
	}
	printf("\n\n%d",trovato);
	if(trovato==0) 
	{i++; c++;}
	printf("\n\n%d",c);
	getch();
	}while(c<gestnvcol);
	
	
}


	if(i!=16) { VET5[i]=rand()%20+71; i++;} 
	//i--;  //i sarà 15
	for(i=0; i<15; i++)
	{
	printf("\n\n%d%c posizione --> %d",i+1,267,VET5[i]);
	}
	
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		for(i=0; i<15; i++) {VET6[i]=0;}

	
for(i=0, gestnum=1; gestnum<90; gestnum=gestnum+10)  // ,contsom=1 ,contsom=contsom+10
{
	c=0;
	numerorandom=rand()%2+2;
	gestnvcol=rand()%numerorandom+1;
	printf("\n\nNV%d",gestnvcol);
	
	do{
	VET6[i]=rand()%10+gestnum;
//	Sleep(1000);
	printf("\n\ncampo%d",gestnum+10); 
	printf("\n\nvettorevalore%d",VET6[i]);
	
	for(indice1=0, trovato=0; indice1<15 && trovato==0; indice1++)
	{
		if(i==indice1){indice1++;	}
		if(VET6[i]==VET6[indice1]) {trovato=1;}
	}
	printf("\n\n%d",trovato);
	if(trovato==0) 
	{i++; c++;}
	printf("\n\n%d",c);
	getch();
	}while(c<gestnvcol);
	
	
}


	if(i!=16) { VET6[i]=rand()%20+71; i++;} 
	//i--;  //i sarà 15
	for(i=0; i<15; i++)
	{
	printf("\n\n%d%c posizione --> %d",i+1,267,VET6[i]);
	}
	
	getch();
	
}
