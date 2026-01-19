#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<string.h>
int main () {
	struct gesu {
		int si, no, m, f;
	};
	gesu tabellone[10], comodo;
	int scelta, ns, contsi, contno, contf, contm, s, it;
	do {
		do {
			system("cls");
			printf("1. input");
			printf("\n2. visualizzazione");
			printf("\n3. ordinamento");
			printf("\n4. esci");
			printf("\nscegli --> ");
			scanf("%d", &scelta);
		} while(scelta<1||scelta>4);
		switch(scelta) {
			case 1: {
				do {
					printf("\n\nQuanti seggi ci sono? --> ");
					scanf("%d", &ns);
				} while(ns<1||ns>10);
				system("cls");
				for(it=0; it<ns; it++) {
					printf("Seggio numero %d", it+1);
					do {
						printf("\nQuanti maschi?");
						scanf("%d", &contm);
					} while(contm<0);
					tabellone[it].m=contm;
					do {
						printf("\nQuante femmine?");
						scanf("%d", &contf);
					} while(contf<0);
					tabellone[it].f=contf;
					do {
						printf("\nQuanti voti si");
						scanf("%d", &contsi);
					} while(contsi<0);
					tabellone[it].si=contsi;

				}
			}
			break;
			case 2: {
				for(it=0; it<ns; it++) {
					system("cls");
					printf("Seggio numero %d", it+1);
					printf("\nDonne: %d", tabellone[it].f);
					printf("\nUomini: %d", tabellone[it].m);
					printf("\nVoti si: %d", tabellone[it].si);
					printf("\nVoti no: %d", tabellone[it].no);
					getch();
				}
			}
			break;
			case 3: {
				for(s=1; s<ns; s++) {
					for(it=0; it<ns-s; it++) {
						if(tabellone[it].si<tabellone[it+1].si) {
							comodo=tabellone[it];
							tabellone[it]=tabellone[it+1];
							tabellone[it+1]=comodo;
						}
					}
				}
			}
			break;
		}
	} while(scelta!=4);
}
