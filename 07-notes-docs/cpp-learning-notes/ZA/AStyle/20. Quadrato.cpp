#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio2.h>
int main() {
	int const N=5, q=253, z=176, b1=187, b2=200, b3=205, b4=186;
	int r, TC, TC1, TC2, i, riga, colonna, cont, riga1;
	float a, V[N], P[N], A[N];
	char risp;
	SetConsoleTitle("Square ~ Powered by Montanaro&Paone");
	TC=0;
	TC1=0;
	TC2=0;
	cont=0;
	do {
		if(TC==0) {
			do {
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
					textcolor(12);
					gotoxy(26,4);
					printf(" __                            ");
					gotoxy(26,5);
					printf("/ _\\ __ _ _   _  __ _ _ __ ___ ");
					gotoxy(26,6);
					printf("\\ \\ / _` | | | |/ _` | '__/ _ \\");
					gotoxy(26,7);
					printf("_\\ \\ (_| | |_| | (_| | | |  __/");
					gotoxy(26,8);
					printf("\\__/\\__, |\\__,_|\\__,_|_|  \\___|");
					gotoxy(26,9);
					printf("       |_|                     ");
					r=0;
					textcolor(15);
					gotoxy(38,12);
					printf("Menu'");
					gotoxy(20,14);
					printf("1) Caricamento lato dei quadrati");
					textcolor(8);
					gotoxy(20,15);
					printf("2) Calcolo del perimetro dei quadrati");
					gotoxy(20,16);
					printf("3) Calcolo dell'area dei quadrati");
					gotoxy(20,17);
					printf("4) Visualizza i lati l'area e il perimetro");
					textcolor(15);
					gotoxy(20,18);
					printf("5) Esci");
					gotoxy(63,20);
					printf("Scegli _");
					gotoxy(70,20);
					fflush(stdin);
					scanf("%d",&r);
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
					textcolor(12);
					gotoxy(26,4);
					printf(" __                            ");
					gotoxy(26,5);
					printf("/ _\\ __ _ _   _  __ _ _ __ ___ ");
					gotoxy(26,6);
					printf("\\ \\ / _` | | | |/ _` | '__/ _ \\");
					gotoxy(26,7);
					printf("_\\ \\ (_| | |_| | (_| | | |  __/");
					gotoxy(26,8);
					printf("\\__/\\__, |\\__,_|\\__,_|_|  \\___|");
					gotoxy(26,9);
					printf("       |_|                     ");
					r=0;
					textcolor(15);
					gotoxy(38,12);
					printf("Menu'");
					gotoxy(20,14);
					printf("1) Caricamento lato dei quadrati");
					textcolor(8);
					gotoxy(20,15);
					printf("2) Calcolo del perimetro dei quadrati");
					gotoxy(20,16);
					printf("3) Calcolo dell'area dei quadrati");
					gotoxy(20,17);
					printf("4) Visualizza i lati l'area e il perimetro");
					textcolor(15);
					gotoxy(20,18);
					printf("5) Esci");
					gotoxy(63,20);
					printf("Scegli _");
					gotoxy(70,20);
					fflush(stdin);
					scanf("%d",&r);
				}
			} while(r!=1 && r!=5);
		} else {
			if(TC1==0 && TC2==0) {
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
					textcolor(12);
					gotoxy(26,4);
					printf(" __                            ");
					gotoxy(26,5);
					printf("/ _\\ __ _ _   _  __ _ _ __ ___ ");
					gotoxy(26,6);
					printf("\\ \\ / _` | | | |/ _` | '__/ _ \\");
					gotoxy(26,7);
					printf("_\\ \\ (_| | |_| | (_| | | |  __/");
					gotoxy(26,8);
					printf("\\__/\\__, |\\__,_|\\__,_|_|  \\___|");
					gotoxy(26,9);
					printf("       |_|                     ");
					r=0;
					textcolor(15);
					gotoxy(38,12);
					printf("Menu'");
					gotoxy(20,14);
					printf("1) Caricamento lato dei quadrati");
					gotoxy(20,15);
					printf("2) Calcolo del perimetro dei quadrati");
					gotoxy(20,16);
					printf("3) Calcolo dell'area dei quadrati");
					gotoxy(20,17);
					textcolor(8);
					printf("4) Visualizza i lati l'area e il perimetro");
					gotoxy(20,18);
					textcolor(15);
					printf("5) Esci");
					gotoxy(63,20);
					printf("Scegli _");
					gotoxy(70,20);
					fflush(stdin);
					scanf("%d",&r);
				} while(r==4);
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
					textcolor(12);
					gotoxy(26,4);
					printf(" __                            ");
					gotoxy(26,5);
					printf("/ _\\ __ _ _   _  __ _ _ __ ___ ");
					gotoxy(26,6);
					printf("\\ \\ / _` | | | |/ _` | '__/ _ \\");
					gotoxy(26,7);
					printf("_\\ \\ (_| | |_| | (_| | | |  __/");
					gotoxy(26,8);
					printf("\\__/\\__, |\\__,_|\\__,_|_|  \\___|");
					gotoxy(26,9);
					printf("       |_|                     ");
					r=0;
					textcolor(15);
					gotoxy(38,12);
					printf("Menu'");
					gotoxy(20,14);
					printf("1) Caricamento lato dei quadrati");
					gotoxy(20,15);
					printf("2) Calcolo del perimetro dei quadrati");
					gotoxy(20,16);
					printf("3) Calcolo dell'area dei quadrati");
					gotoxy(20,17);
					printf("4) Visualizza i lati l'area e il perimetro");
					gotoxy(20,18);
					printf("5) Esci");
					gotoxy(63,20);
					printf("Scegli _");
					gotoxy(70,20);
					fflush(stdin);
					scanf("%d",&r);
				} while(r<1 || r>7);
			}
		}
		switch(r) {
			case 1: {
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
				textcolor(15);
				riga1=3;
				i=0;
				do {
					gotoxy(3,riga1);
					printf("Inserisci il lato del %d^ quadrato _", i+1);
					gotoxy(37,riga1);
					scanf("%f", &V[i]);
					i=i+1;
					riga1=riga1+1;
				} while(i<N);
				TC=TC+1;
			}
			break;
			case 2: {
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
				textcolor(15);
				riga1=3;
				for(i=0; i<N; i++) {
					P[i]=V[i]*4;
					gotoxy(3,riga1);
					//printf("Il perimetro del %d e' --> %3.2f cm",i,P[i]);
				}
				//getch();
				TC1=TC1+1;
			}
			break;
			case 3: {
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
				textcolor(15);
				riga1=3;
				for(i=0; i<N; i++) {
					A[i]=V[i]*V[i];
					gotoxy(3,riga1);
					//printf("L'area del %d e' --> %3.2f cm%c",i,A[i],q);
				}
				//getch();
				TC2=TC2+1;
			}
			break;
			case 4: {
				system("cls");
				gotoxy(25,1);
				textcolor(12);
				printf("Visaulizzazione area e perimetro");
				gotoxy(1,3);
				printf("Perimetro:");
				for(i=0; i<N; i++) {
					//P[i]=V[i]*4;
					textcolor(15);
					printf("\n\nIl perimetro del %d e' --> %3.2f cm",i+1,P[i]);
				}
				textcolor(12);
				gotoxy(43,3);
				printf("Area:");
				riga=3;
				do {
					textcolor(9);
					gotoxy(39,riga);
					printf("%c",z);
					riga++;
				} while(riga<26);
				for(i=0,riga=5; i<N; i++,riga=riga+2) {
					//A[i]=V[i]*V[i];
					textcolor(15);
					gotoxy(43,riga);
					printf("L'area del %d e' --> %3.2f cm%c",i+1,A[i],q);
				}
				getch();
			}
			break;
			case 5: {
				do {
					system("cls");
					riga=2;
					colonna=2;
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
					textcolor(15);
					gotoxy(25,4);
					printf("Vuoi davvero uscire? (S/N) _");
					fflush(stdin);
					gotoxy(52,4);
					scanf("%c", &risp);
				} while(risp!='s' && risp!='S' && risp!='n' && risp!='N');
				if(risp=='n' || risp=='N') {
					r=0;
				}
			}
			break;
		}
		fflush(stdin);
	} while(r!=5);
} //fine programma









