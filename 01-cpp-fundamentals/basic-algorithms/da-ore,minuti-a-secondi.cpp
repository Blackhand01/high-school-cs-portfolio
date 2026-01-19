#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>


int main ()
{
        int H,M,S,O;
    
system("cls");
        printf("PROGRAMMA CHE COVERTE ORE, MINUTI, SECONDI IN SOLI SECONDI\n\n\n");
    
    do{
        printf("inserisci il valore delle ore\n\n\");
        scanf("%d", & H);
    }while (H<0);
    
    do{
        printf("inserisci il valore dei minuti\n\n\");
        scanf("%d", & M);
    }while (M<0);
    
    do{
        printf("inserisci il valore dei secondi\n\n\");
        scanf ("%d",& S);
    }while (S<0);
    
    O=(H*3600)+(M*60)+S;
    
        printf("l'orario in secondi %c %d\n\n",130,O);
    system("pause");
    
}
