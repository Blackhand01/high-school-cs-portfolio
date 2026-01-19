//Tombola Bisi-mode

#include<stdio.h>
#include<stdlib.h>
#include<conio2.h>
#include<windows.h>
#include<math.h>

int main()
{
	
	int const DIM=90;
	
	int col, riga;
	
	

	
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
gotoxy(2,3); printf("CIAO1");

gotoxy(42,3); printf("CIAO2");

gotoxy(2,17); printf("CIAO3");

gotoxy(42,17); printf("CIAO4");

gotoxy(2,31); printf("CIAO5");

gotoxy(42,31); printf("CIAO6");

gotoxy(2,45); printf("CIAO7");

gotoxy(42,45); printf("CIAO8");




	
	getch();
}
	
	
	
	
	
