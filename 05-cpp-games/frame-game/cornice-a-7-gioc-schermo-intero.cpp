//Cornicetta a 7 giocatori schermo grande

#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<math.h>
#include<time.h>

int main(){


	int col, riga;
	
////////////////////////////////////////////CORNICE A 6////////////////////////////////////////////////////////////////    
    system("cls");
    
/////////////////////riga verticale centrale dello schermo
    col=41;
    riga=1;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	riga++;
	}while(riga!=43);

/////////////////////riga verticale a sinistra dello schermo	
	col=1;
    riga=1;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	riga++;
	}while(riga!=56);
	
/////////////////////riga verticale a destra dello schermo	
	col=81;
    riga=1;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	riga++;
	}while(riga!=56);
	
/////////////////////riga orizzontale in basso dello schermo
	col=1;
    riga=1;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	col++;
	}while(col!=81);
/////////////////////riga orizzontale in basso dello schermo
	col=1;
    riga=55;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	col++;
	}while(col!=81);
	
/////////////////////riga orizzontale in alto dello schermo
	col=1;
    riga=15;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	col++;
	}while(col!=81);
	
/////////////////////riga orizzontale in Mdcentroalto dello schermo
	col=1;
    riga=29;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	col++;
	}while(col!=81);
	/////////////////////riga orizzontale in Mdcentrobasso dello schermo
	col=1;
    riga=43;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	col++;
	}while(col!=81);
	
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	getch();    
    
    
}
