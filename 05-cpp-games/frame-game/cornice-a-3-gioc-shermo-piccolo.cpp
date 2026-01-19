//Cornicetta a 3 giocatori schermo piccolo

#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
#include<math.h>
#include<time.h>

int main(){


	int col, riga;
	
////////////////////////////////////////////CORNICE A 3////////////////////////////////////////////////////////////////    
    system("cls");
    
/////////////////////riga verticale centrale dello schermo
    col=41;
    riga=1;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	riga++;
	}while(riga!=14);

/////////////////////riga verticale a sinistra dello schermo	
	col=1;
    riga=1;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	riga++;
	}while(riga!=26);
	
/////////////////////riga verticale a destra dello schermo	
	col=80;
    riga=1;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	riga++;
	}while(riga!=26);
	
/////////////////////riga orizzontale in basso dello schermo
	col=1;
    riga=1;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	col++;
	}while(col!=81);
/////////////////////riga orizzontale in alto dello schermo
	col=1;
    riga=25;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	col++;
	}while(col!=81);
	
/////////////////////riga orizzontale in centro dello schermo
	col=1;
    riga=13;
    do{
    	gotoxy(col, riga);
    	printf("%c",219);
    	col++;
	}while(col!=81);
	
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	getch();    
    
    
}
