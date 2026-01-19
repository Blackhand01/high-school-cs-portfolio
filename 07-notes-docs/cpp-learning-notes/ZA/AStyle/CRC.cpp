#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
int main() {
	int N; //contatore degli 0 antecedenti a 1 nel risultato della XOR
	int LG; //numero cifre del polinomio generatore
	int LM; //numero cifre del messaggio
	int i; //indice per il calcolo della XOR
	int k; //indice del messaggio
	int j; //indice del calcolo per il vettore NEXT
	int z; //indice che tiene conto della lunghezza del polinomio generatore
	int NEXT[300]; //vettore il cui all'interno presenta il risultato con l'abbassamento delle opportune cifre dal messaggio
	int RIS[300]; //risultato della XOR
	int G[300]; //polinomio generatore
	int M[300]; //messaggio
	int f; //indice che permette di abbassare le opportune cifre dal messaggio al vettore NEXT
	int v; //indice per stampa di debug
	bool vc=false; //variabile di controllo
	bool cont; //variabile di flag che permette l'uscita dal ciclo for per il calcolo di N

	//Input dimensione messaggio
	do {
		printf("Qual e' la dimensione del messaggio (MAX 100 cifre)? --> ");
		scanf("%d", &LM);
	} while(LM<2 || LM>100);

	//Input dimensione polinomio generatore
	do {
		printf("Qual e' la dimensione del polinomio generatore (Deve esser minore del messaggio) --> ");
		scanf("%d", &LG);
	} while(LG<2 || LG>=LM);

	//Input messaggio con controllo
	printf("Inserisci cifra per cifra il messaggio --> ");
	for(i = 0; i < LM; i++) {
		if (vc==true) {
			scanf("%d",&M[i]);
		} else {
			scanf("%d",&M[0]);
			while(M[i]==0) {
				printf("\nLa prima cifra deve essere un 1!! Reinserire --> ");
				scanf("%d",&M[0]);
			}
			vc=true;
		}
	}

	//Input polinomio
	vc=false;
	printf("Inserisci cifra per cifra il polinomio (l'ultima cifra e' 1 di default) --> ");
	for(i = 0; i < LG-1; i++) {
		if (vc==true) {
			scanf("%d",&G[i]);
		} else {
			scanf("%d",&G[0]);
			while(G[i]==0) {
				printf("\nLa prima cifra deve essere un 1!! Reinserire --> ");
				scanf("%d",&G[0]);
			}
			vc=true;
		}
	}
	G[i]=1;
	printf("\n\n");

	//INIZIO CALCOLO
	z = LG;
	k = LG;
	//printf("\nPRIMO NEXT: ");//

	//Calcolo per abbassare le prime cifre necessarie
	for(i = 0; i < LG; i++) {
		NEXT[i] = M[i];
		printf("%d",NEXT[i]);//
	}

	getch();//

	//While Iniziale
	while(k < LM || N<LM-k) {
		printf("\n");//

		//Calcolo XOR
		for(i = 0; i < z; i++) {
			if(NEXT[i] == G[i]) {
				RIS[i] = 0;
			} else {
				RIS[i] = 1;
			}
			printf("%d ",RIS[i]);//
		}

		getch();//

		//Calcolo N (elementi successivi da prendere)
		for(N = 0, cont = true; N < LG && cont == true;) {
			if(RIS[N] == 0) {
				N++;
			} else {
				cont = false;
			}
		}

		printf("\nN = %d",N);//
		getch();//
		printf("\n");

		//Calcolo NEXT 1
		for(j = N, z = 0; j < LG; j++, z++) {
			NEXT[z] = RIS[j];
			/*printf("%d \n", NEXT[z]);//
			printf("j=%d z=%d \n",j,z);//
			getch();*/
		}

		getch();//
		printf("\n");

		//Calcolo NEXT 2
		for(f = 0; f < N && k < LM; k++, z++, f++) {
			NEXT[z] = M[k];
			printf("%d ", NEXT[z]);//
		}

		printf("%d",k);
		getch();//

	}

	if(LG==z) {
		//Ultimo calcolo XOR per il CRC
		for(i = 0; i < z; i++) {
			if(NEXT[i] == G[i]) {
				RIS[i] = 0;
			} else {
				RIS[i] = 1;
			}
			printf("%d ",RIS[i]);//
		}

		//Stampa del CRC
		printf("\n\nOUTPUT:\n\n");
		for(f = 0; f < LG; f++) {
			printf("%d ", RIS[f]);
		}
	} else {
		//Stampa del CRC
		printf("\n\nOUTPUT:\n\n");
		for(f = 0; f < LG; f++) {
			printf("%d ", RIS[f]);
		}
	}


	for(N = 0, cont = true; N < LG && cont == true;) {
		if(RIS[N] == 0) {
			N++;
		} else {
			cont = false;
		}
	}

	//Stampa del CRC
	printf("\n\nOUTPUT:\n\n");
	for(f = 0; f < LG; f++) {
		printf("%d ", RIS[f]);
	}

	printf("\n\n");
	system("PAUSE");
}
