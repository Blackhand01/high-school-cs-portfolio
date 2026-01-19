#include <stdlib.h>
#include <stdio.h>
#include <conio2.h>
#include <time.h>
#include <windows.h>
int main() {
	int c1, c2, c3, c4, n1, n2, n3, n4, N, vite, pick, gpg, gps, m, c, d, u, riga, colonna, b1, b2, b3, b4, cont;
	char risp;
	SetConsoleTitle("MasterMind ~ Powered by Montanaro&Paone");
	b1=187;
	b2=200;
	b3=205;
	b4=186;
	cont=0;
	srand(time(NULL));
	do {
		do {
			if(cont==0) {
				cont=cont+1;
				riga=2;
				colonna=2;
				system("cls");
				textcolor(rand()%15+1);
				gotoxy(80,1);
				printf("%c", b1);
				gotoxy(80,25);
				printf("%c", b1+1);
				gotoxy(1,25);
				printf("%c", b2);
				gotoxy(1,1);
				printf("%c", b2+1);
				do {
					delay(1);
					gotoxy(colonna,1);
					printf("%c", b3);
					gotoxy(colonna,25);
					printf("%c", b3);
					colonna=colonna+1;
				} while(colonna!=80);
				do {
					delay(1);
					gotoxy(1,riga);
					printf("%c", b4);
					gotoxy(80,riga);
					printf("%c", b4);
					riga=riga+1;
				} while(riga!=25);
				pick=0;
				textcolor(15);
				gotoxy(35,3);
				printf("Mastermind");
				gotoxy(38,4);
				printf("Menu'");
				gotoxy(33,6);
				printf("1. Gioca");
				gotoxy(33,7);
				printf("2. Istruzioni");
				gotoxy(33,8);
				printf("3. Esci");
				gotoxy(38,10);
				printf("Scegli _");
				gotoxy(45,10);
				fflush(stdin);
				scanf("%d", &pick);
			} else {
				riga=2;
				colonna=2;
				system("cls");
				textcolor(rand()%15+1);
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
				pick=0;
				textcolor(15);
				gotoxy(35,3);
				printf("Mastermind");
				gotoxy(38,4);
				printf("Menu'");
				gotoxy(33,6);
				printf("1. Gioca");
				gotoxy(33,7);
				printf("2. Istruzioni");
				gotoxy(33,8);
				printf("3. Esci");
				gotoxy(38,10);
				printf("Scegli _");
				gotoxy(45,10);
				fflush(stdin);
				scanf("%d", &pick);
			}
		} while(pick<1 || pick>3);
		switch(pick) {
			case 1: {
				n1=rand()%9+1;
				n2=rand()%10;
				n3=rand()%10;
				n4=rand()%10;
				vite=10;
				do {
					riga=2;
					colonna=2;
					system("cls");
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
					gotoxy(30,6);
					printf("Indovina il numero! %d%d%d%d",n1,n2,n3,n4);
					gotoxy(26,7);
					printf("Hai a disposizione: %d tentativi", vite);
					do {
						gotoxy(25,11);
						printf("Immetti un numero di quattro cifre: _");
						gotoxy(62,11);
						printf("                           ");
						gotoxy(61,11);
						fflush(stdin);
						scanf("%d",&N);
					} while(N<1000 || N>9999);
					c1=N/1000;
					c2=(N%1000)/100;
					c3=(N%100)/10;
					c4=N%10;
					gpg=0;
					gps=0;
					if(c1==n2 || c1==n3 || c1==n4) {
						gps=gps+1;
					}
					if(c2==n1 || c2==n3 || c2==n4) {
						gps=gps+1;
					}
					if(c3==n1 || c3==n2 || c3==n4) {
						gps=gps+1;
					}
					if(c4==n1 || c1==n2 || c1==n3) {
						gps=gps+1;
					}
					if(c1==n1) {
						gpg=gpg+1;
					}
					if(c2==n2) {
						gpg=gpg+1;
					}
					if(c3==n3) {
						gpg=gpg+1;
					}
					if(c4==n4) {
						gpg=gpg+1;
					}

					if((n1*1000+n2*100+n3*10+n4)==N) {
						gotoxy(10,19);
						printf("Congratulazioni! Hai indovinato il numero!");
					} else {
						gotoxy(5,16);
						printf("Cifre giuste al posto sbagliato: %d !",gps);
						gotoxy(5,17);
						printf("Cifre giuste al posto giusto: %d !",gpg);
					}
					vite=vite-1;
					if(vite==0) {
						riga=2;
						colonna=2;
						system("cls");
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
						gotoxy(35,4);
						printf("Hai perso!");
						gotoxy(5,13);
						printf("Premere un tasto per riprovare _");
						getch();
					}
					getch();
				} while((n1*1000+n2*100+n3*10+n4)!=N);
			}
			break;
			case 2: {

			} break;
			case 3: {
				do {
					system("cls");
					riga=2;
					colonna=2;
					textcolor(rand()%15+1);
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
					textcolor(15);
					gotoxy(25,2);
					printf("Vuoi davvero uscire? (S/N) _");
					fflush(stdin);
					gotoxy(52,2);
					scanf("%c", &risp);
				} while(risp!='s' && risp!='S' && risp!='n' && risp!='N');
				if(risp=='n' || risp=='N') {
					pick=0;
				}
			}
		}
		fflush(stdin);
	} while (pick!=3);
} //fine programma
