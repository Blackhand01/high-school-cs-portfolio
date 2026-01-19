#include<stdlib.h>
#include<stdio.h>
int main()
{
	float ITS,IS,SCONTO; 	
	do{
		system("cls");
		
	printf ("                         CALCOLO DELLO SCONTO\n\n\n");	
	printf("inserire l'importo totale spesa (in euro) --> ");
	scanf("%f",& ITS);

    }while(ITS<=0);
  
	printf("\n\nL'importo totale della spesa %c --> %.2f euro\n\n",130,ITS);  // printf è fuori cosicchè il programma non stampi il numero se non rispetta la condizione
  
    if(ITS<=100){
    SCONTO=ITS*5/100;
    printf("Lo sconto %c                    --> %.2f euro\n\n",130,SCONTO);   //130 è il codice é in ASCII, %c è il formato speciale per i caratteri
	}
	else
	{if(SCONTO<=250){
	SCONTO=ITS*10/100;
	printf("Lo sconto %c                    --> %.2f euro\n\n",130,SCONTO);
	}
	else{
	SCONTO=ITS*20/100;
	printf("Lo sconto %c                    --> %.2f euro\n\n",130,SCONTO);
	}
	}
    {IS=ITS-SCONTO;
    printf("L'importo totale scontato %c    --> %.2f euro\n\n",130,IS);
	}
	{system("PAUSE");
	}
}
