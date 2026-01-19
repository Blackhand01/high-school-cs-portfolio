#include<stdlib.h>
#include<stdio.h>
#include<conio2.h>
#include<windows.h>
int cornice();
int const n=8, l=4, b1=187, b2=200, b3=205, b4=186, z=176;
int V[n], V1[l], VU[l+n], i, j, k, comodo, s, scelta, scelta1, cont, tc, tc1, riga, colonna, riga1, riga2, riga3, trovato, continuare, x, ls, li, m;
char risp;
int main() {
	SetConsoleTitle("Ordinamento vettori ~ Powered by Montanaro&Paone");
	cont=0;
	tc=0;
	tc1=0;
	i=0;
	do {
		if(tc==0 && tc1==0) {
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
						Sleep(10);
						gotoxy(colonna,1);
						printf("%c", b3);
						gotoxy(colonna,25);
						printf("%c", b3);
						colonna=colonna+1;
					} while(colonna!=80);
					do {
						Sleep(10);
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
					printf("4. Ricerca dicotomica");
					gotoxy(25,16);
					printf("5. Ricerca sequenziale");
					gotoxy(25,17);
					printf("6. Merge");
					textcolor(15);
					gotoxy(25,18);
					printf("7. Esci");
					gotoxy(35,20);
					printf("Scegli _");
					gotoxy(42,20);
					fflush(stdin);
					scanf("%d", &scelta);
				} else {
					cornice();
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
					printf("4. Ricerca dicotomica");
					gotoxy(25,16);
					printf("5. Ricerca sequenziale");
					gotoxy(25,17);
					printf("6. Merge");
					textcolor(15);
					gotoxy(25,18);
					printf("7. Esci");
					gotoxy(35,20);
					printf("Scegli _");
					gotoxy(42,20);
					fflush(stdin);
					scanf("%d", &scelta);
				}
			} while(scelta!=1 && scelta!=7);
		} else {
			if(tc==1 || tc1==1) {
				do {
					cornice();
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
					textcolor(8);
					gotoxy(25,15);
					printf("4. Ricerca dicotomica");
					textcolor(15);
					gotoxy(25,16);
					printf("5. Ricerca sequenziale");
					textcolor(8);
					gotoxy(25,17);
					printf("6. Merge");
					textcolor(15);
					gotoxy(25,18);
					printf("7. Esci");
					gotoxy(35,20);
					printf("Scegli _");
					gotoxy(42,20);
					fflush(stdin);
					scanf("%d", &scelta);
				} while(scelta<1 || scelta>7 && scelta==4 && scelta==6);
			} else {
				if(tc==1 && tc1==1) {
					do {
						cornice();
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
						printf("4. Ricerca dicotomica");
						textcolor(15);
						gotoxy(25,16);
						printf("5. Ricerca sequenziale");
						textcolor(8);
						gotoxy(25,17);
						printf("6. Merge");
						textcolor(15);
						gotoxy(25,18);
						printf("7. Esci");
						gotoxy(35,20);
						printf("Scegli _");
						gotoxy(42,20);
						fflush(stdin);
						scanf("%d", &scelta);
					} while(scelta<1 || scelta>7 && scelta==4 && scelta==6);
				} else {
					if((tc==2 && tc1==2) || (tc==3 && tc1==3)) {
						do {
							cornice();
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
							printf("4. Ricerca dicotomica");
							gotoxy(25,16);
							printf("5. Ricerca sequenziale");
							gotoxy(25,17);
							printf("6. Merge");
							gotoxy(25,18);
							printf("7. Esci");
							gotoxy(35,20);
							printf("Scegli _");
							gotoxy(42,20);
							fflush(stdin);
							scanf("%d", &scelta);
						} while(scelta<1 || scelta>7);
					} else {
						if(tc==2 || tc1==2) {
							do {
								cornice();
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
								printf("4. Ricerca dicotomica");
								gotoxy(25,16);
								printf("5. Ricerca sequenziale");
								textcolor(8);
								gotoxy(25,17);
								printf("6. Merge");
								textcolor(15);
								gotoxy(25,18);
								printf("7. Esci");
								gotoxy(35,20);
								printf("Scegli _");
								gotoxy(42,20);
								fflush(stdin);
								scanf("%d", &scelta);
							} while(scelta<1 || scelta>7 && scelta!=6);
						}
					}
				}
			}
		}
		switch (scelta) {
			case 1: {
				do {
					do {
						scelta1=0;
						cornice();
						textcolor(15);
						gotoxy(25,15);
						printf("1. Caricamento primo vettore");
						gotoxy(25,16);
						printf("2. Caricamento secondo vettore");
						gotoxy(25,17);
						printf("3. Esci");
						gotoxy(35,19);
						printf("Scegli _");
						gotoxy(42,19);
						fflush(stdin);
						scanf("%d", &scelta1);
					} while (scelta1!=1 && scelta1!=2 && scelta1!=3);
					switch(scelta1) {
						case 1: {
							cornice();
							textcolor(15);
							riga1=3;
							for(i=0; i<n; i++, riga1++) {
								do {
									gotoxy(30,riga1);
									printf("                                       ");
									gotoxy(3,riga1);
									printf("Inserisci il %d valore --> ", i+1);
									gotoxy(30,riga1);
									scanf("%d", &V[i]);
								} while(V[i]<-100 || V[i]>100);
							}
							tc=1; //vettore 1 caricato
						}
						break;
						case 2: {
							cornice();
							textcolor(15);
							riga1=3;
							for(j=0; j<l; j++, riga1++) {
								do {
									gotoxy(30,riga1);
									printf("                                       ");
									gotoxy(3,riga1);
									printf("Inserisci il %d valore --> ", j+1);
									gotoxy(30,riga1);
									scanf("%d", &V1[j]);
								} while(V1[j]<-100 || V1[j]>100);
							}
							tc1=1; //vettore 2 caricato
						}
						break;
					}
				} while(scelta1!=3);
			}
			break;
			case 2: {
				cornice();
				if((tc==1 || tc==2) && tc1==0) {
					riga1=5;
					textcolor(15);
					for (i=0; i<n; i++) {
						gotoxy(4, riga1);
						printf ("Valore numero %d --> %d", i+1, V[i]);
						riga1=riga1+1;
					}
				} else {
					if((tc1==1 || tc1==2) && tc==0) {
						riga1=5;
						textcolor(15);
						for (j=0; j<l; j++) {
							gotoxy(4, riga1);
							printf ("Valore numero %d --> %d", j+1, V1[j]);
							riga1=riga1+1;
						}
					} else {
						if((tc==1 || tc==2) && (tc1==1 || tc1==2)) {
							riga=2;
							riga1=5;
							riga2=5;
							textcolor(12);
							gotoxy(3,3);
							printf("Primo vettore:");
							gotoxy(42,3);
							printf("Secondo vettore:");
							do {
								textcolor(12);
								gotoxy(40,riga);
								printf("%c",z);
								riga++;
							} while(riga<25);
							textcolor(15);
							for (i=0; i<n; i++) {
								gotoxy(3, riga1);
								printf ("Valore numero %d --> %d", i+1, V[i]);
								riga1=riga1+1;
							}
							textcolor(15);
							for (j=0; j<l; j++) {
								gotoxy(42, riga2);
								printf ("Valore numero %d --> %d", j+1, V1[j]);
								riga2=riga2+1;
							}
						} else {
							if(tc==3 && tc1==3) {
								riga=2;
								riga1=5;
								riga2=5;
								riga3=5;
								textcolor(12);
								gotoxy(3,3);
								printf("Primo vettore:");
								gotoxy(29,3);
								printf("Secondo vettore:");
								gotoxy(56,3);
								printf("Vettore unione:");
								do {
									textcolor(12);
									gotoxy(27,riga);
									printf("%c",z);
									riga++;
								} while(riga<25);
								riga=2;
								do {
									textcolor(12);
									gotoxy(54,riga);
									printf("%c",z);
									riga++;
								} while(riga<25);
								textcolor(15);
								for (i=0; i<n; i++) {
									gotoxy(3, riga1);
									printf ("Valore numero %d --> %d", i+1, V[i]);
									riga1=riga1+1;
								}
								textcolor(15);
								for (j=0; j<l; j++) {
									gotoxy(29, riga2);
									printf ("Valore numero %d --> %d", j+1, V1[j]);
									riga2=riga2+1;
								}
								textcolor(15);
								for (k=0; k<n+l; k++) {
									gotoxy(56, riga3);
									printf("Valore numero %d --> %d", k+1, VU[k]);
									riga3=riga3+1;
								}
							}
						}
					}
				}
				getch();
			}
			break;
			case 3: {
				if(tc==1 && (tc1==0 || tc1==2)) {
					for(s=1; s<n; s++) {
						for(i=0; i<n-s; i++) {
							if(V[i]>V[i+1]) {
								comodo=V[i];
								V[i]=V[i+1];
								V[i+1]=comodo;
							}
						}
					}
					tc=2;
					gotoxy(15,22);
					printf("Il primo vettore e' stato ordinato con successo.");
					getch();
				} else {
					if(tc1==1 && (tc==0 || tc==2)) {
						for(s=1; s<l; s++) {
							for(j=0; j<l-s; j++) {
								if(V1[j]>V1[j+1]) {
									comodo=V1[j];
									V1[j]=V1[j+1];
									V1[j+1]=comodo;
								}
							}
						}
						tc1=2;
						gotoxy(15,22);
						printf("Il secondo vettore e' stato ordinato con successo.");
						getch();
					} else {
						if(tc==1 && tc1==1) {
							for(s=1; s<n; s++) {
								for(i=0; i<n-s; i++) {
									if(V[i]>V[i+1]) {
										comodo=V[i];
										V[i]=V[i+1];
										V[i+1]=comodo;
									}
								}
							}
							tc=2;
							for(s=1; s<l; s++) {
								for(j=0; j<l-s; j++) {
									if(V1[j]>V1[j+1]) {
										comodo=V1[j];
										V1[j]=V1[j+1];
										V1[j+1]=comodo;
									}
								}
							}
							tc1=2;
							gotoxy(20,22);
							printf("I vettori sono stati ordinati con successo.");
							getch();
						}
					}
				}
			}
			break;
			case 4: {
				do {
					if(tc==2 && tc1==2) {
						do {
							scelta1=0;
							cornice();
							textcolor(15);
							gotoxy(25,14);
							printf("1. Ricerca dicotomica primo vettore");
							gotoxy(25,15);
							printf("2. Ricerca dicotomica secondo vettore");
							gotoxy(25,16);
							textcolor(8);
							printf("3. Ricerca dicotomica vettore unione");
							gotoxy(25,17);
							textcolor(15);
							printf("4. Esci");
							gotoxy(35,19);
							printf("Scegli _");
							gotoxy(42,19);
							fflush(stdin);
							scanf("%d", &scelta1);
						} while (scelta1!=1 && scelta1!=2 && scelta1!=4);
					} else {
						if(tc==2 && (tc1==0 || tc==1)) {
							do {
								scelta1=0;
								cornice();
								textcolor(15);
								gotoxy(25,14);
								printf("1. Ricerca dicotomica primo vettore");
								gotoxy(25,15);
								textcolor(8);
								printf("2. Ricerca dicotomica secondo vettore");
								gotoxy(25,16);
								printf("3. Ricerca dicotomica vettore unione");
								gotoxy(25,17);
								textcolor(15);
								printf("4. Esci");
								gotoxy(35,19);
								printf("Scegli _");
								gotoxy(42,19);
								fflush(stdin);
								scanf("%d", &scelta1);
							} while (scelta1!=1 && scelta1!=4);
						} else {
							if(tc1==2 && (tc==0 || tc==1)) {
								do {
									scelta1=0;
									cornice();
									textcolor(15);
									gotoxy(25,14);
									textcolor(8);
									printf("1. Ricerca dicotomica primo vettore");
									gotoxy(25,15);
									textcolor(15);
									printf("2. Ricerca dicotomica secondo vettore");
									gotoxy(25,16);
									textcolor(8);
									printf("3. Ricerca dicotomica vettore unione");
									gotoxy(25,17);
									textcolor(15);
									printf("4. Esci");
									gotoxy(35,19);
									printf("Scegli _");
									gotoxy(42,19);
									fflush(stdin);
									scanf("%d", &scelta1);
								} while (scelta1!=2 && scelta1!=4);
							} else {
								if (tc==3 && tc1==3) {
									do {
										scelta1=0;
										cornice();
										textcolor(15);
										gotoxy(25,14);
										printf("1. Ricerca dicotomica primo vettore");
										gotoxy(25,15);
										printf("2. Ricerca dicotomica secondo vettore");
										gotoxy(25,16);
										printf("3. Ricerca dicotomica vettore unione");
										gotoxy(25,17);
										printf("4. Esci");
										gotoxy(35,19);
										printf("Scegli _");
										gotoxy(42,19);
										fflush(stdin);
										scanf("%d", &scelta1);
									} while (scelta1<1 || scelta1>4);
								}
							}
						}
					}
					switch(scelta1) {
						case 1: {
							cornice();
							textcolor(15);
							do {
								gotoxy(38,4);
								printf("                                       ");
								gotoxy(4,4);
								printf("Immettere il valore da ricercare: _");
								fflush(stdin);
								gotoxy(38,4);
								scanf("%d", &x);
							} while(x<-100 || x>100);
							li=0;
							ls=n-1;
							trovato=0;
							continuare=1;
							do {
								m=(li+ls)/2;
								if(x==V[m]) {
									trovato=1;
									continuare=0;
								} else {
									if(x>V[m]) {
										li=m+1;
									} else {
										ls=m-1;
									}
									if(li>ls) {
										continuare=0;
									}
								}
							} while(continuare==1);
							if(trovato==1) {
								gotoxy(4,6);
								printf("Il valore %d e' presente nel vettore alla posizione %d.", x, m+1);
							} else {
								gotoxy(4,6);
								printf("Il valore ricercato non e' nel vettore.");
							}
							getch();
						}
						break;
						case 2: {
							cornice();
							textcolor(15);
							do {
								gotoxy(38,4);
								printf("                                       ");
								gotoxy(4,4);
								printf("Immettere il valore da ricercare: _");
								fflush(stdin);
								gotoxy(38,4);
								scanf("%d", &x);
							} while(x<-100 || x>100);
							li=0;
							ls=l-1;
							trovato=0;
							continuare=1;
							do {
								m=(li+ls)/2;
								if(x==V1[m]) {
									trovato=1;
									continuare=0;
								} else {
									if(x>V1[m]) {
										li=m+1;
									} else {
										ls=m-1;
									}
									if(li>ls) {
										continuare=0;
									}
								}
							} while(continuare==1);
							if(trovato==1) {
								gotoxy(4,6);
								printf("Il valore %d e' presente nel vettore alla posizione %d.", x, m+1);
							} else {
								gotoxy(4,6);
								printf("Il valore ricercato non e' nel vettore.");
							}
							getch();
						}
						break;
						case 3: {
							cornice();
							textcolor(15);
							do {
								gotoxy(38,4);
								printf("                                       ");
								gotoxy(4,4);
								printf("Immettere il valore da ricercare: _");
								fflush(stdin);
								gotoxy(38,4);
								scanf("%d", &x);
							} while(x<-100 || x>100);
							li=0;
							ls=(n+l)-1;
							trovato=0;
							continuare=1;
							do {
								m=(li+ls)/2;
								if(x==VU[m]) {
									trovato=1;
									continuare=0;
								} else {
									if(x>VU[m]) {
										li=m+1;
									} else {
										ls=m-1;
									}
									if(li>ls) {
										continuare=0;
									}
								}
							} while(continuare==1);
							if(trovato==1) {
								gotoxy(4,6);
								printf("Il valore %d e' presente nel vettore alla posizione %d.", x, m+1);
							} else {
								gotoxy(4,6);
								printf("Il valore ricercato non e' nel vettore.");
							}
							getch();
						}
						break;
					}
				} while(scelta1!=3);
			}
			break;
			case 5: {
				do {
					if(tc==2 && tc1==2) {
						do {
							scelta1=0;
							cornice();
							textcolor(15);
							gotoxy(25,14);
							printf("1. Ricerca sequenziale primo vettore");
							gotoxy(25,15);
							printf("2. Ricerca sequenziale secondo vettore");
							gotoxy(25,16);
							textcolor(8);
							printf("3. Ricerca sequenziale vettore unione");
							gotoxy(25,17);
							textcolor(15);
							printf("4. Esci");
							gotoxy(35,19);
							printf("Scegli _");
							gotoxy(42,19);
							fflush(stdin);
							scanf("%d", &scelta1);
						} while (scelta1!=1 && scelta!=2 && scelta1!=4);
					} else {
						if(tc==1 && tc1==0) {
							do {
								scelta1=0;
								cornice();
								textcolor(15);
								gotoxy(25,14);
								printf("1. Ricerca sequenziale primo vettore");
								gotoxy(25,15);
								textcolor(8);
								printf("2. Ricerca sequenziale secondo vettore");
								gotoxy(25,16);
								printf("3. Ricerca sequenziale vettore unione");
								gotoxy(25,17);
								textcolor(15);
								printf("4. Esci");
								gotoxy(35,19);
								printf("Scegli _");
								gotoxy(42,19);
								fflush(stdin);
								scanf("%d", &scelta1);
							} while (scelta1!=1 && scelta1!=4);
						} else {
							if(tc1==1 && tc==0) {
								do {
									scelta1=0;
									cornice();
									textcolor(15);
									gotoxy(25,14);
									textcolor(8);
									printf("1. Ricerca sequenziale primo vettore");
									gotoxy(25,15);
									textcolor(15);
									printf("2. Ricerca sequenziale secondo vettore");
									gotoxy(25,16);
									textcolor(8);
									printf("3. Ricerca sequenziale vettore unione");
									gotoxy(25,17);
									textcolor(15);
									printf("4. Esci");
									gotoxy(35,19);
									printf("Scegli _");
									gotoxy(42,19);
									fflush(stdin);
									scanf("%d", &scelta1);
								} while (scelta1!=2 && scelta1!=4);
							} else {
								if (tc==3 && tc1==3) {
									do {
										scelta1=0;
										cornice();
										textcolor(15);
										gotoxy(25,14);
										printf("1. Ricerca sequenziale primo vettore");
										gotoxy(25,15);
										printf("2. Ricerca sequenziale secondo vettore");
										gotoxy(25,16);
										printf("3. Ricerca sequenziale vettore unione");
										gotoxy(25,17);
										printf("4. Esci");
										gotoxy(35,19);
										printf("Scegli _");
										gotoxy(42,19);
										fflush(stdin);
										scanf("%d", &scelta1);
									} while (scelta1<1 || scelta1>4);
								} else {
									if(tc==1 && tc1==1) {
										do {
											scelta1=0;
											cornice();
											textcolor(15);
											gotoxy(25,14);
											printf("1. Ricerca sequenziale primo vettore");
											gotoxy(25,15);
											printf("2. Ricerca sequenziale secondo vettore");
											gotoxy(25,16);
											textcolor(8);
											printf("3. Ricerca sequenziale vettore unione");
											gotoxy(25,17);
											textcolor(15);
											printf("4. Esci");
											gotoxy(35,19);
											printf("Scegli _");
											gotoxy(42,19);
											fflush(stdin);
											scanf("%d", &scelta1);
										} while (scelta1!=1 && scelta1!=2 && scelta1!=4);
									}

								}
							}
						}
						switch (scelta1) {
							case 1: {
								cornice();
								textcolor(15);
								trovato=0;
								continuare=1;
								do {
									gotoxy(38,4);
									printf("                                       ");
									gotoxy(4,4);
									printf("Immettere il valore da ricercare: _");
									fflush(stdin);
									gotoxy(38,4);
									scanf("%d", &x);
								} while(x<-100 || x>100);
								if(tc==1) {
									for(i=0; i<n && trovato==0; i++) {
										if(V[i]==x) {
											trovato=1;
										}
									}
									if(trovato==1) {
										gotoxy(4,6);
										printf("Il valore %d e' presente nel vettore alla posizione %d.", x, i);
									} else {
										gotoxy(4,6);
										printf("Il valore ricercato non e' nel vettore.");
									}
									getch();
								} else {
									for(i=0; i<n && continuare==1; i++) {
										if(x==V[i]) {
											trovato=1;
											continuare=0;
										} else {
											if(x<V[i]) {
												continuare=0;
											}
										}
									}
									if(trovato==1) {
										gotoxy(4,6);
										printf("Il valore %d e' presente nel vettore alla posizione %d.", x, i);
									} else {
										gotoxy(4,6);
										printf("Il valore ricercato non e' nel vettore.");
									}
									getch();
								}
							}
							break;
							case 2: {
								cornice();
								textcolor(15);
								trovato=0;
								continuare=1;
								do {
									gotoxy(38,4);
									printf("                                       ");
									gotoxy(4,4);
									printf("Immettere il valore da ricercare: _");
									fflush(stdin);
									gotoxy(38,4);
									scanf("%d", &x);
								} while(x<-100 || x>100);
								if(tc1==1) {
									for(j=0; j<l && trovato==0; j++) {
										if(V1[j]==x) {
											trovato=1;
										}
									}
									if(trovato==1) {
										gotoxy(4,6);
										printf("Il valore %d e' presente nel vettore alla posizione %d.", x, j);
									} else {
										gotoxy(4,6);
										printf("Il valore ricercato non e' nel vettore.");
									}
									getch();
								} else {
									for(j=0; j<l && continuare==1; j++) {
										if(x==V1[j]) {
											trovato=1;
											continuare=0;
										} else {
											if(x<V1[j]) {
												continuare=0;
											}
										}
									}
									if(trovato==1) {
										gotoxy(4,6);
										printf("Il valore %d e' presente nel vettore alla posizione %d.", x, j);
									} else {
										gotoxy(4,6);
										printf("Il valore ricercato non e' nel vettore.");
									}
									getch();
								}
							}
							break;
							case 3: {
								cornice();
								textcolor(15);
								trovato=0;
								continuare=1;
								do {
									gotoxy(38,4);
									printf("                                       ");
									gotoxy(4,4);
									printf("Immettere il valore da ricercare: _");
									fflush(stdin);
									gotoxy(38,4);
									scanf("%d", &x);
								} while(x<-100 || x>100);
								/*if(tc==1) {
									for(i=0; i<n && trovato==0; i++) {
										if(V[i]==x) {
											trovato=1;
										}
									}
									if(trovato==1) {
										gotoxy(4,6);
										printf("Il valore %d e' presente nel vettore alla posizione %d.", x, i);
									} else {
										gotoxy(4,6);
										printf("Il valore ricercato non e' nel vettore.");
									}
									getch();
								} else {*/
								for(k=0; k<n+l && continuare==1; k++) {
									if(x==VU[k]) {
										trovato=1;
										continuare=0;
									} else {
										if(x<VU[k]) {
											continuare=0;
										}
									}
								}
								if(trovato==1) {
									gotoxy(4,6);
									printf("Il valore %d e' presente nel vettore alla posizione %d.", x, k);
								} else {
									gotoxy(4,6);
									printf("Il valore ricercato non e' nel vettore.");
								}
								getch();
								//}
							}
							break;
						}
					}
				} while(scelta1!=4);
			}
			break;
			case 6: {
				for(i=0, j=0, k=0; i<n && j<l; k++) {
					if(V[i]<V1[j]) {
						VU[k]=V[i];
						i++;
					} else {
						VU[k]=V1[j];
						j++;
					}
				}
				if(i==n) {
					do {
						VU[k]=V1[j];
						k++;
						j++;
					} while(j<l);
				} else {
					do {
						VU[k]=V[i];
						k++;
						i++;
					} while(i<n);
				}
				tc=3;
				tc1=3;
				gotoxy(10,22);
				printf("L'unione dei due vettori e' stata effettuata con successo");
				getch();
			}
			break;
			case 7: {
				do {
					cornice();
					textcolor(15);
					gotoxy(25,4);
					printf("Vuoi davvero uscire? (S/N) _");
					fflush(stdin);
					gotoxy(52,4);
					scanf("%c", &risp);
				} while(risp!='s' && risp!='S' && risp!='n' && risp!='N');
				if(risp=='n' || risp=='N') {
					scelta=0;
				}
			}
		}
	} while(scelta!=7);
} //fine programma
int cornice() {
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
}
