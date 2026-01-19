#include<stdio.h>
#include<conio2.h>
#include<string.h>
#include<windows.h>
#include<ctype.h>
int cornice();
int riga, colonna;
int main() {
	char const a=133, e=138, ea=130, ia=141, o=149, u=151;
	int const lc=81;
	int pick, ts, cc, i, cont;
	char s[lc], s1[lc];
	SetConsoleTitle("Stringhe ~ Powered by Montanaro&Paone");
	ts=0;
	do {
		do {
			cornice();
			gotoxy(38,10);
			printf("Menu'");
			gotoxy(30,12);
			printf("1. Lettura frase");
			if(ts==0) {
				textcolor(8);
				gotoxy(30,13);
				printf("2. Conteggio parole");
				gotoxy(30,14);
				printf("3. Conteggio delle vocali e delle consonanti");
				gotoxy(30,15);
				printf("4. Stampa delle parole riga per riga");
				textcolor(15);
			} else {
				gotoxy(30,13);
				printf("2. Conteggio parole");
				gotoxy(30,14);
				printf("3. Conteggio delle vocali e delle consonanti");
				gotoxy(30,15);
				printf("4. Stampa delle parole riga per riga");
			}
			gotoxy(30,16);
			printf("5. Esci");
			gotoxy(40,18);
			fflush(stdin);
			printf("Scegli _");
			gotoxy(47,18);
			scanf("%d", &pick);
		} while((ts==0 && pick!=1 && pick!=5) || (ts==1 && pick<1 || pick>5));
		switch(pick) {
			case 1: {
				do {
					cornice();
					gotoxy(5,3);
					printf("Inserire una frase:");
					gotoxy(3,5);
					fflush(stdin);
					gets(s);
					cc=strlen(s);
				} while (cc<1 || cc>80);
				ts=1;
			}
			break;
			case 2: {
				cornice();
				cc=strlen(s);
				strcpy(s1,s);
				cont=0;
				for (i=0; i<cc; i++) {
					s1[i]=tolower(s1[i]);
				}
				for(i=0; i<cc+1; i++) {
					if(s1[i]==' ' || s1[i]=='\x0')
						if((s1[i-1]>='a' && s1[i-1]<='z' )
						        || (s1[i-1]==',' && s1[i-1]=='.'&& s1[i-1]==a
						            && s1[i-1]==e && s1[i-1]==ea   && s1[i-1]==ia
						            && s1[i-1]==o && s1[i-1]==u))
							cont++;

				}
				//	cont++;
				gotoxy(3,5);
				printf("%s", s1);
				if (cont>0) {
					if(cont==1) {
						gotoxy(3,7);
						printf("Nella frase è presente %d parola", cont);
					} else {
						gotoxy(3,7);
						printf("Nella frase sono presenti %d parole", cont);
					}
				} else {
					gotoxy(3,7);
					printf("Nella frase non sono presenti parole");
				}
				getch();
			}
			break;
		}
	} while (pick!=5);
}

int cornice() {
	int b1=187, b2=200, b3=205, b4=186;
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
}
