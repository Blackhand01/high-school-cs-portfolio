#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
int main() {
	int const n=10, b1=187, b2=200, b3=205, b4=186;
	int V[n], i, comodo, s, scelta, cont, tc, riga, colonna;
	char risp;
	SetConsoleTitle("Ordinamento vettori ~ Powered by Montanaro&Paone");
	cont=0;
	tc=0;
	i=0;
	do {
		if(tc==0) {
			do {
				system ("cls");
				if(cont==0) {
					cont=cont+1;
					riga=2;
					colonna=2;
					system("cls");
					textcolor(9);
					gotoxy(80,1);
					printf("%c", b1);
					gotoxy(80,25);
					printf("%c", b1+1);
					gotoxy(1,25);
					printf("%c", b2);
					gotoxy(1,1);
					printf("%c", b2+1);
					do {
						delay(10);
						gotoxy(colonna,1);
						printf("%c", b3);
						gotoxy(colonna,25);
						printf("%c", b3);
						colonna=colonna+1;
					} while(colonna!=80);
					do {
						delay(10);
						gotoxy(1,riga);
						printf("%c", b4);
						gotoxy(80,riga);
						printf("%c", b4);
						riga=riga+1;
					} while(riga!=25);
					scelta=0;
					textcolor(15);
					gotoxy(38,10);
					printf("Menu'");
					gotoxy(25,12);
					printf("1. Carica vettore");
					gotoxy(25,13);
					textcolor(8);
					printf("2. Visualizzazione vettore");
					gotoxy(25,14);
					printf("3. Ordinamento vettore");
					gotoxy(25,15);
					printf("4. Ricerca dicotonica");
					gotoxy(25,16);
					printf("5. Ricerca sequenza");
					textcolor(15);
					gotoxy(25,17);
					printf("6. Esci");
					gotoxy(35,19);
					printf("Scegli _");
					gotoxy(42,19);
					fflush(stdin);
					scanf("%d", &scelta);
				} else {
					riga=2;
					colonna=2;
					system("cls");
					textcolor(9);
					gotoxy(80,1);
					printf("%c", b1);
					gotoxy(80,25);
					printf("%c", b1+1);
					gotoxy(1,25);
					printf("%c", b2);
					gotoxy(1,1);
					printf("%c", b2+1);
					do {
						gotoxy(colonna,1);
						printf("%c", b3);
						gotoxy(colonna,25);
						printf("%c", b3);
						colonna=colonna+1;
					} while(colonna!=80);
					do {
						gotoxy(1,riga);
						printf("%c", b4);
						gotoxy(80,riga);
						printf("%c", b4);
						riga=riga+1;
					} while(riga!=25);
					scelta=0;
					textcolor(15);
					gotoxy(38,10);
					printf("Menu'");
					gotoxy(25,12);
					printf("1. Carica vettore");
					textcolor(8);
					gotoxy(25,13);
					printf("2. Visualizzazione vettore");
					gotoxy(25,14);
					printf("3. Ordinamento vettore");
					gotoxy(25,15);
					printf("4. Ricerca dicotonica");
					gotoxy(25,16);
					printf("5. Ricerca sequenza");
					textcolor(15);
					gotoxy(25,17);
					printf("6. Esci");
					gotoxy(35,19);
					printf("Scegli _");
					gotoxy(42,19);
					fflush(stdin);
					scanf("%d", &scelta);
				}
			} while(scelta!=1 && scelta!=6);
		} else {
			do {
				riga=2;
				colonna=2;
				system("cls");
				textcolor(9);
				gotoxy(80,1);
				printf("%c", b1);
				gotoxy(80,25);
				printf("%c", b1+1);
				gotoxy(1,25);
				printf("%c", b2);
				gotoxy(1,1);
				printf("%c", b2+1);
				do {
					gotoxy(colonna,1);
					printf("%c", b3);
					gotoxy(colonna,25);
					printf("%c", b3);
					colonna=colonna+1;
				} while(colonna!=80);
				do {
					gotoxy(1,riga);
					printf("%c", b4);
					gotoxy(80,riga);
					printf("%c", b4);
					riga=riga+1;
				} while(riga!=25);
				scelta=0;
				textcolor(15);
				gotoxy(38,10);
				printf("Menu'");
				gotoxy(25,12);
				printf("1. Carica vettore");
				gotoxy(25,13);
				printf("2. Visualizzazione vettore");
				gotoxy(25,14);
				printf("3. Ordinamento vettore");
				gotoxy(25,15);
				printf("4. Ricerca dicotonica");
				gotoxy(25,16);
				printf("5. Ricerca sequenza");
				gotoxy(25,17);
				printf("6. Esci");
				gotoxy(35,19);
				printf("Scegli _");
				gotoxy(42,19);
				fflush(stdin);
				scanf("%d", &scelta);
			} while(scelta<1 || scelta>6);
		}
		switch (scelta) {
			case 1: {

			} break;
			case 2: {

			} break;
			case 3: {

			} break;
			case 4: {

			} break;
			case 5: {

			} break;
			case 6: {

			} break;
		}
	} while(scelta!=6);
}
