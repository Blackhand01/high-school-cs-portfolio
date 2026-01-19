#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio2.h>
#include<math.h>  

int main (){


int const DIM=12;
int Mesi[DIM], gg, mm, aaaa, GG, MM, somma, c, ris, contrbi1, contrbi2, contrbi3, Differenza, save, SMM, Smm, i;

char risp;



do{

system("cls");

gotoxy (10,1);
printf ("CALCOLATORE DI DISTANZA DI GIORNI FRA DUE DATE DELLO STESSO ANNO");


	gotoxy(1,4);
	printf ("inserisci la prima data");
	gotoxy(1,6);
	printf ("../../....");
	
	do{
		gotoxy(1,6);
		printf("../../....                                                                               ");
		gotoxy(1,6);
		scanf("%d", & gg);
		if(gg>0 && gg<10)
		{
			gotoxy(1,6);
			printf("0%d/../....                                                                          ",gg);
		}
		
		}while(gg<1 || gg>31 );
		
		
	do{
		gotoxy(4,6);
		printf("../....                                                                               ");
		gotoxy(4,6);
		scanf("%d", &mm);
		if(mm>0 && mm<10)
		{
			gotoxy(4,6);
			printf("0%d/....                                                                          ",mm);
		}
		
		}while(mm<1 || mm>12);
		
		
	do{
		gotoxy(7,6);
		printf("....                                                                               ");
		gotoxy(7,6);
		scanf("%d", & aaaa);
		
		}while(aaaa<1900 || aaaa>2050);
	
	/*if(mm>0 && mm<10)
	{
	gotoxy(4,6);
	printf("0%d/../....                                                                          ",mm);
	}
	*/	
		contrbi1=aaaa%4;
		if(contrbi1==0)
		{
		Mesi[1]=29;
		}
		else
		{
		Mesi[1]=28;
		}
		
		if(Mesi[1]==28)	
		{
		contrbi2=aaaa%100;
		if(contrbi2==0)
		{
			contrbi3=aaaa%400;
			if(contrbi3==0)
			{
			Mesi[1]=29;	
			}
			else
			{
				Mesi[1]=28;
			}
			
		}

		}
		
		
		
	gotoxy(1,10);
	printf ("inserisci la seconda data");
	gotoxy(1,11);
	printf ("../../....");
	
	do{
		gotoxy(1,11);
		printf("../../....                                                                               ");
		gotoxy(1,11);
		scanf("%d", & GG);
		if(GG>0 && GG<10)
		{
			gotoxy(1,11);
			printf("0%d/../....                                                                          ",GG);
		}
		}while(GG<1 || GG>31 );
		
	do{
		gotoxy(4,11);
		printf("../....                                                                               ");
		gotoxy(4,11);
		scanf("%d", & MM);
		if(MM>0 && MM<10)
		{
			gotoxy(4,11);
			printf("0%d/....                                                                          ",MM);
		}
		
		}while(MM<1 || MM>12);
		
		gotoxy(7,11);
		printf("%d",aaaa); 
		
		Mesi[0]=31;   //Gennaio
		Mesi[2]=31;    //Marzo
		Mesi[3]=30;    //Aprile
		Mesi[4]=31;     //Maggio
		Mesi[5]=30;     //Giugno
		Mesi[6]=31;     //Luglio
		Mesi[7]=31;     //Agosto 
		Mesi[8]=30;       //Settembre
		Mesi[9]=31;       //Ottobre
		Mesi[10]=30;       //Novembre
		Mesi[11]=31;        //Dicembre
		
		Differenza=SMM=Smm=save=0;
		
		if(gg>GG)
		{
			save=gg;
			gg=GG;
			GG=save;    //GG + grande
		}
		
		if(mm==MM)
		{
			if(GG>gg){Differenza=GG-gg;}
			if(GG<gg){Differenza=gg-GG;}
			if(GG==gg){Differenza=0;}
		
		}
		
		else{
		
			if(mm>MM)
			{
				save=mm;
				mm=MM;
				MM=save;    //MM + grande
			}
			
			
			SMM=MM-1;  //secondo mese   10
			Smm=mm-1;  //primo mese   9
			
			for(i=Smm, c=gg; i<SMM; i++)   //i=9 c=1 9<10,          //i=10    10<10
			{
				
				if(i!=SMM)       //9 è diverso da 10 quindi
				{
				
				
				do{
				c++;                    //c che parte da 1 arriva fino al 31 dopodichè esce
				}while(c<Mesi[i]);
				
				}
				
				Differenza=Differenza+c;    //31
				c=0;
			}
			
			if(i==SMM)
			{
			
				do{
				c++;
				}while(c<GG);
				
			}
			
			Differenza=Differenza+c;
			
			}
			
		
		printf("\n\n\n La differenza di giorni tra le due date indicate %c di %d giorni!",130,Differenza);
		
		
			
		
		fflush(stdin);                              //ripetizione del programma
		do{
			printf("\n\nSE VUOI RIPETERE IL PROGRAMMA PREMI 'S'\n\nSE VUOI TERMINARE PREMI 'N'\n\n ");
			fflush(stdin);
			scanf("%c",& risp);
		} while(risp!='S' && risp!='s' && risp!='N' && risp!='n');
		
	}while(risp=='S' || risp=='s');               //fine ripetizione del programma
	system("PAUSE");                             //aspetta la pressione di un tasto per terminare il programma
}

