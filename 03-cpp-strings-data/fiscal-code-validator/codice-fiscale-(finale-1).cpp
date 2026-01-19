#include<conio2.h>
#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main()
{
	int const DIM=80;
	char cognome[DIM], nome[DIM], Cognome[DIM], Nome[DIM], lnascita[DIM], Lnascita[DIM], sesso, risp, Codice[DIM];
	char Conscognome[DIM], Voccognome[DIM], Consnome[DIM], Vocnome[DIM];
	int Cin[20];
	int n,k,h,d,u,r1,r2, SM[DIM];	
	int Cognerror, i, nccognome, Nomerror, ncnome, ncnascita, Nascerror, Strangerror;
	int G,M, A, GF, Errore, j, cvocali, cconsonanti, f, CIN, ncpari, ncdispari;
	
	//Strangerror=0;
do{
	risp=sesso=Cognerror=nccognome=Nomerror=ncnome=ncnascita=Nascerror=G=M=A=GF=Errore=0;   //Inizializzazione di tutte le variabili
		
	system("CLS");

	textcolor(11); gotoxy(33,2); printf("CODICE FISCALE");
	
	textcolor(15);
	gotoxy(3,5);	printf("COGNOME  ..............................");
	gotoxy(3,7);	printf("NOME     ..............................");
	gotoxy(3,9);	printf("DATA DI ");
	gotoxy(3,10);	printf("NASCITA  ..............................");
	gotoxy(3,12);	printf("SESSO    .  (M/F)");
	gotoxy(3,14);	printf("CODICE DEL LUOGO DI");
	gotoxy(3,15);	printf("NASCITA  ..............................");


/*if(Strangerror==1)     //Per fermare l'errore nella ripetizione leagto al gets
{
	do{
		gets(AIUTO);
	}while(Errore==1);
}*/


//////////////////////////	COGNOME	
	do{
		gotoxy(60,5);printf("                      ");
		
		textcolor(10); gotoxy(3,5); printf("COGNOME  ..............................");
		 gotoxy(12,5); fflush (stdin); textcolor(15);gets(cognome);
		
		nccognome=strlen(cognome);
		
		for(i=0; i<nccognome; i++)
		{
		Cognome[i]=toupper(cognome[i]);
		}
		Cognome[i]='\0';
		
		for(i=0, Cognerror=0; i<nccognome && Cognerror==0; i++)
		{
			if(Cognome[i]>='A' && Cognome[i]<='Z' || Cognome[i] == 39 || Cognome[i] == ' ')
		 {
		 	Cognerror=0;
		 }
		 else
		 {
		 	Cognerror=1;
		 	textcolor(12); gotoxy(60,5); printf("Cognome errato!!");
		 }
		}
		
	 
	}while(Cognerror==1);
	gotoxy(12+nccognome,5); printf("                                ");
	gotoxy(12,5); puts(Cognome);
	
	
//////////////////////////NOME	
	
	do{
		gotoxy(60,7);printf("                      ");
		
		 textcolor(10);gotoxy(3,7);	printf("NOME     ..............................");
		 textcolor(15);gotoxy(12,7); gets(nome);
		
		ncnome=strlen(nome);
		
		for(i=0; i<ncnome; i++)
		{
		Nome[i]=toupper(nome[i]);
		}
		Nome[i]='\0';
		
		for(i=0, Nomerror=0; i<ncnome && Nomerror==0; i++)
		{
			if(Nome[i]>='A' && Nome[i]<='Z' || Nome[i] == 39 || Nome[i] == ' ')
		 {
		 	Nomerror=0;
		 }
		 else
		 {
		 	Nomerror=1;
		 	textcolor(12); gotoxy(60,7); printf("Nome errato!!");
		 }
		}
		
	 
	}while(Nomerror==1);
	
	gotoxy(12,7); puts(Nome);
	gotoxy(12+ncnome,7); printf("                                        ");		
	
	
	
	do{         // rimmissione della data se è errata
       	
		   gotoxy(50,10); printf("                              ");
		   
       	textcolor(10); gotoxy(3,9);	printf("DATA DI ");
		gotoxy(3,10);	printf("NASCITA  ../../....");
       	textcolor(15);
        do{
          gotoxy(12,10);
          printf("../../....                    ");
          gotoxy(12,10);
          scanf("%d", &G);
        }while(G<1||G>31);
       
        if(G>=1 && G<=9)
	    {
         gotoxy(12,10);
         printf("0");
         printf("%d", G);
	    }

       do{
          gotoxy(14,10);
          printf("/../....                    ");
          gotoxy(15,10);
          scanf("%d", &M);
       }while(M<1||M>12);
	   
       if(M>=1 && M<=9)
	   {
         gotoxy(15,10);
         printf("0");
         printf("%d", M);
	   }
	   
       do{
       	  gotoxy(17,10);
          printf("/....                    ");
          gotoxy(18,10);
          scanf("%d", &A);
       }while(A<1000||A>2050);
       
       GF=28;
       Errore=0;
       
        if((M==4||M==6||M==9||M==11)&&(G>30))
        {
         Errore=1;
        }
        else
        {
         if((M==2)&&(((A%4==0)&&(A%100!=0))||(A%400==0)))
          {
           GF=29;
          }
         if(M==2&&G>GF)
          {
           Errore=1;
          }
        }
        // per i mesi 1 o 3 o 5 o 7 o 8 o 10 o 12 non si ha bisogno di
        // controllare il giorno perche' si e' gia' controllato che
        // G non sia maggiore di 31
       
       if(Errore==1)
        {
        textcolor(12); gotoxy(50,10); printf("Data non valida!!!");
        }
        //gotoxy(5,17);
        //getch();

    	}while(Errore==1);
    
   
    
    
	do{
		gotoxy(1,12);	printf("                                                            ");
		textcolor(10);
	     gotoxy(3,12);	printf("SESSO    .  (M/F)");
	     fflush(stdin);
	     textcolor(15);
	     scanf("%c", &sesso);
		 gotoxy(12,12);
	}while(sesso != 'm' && sesso != 'M' && sesso != 'f' && sesso != 'F');
	    
	  if(sesso =='m' || sesso =='M') 
	  {gotoxy(12,12); printf("M");}
	  
	  if(sesso =='f' || sesso =='F') 
	  {gotoxy(12,12); printf("F");}
	 
	 gotoxy(15,12); printf("                                           ");
	 
	 
	do{
		gotoxy(60,15); printf("                             ");		
		textcolor(10); gotoxy(3,14);	printf("CODICE DEL LUOGO DI");
					   gotoxy(3,15);	printf("NASCITA  ..............................");
    
		textcolor(15); 
		gotoxy(12,15); gets(lnascita); //gets(lnascita);
		
		ncnascita=strlen(lnascita);
		//lnascita[ncnascita]='\0';
		
		for(i=0; i<ncnascita; i++)
		{
		Lnascita[i]=toupper(lnascita[i]);
		}
		Lnascita[i]='\0';
		
		for(i=0, Nascerror=0; i<ncnascita && Nascerror==0; i++)
		{
			if(Lnascita[i]>='A' && Lnascita[i]<='Z' || Lnascita[i] == 39 || Lnascita[i] == ' ' || Lnascita[i]>='0' && Lnascita[i]<='9')
		 {
		 	Nascerror=0;
		 }
		 else
		 {
		 	Nascerror=1;
		 	textcolor(12); gotoxy(60,15); printf("Luogo di nascita errato!!");
		 }
		}
		
	 
	}while(Nascerror==1);
	
	gotoxy(12,15); puts(Lnascita);
	gotoxy(12+ncnascita,15); printf("                                ");
	  
	  
	  
///////////////////////////Elimizaione degli Spazi e degli Apostrofi

		  for(i=0, j=0; i<nccognome; j++, i++) //cognome
		  {
		  	cognome[i] = Cognome[j]; 
		  	if(cognome[i] == 39 || cognome[i] == ' ')
			  {
			  	i--;
			  }
		  }
		  nccognome=strlen(cognome); //ricalcolo lunghezza del cognome 

		  for(i=0, j=0; i<ncnome; j++, i++)  //nome
		  {
		  	nome[i] = Nome[j]; 
		  	if(nome[i] == 39 || nome[i] == ' ')
			  {
			  	i--;
			  }
		  }
		  ncnome=strlen(nome);  //ricalcolo lunghezza del nome
		  
		  for(i=0, j=0; i<ncnascita; j++, i++)  //data di nascita
		  {
		  	lnascita[i] = Lnascita[j]; 
		  	if(lnascita[i] == 39 || lnascita[i] == ' ')
			  {
			  	i--;
			  }
		  }
		  ncnascita=strlen(lnascita);  //ricalcolo lunghezza del luogo di nascita
		  
		  
		  
		  
		  
		  
///////////////////Creazione stringa consonanti del COGNOME		  
		for(i=0, cconsonanti=0; i<nccognome; i++)
		{  
	        if(cognome[i]=='B' || cognome[i]=='C' || cognome[i]=='D' || cognome[i]=='F' || cognome[i]=='G' || cognome[i]=='H' || cognome[i]=='J' || cognome[i]=='K' || cognome[i]=='L' || cognome[i]=='M' || cognome[i]=='N' || cognome[i]=='P' || cognome[i]=='Q' || cognome[i]=='R' || cognome[i]=='S' || cognome[i]=='T' || cognome[i]=='V' || cognome[i]=='W' || cognome[i]=='X' || cognome[i]=='Y' || cognome[i]=='Z')
			{
		        Conscognome[cconsonanti]=cognome[i];
		        cconsonanti++;
	        }
   		}
   		Conscognome[cconsonanti]='\0';
   	//	gotoxy(3,25); puts(Conscognome);
   		
///////////////////Creazione stringa vocali del COGNOME		     		
   		for(i=0, cvocali=0; i<nccognome; i++)
		{  
	        if(cognome[i]=='A' || cognome[i]=='E' || cognome[i]=='I' || cognome[i]=='O' || cognome[i]=='U')			
			{
		        Voccognome[cvocali]=cognome[i];
		        cvocali++;
	        }
   		}
   		Voccognome[cvocali]='\0';
   	//	gotoxy(3,27); puts(Voccognome);
   		
   	//	getch();getch();getch();


/////////////////////////////////////////////////////////////CODIFICATORE DEL COGNOME///////////////////////////////////////////////  		
 
		if(nccognome>0 && nccognome<3)  //se il cognome ha meno di 3 lettere
		{
			if(nccognome==1)
			{	Codice[0]=cognome[0];
				Codice[1]='X';
				Codice[2]='X';			
			}
			if(nccognome==2)
			{	Codice[0]=cognome[0];
				Codice[1]=cognome[1];
				Codice[2]='X';
			}
		}
		else
		{
	   		if(cconsonanti>=3)
	   		{
	   			for(i=0; i<3; i++)
			   	{
			   	Codice[i]=Conscognome[i];
	   			}
			}
			if(cconsonanti<3)
			{
				if(cconsonanti==1)
				{
					Codice[0]=Conscognome[0];
					Codice[1]=Voccognome[0];
					Codice[2]=Voccognome[1];
				}
				if(cconsonanti==2)
				{
					Codice[0]=Conscognome[0];
					Codice[1]=Conscognome[1];
					Codice[2]=Voccognome[0];
				}
			}
		}
   		
   		
   		
   		
   		   		
///////////////////Creazione stringa consonanti del NOME		  
		for(i=0, cconsonanti=0; i<ncnome; i++)
		{  
	        if(nome[i]=='B' || nome[i]=='C' || nome[i]=='D' || nome[i]=='F' || nome[i]=='G' || nome[i]=='H' || nome[i]=='J' || nome[i]=='K' || nome[i]=='L' || nome[i]=='M' || nome[i]=='N' || nome[i]=='P' || nome[i]=='Q' || nome[i]=='R' || nome[i]=='S' || nome[i]=='T' || nome[i]=='V' || nome[i]=='W' || nome[i]=='X' || nome[i]=='Y' || nome[i]=='Z')
			{
		        Consnome[cconsonanti]=nome[i];
		        cconsonanti++;
	        }
   		}
   		Consnome[cconsonanti]='\0';
   		//gotoxy(3,35); puts(Consnome);
   		
///////////////////Creazione stringa vocali del NOME		     		
   		for(i=0, cvocali=0; i<ncnome; i++)
		{  
	        if(nome[i]=='A' || nome[i]=='E' || nome[i]=='I' || nome[i]=='O' || nome[i]=='U')			
			{
		        Vocnome[cvocali]=nome[i];
		        cvocali++;
	        }
   		}
   		Vocnome[cvocali]='\0';
   		//gotoxy(3,37); puts(Vocnome);
   		
   		//getch();getch();getch();   		
   		

				
/////////////////////////////////////////////////////////////CODIFICATORE DEL NOME///////////////////////////////////////////////  		
 
		if(ncnome>0 && ncnome<3)  //se il nome ha meno di 3 lettere
		{
			if(ncnome==1)
			{	Codice[3]=nome[0];
				Codice[4]='X';
				Codice[5]='X';			
			}
			if(ncnome==2)
			{	Codice[3]=nome[0];
				Codice[4]=nome[1];
				Codice[5]='X';
			}
		}
		else
		{
			if(cconsonanti>=4)
			{
				Codice[3]=Consnome[0];
				Codice[4]=Consnome[2];
				Codice[5]=Consnome[3];
			}
			else //se le consonanti sono <4
			{
				if(cconsonanti==3)
				{
					for(f=3, i=0; i<3; i++, f++)
				   	{
				   	Codice[f]=Consnome[i];
		   			}
	   			}
	   			if(cconsonanti==2)
				{
					Codice[3]=Consnome[0];
					Codice[4]=Consnome[1];
					Codice[5]=Vocnome[0];
				}
	   			
				if(cconsonanti==1)
				{
					Codice[3]=Conscognome[0];
					Codice[4]=Vocnome[0];
					Codice[5]=Vocnome[1];
				}		
			}
		}
		
			
			
		
/////////////////////////////////////////////////////////////CODIFICATORE DELL'ANNO///////////////////////////////////////////////  		

		d=0;
		u=0;
		k=A/1000;
    	r1=A%1000;
    	h=r1/100;
    	r2=r1%100;
   	 	d=r2/10;
   	 	u=r2%10;
   	 	SM[0]=d;
   	 	SM[1]=u;
   	 	if(d==0) {Codice[6]=48;}
   	 	if(d==1) {Codice[6]=49;}
   	 	if(d==2) {Codice[6]=50;}
   	 	if(d==3) {Codice[6]=51;}
   	 	if(d==4) {Codice[6]=52;}
   	 	if(d==5) {Codice[6]=53;}
   	 	if(d==6) {Codice[6]=54;}
   	 	if(d==7) {Codice[6]=55;}
   	 	if(d==8) {Codice[6]=56;}
   	 	if(d==9) {Codice[6]=57;}
   	 	if(u==0) {Codice[7]=48;}
   	 	if(u==1) {Codice[7]=49;}
   	 	if(u==2) {Codice[7]=50;}
   	 	if(u==3) {Codice[7]=51;}
   	 	if(u==4) {Codice[7]=52;}
   	 	if(u==5) {Codice[7]=53;}
   	 	if(u==6) {Codice[7]=54;}
   	 	if(u==7) {Codice[7]=55;}
   	 	if(u==8) {Codice[7]=56;}
   	 	if(u==9) {Codice[7]=57;}
   	 	//Codice[6]=d;
   	 	//Codice[7]=u;
		//printf("%d , %d",d,u );
		
   	//	getch();getch();getch();
		
/////////////////////////////////////////////////////////////CODIFICATORE DELL'ANNO///////////////////////////////////////////////  		
	
	if(M==1) {Codice[8]='A';}
	if(M==2) {Codice[8]='B';}
	if(M==3) {Codice[8]='C';}
	if(M==4) {Codice[8]='D';}
	if(M==5) {Codice[8]='E';}
	if(M==6) {Codice[8]='H';}
	if(M==7) {Codice[8]='L';}
	if(M==8) {Codice[8]='M';}
	if(M==9) {Codice[8]='P';}
	if(M==10) {Codice[8]='R';}
	if(M==11) {Codice[8]='S';}
	if(M==12) {Codice[8]='T';}
	
	
/////////////////////////////////////////////////////////////CODIFICATORE DEL GIORNO DI NASCITA+SESSO///////////////////////////////////////////////  		


	if(sesso =='m' || sesso =='M') 
	{
		d=G/10;
		u=G%10;
		Codice[9]=d;
		Codice[10]=u;
		if(d==0) {Codice[9]=48;}
	   	 	if(d==1) {Codice[9]=49;}
	   	 	if(d==2) {Codice[9]=50;}
	   	 	if(d==3) {Codice[9]=51;}
	   	 	if(d==4) {Codice[9]=52;}
	   	 	if(d==5) {Codice[9]=53;}
	   	 	if(d==6) {Codice[9]=54;}
	   	 	if(d==7) {Codice[9]=55;}
	   	 	if(d==8) {Codice[9]=56;}
	   	 	if(d==9) {Codice[9]=57;}
	   	 	if(u==0) {Codice[10]=48;}
	   	 	if(u==1) {Codice[10]=49;}
	   	 	if(u==2) {Codice[10]=50;}
	   	 	if(u==3) {Codice[10]=51;}
	   	 	if(u==4) {Codice[10]=52;}
	   	 	if(u==5) {Codice[10]=53;}
	   	 	if(u==6) {Codice[10]=54;}
	   	 	if(u==7) {Codice[10]=55;}
	   	 	if(u==8) {Codice[10]=56;}
	   	 	if(u==9) {Codice[10]=57;}
/*		if(G>9)
		{
			Codice[9]=d;
			Codice[10]=u;
		}
		if(G<10)
		{
			Codice[9]=0;
			Codice[10]=u;
		} */
	  	
	}
	else
	{
		if(sesso =='f' || sesso =='F') 
		{
			G=G+40;
			d=G/10;
			u=G%10;
			if(d==0) {Codice[9]=48;}
	   	 	if(d==1) {Codice[9]=49;}
	   	 	if(d==2) {Codice[9]=50;}
	   	 	if(d==3) {Codice[9]=51;}
	   	 	if(d==4) {Codice[9]=52;}
	   	 	if(d==5) {Codice[9]=53;}
	   	 	if(d==6) {Codice[9]=54;}
	   	 	if(d==7) {Codice[9]=55;}
	   	 	if(d==8) {Codice[9]=56;}
	   	 	if(d==9) {Codice[9]=57;}
	   	 	if(u==0) {Codice[10]=48;}
	   	 	if(u==1) {Codice[10]=49;}
	   	 	if(u==2) {Codice[10]=50;}
	   	 	if(u==3) {Codice[10]=51;}
	   	 	if(u==4) {Codice[10]=52;}
	   	 	if(u==5) {Codice[10]=53;}
	   	 	if(u==6) {Codice[10]=54;}
	   	 	if(u==7) {Codice[10]=55;}
	   	 	if(u==8) {Codice[10]=56;}
	   	 	if(u==9) {Codice[10]=57;}
			//Codice[9]=d;
			//Codice[10]=u;
		}
	}
	
// LUOGO DI NASCITA *****************************************************************************
//do{
	Codice[11]=lnascita[0];
	Codice[12]=lnascita[1];
	Codice[13]=lnascita[2];
	Codice[14]=lnascita[3];
//	}while(Codice[11])




//                                                 CALCOLO DI CIN
for(i=1, ncpari=0, ncdispari=0; i<16; i++)            //dovrebbe arrivare a 15 ma poichè i è inizializzato a 1 arriva a 16
		{
            if(i%2==0)       //se è pari
			{
				ncpari++;        
                switch(Codice[i-1])                    //codice di posizione i-1, quindi all'inizio 0
				{    
                    case '0':Cin[i-1]=0; break;
                    case '1':Cin[i-1]=1; break;
                    case '2':Cin[i-1]=2; break;
                    case '3':Cin[i-1]=3; break;          
                    case '4':Cin[i-1]=4; break;
                    case '5':Cin[i-1]=5; break;          
                    case '6':Cin[i-1]=6; break;
                    case '7':Cin[i-1]=7; break;          
                    case '8':Cin[i-1]=8; break;
                    case '9':Cin[i-1]=9; break;          
                    case 'A':Cin[i-1]=0; break;
                    case 'B':Cin[i-1]=1; break;          
                    case 'C':Cin[i-1]=2; break;
                    case 'D':Cin[i-1]=3; break;          
                    case 'E':Cin[i-1]=4; break;
                    case 'F':Cin[i-1]=5; break;          
                    case 'G':Cin[i-1]=6; break;
                    case 'H':Cin[i-1]=7; break;
                    case 'I':Cin[i-1]=8; break;
                    case 'J':Cin[i-1]=9; break;
                    case 'K':Cin[i-1]=10; break;
                    case 'L':Cin[i-1]=11; break;         
                    case 'M':Cin[i-1]=12; break;
                    case 'N':Cin[i-1]=13; break;         
                    case 'O':Cin[i-1]=14; break;
                    case 'P':Cin[i-1]=15; break;         
                    case 'Q':Cin[i-1]=16; break;
                    case 'R':Cin[i-1]=17; break;         
                    case 'S':Cin[i-1]=18; break;
                    case 'T':Cin[i-1]=19; break;         
                    case 'U':Cin[i-1]=20; break;
                    case 'V':Cin[i-1]=21; break;         
                    case 'W':Cin[i-1]=22; break;
                    case 'X':Cin[i-1]=23; break;         
                    case 'Y':Cin[i-1]=24; break;
                    case 'Z':Cin[i-1]=25; 
                }
            }
			else
			{
				ncdispari++;
                switch(Codice[i-1]){
                    case '0':Cin[i-1]=1; break;
                    case '1':Cin[i-1]=0; break;
                    case '2':Cin[i-1]=5; break;
                    case '3':Cin[i-1]=7; break;          
                    case '4':Cin[i-1]=9; break;
                    case '5':Cin[i-1]=13; break;         
                    case '6':Cin[i-1]=15; break;
                    case '7':Cin[i-1]=17; break;         
                    case '8':Cin[i-1]=19; break;
                    case '9':Cin[i-1]=21; break;         
                    case 'A':Cin[i-1]=1; break;
                    case 'B':Cin[i-1]=0; break;          
                    case 'C':Cin[i-1]=5; break;
                    case 'D':Cin[i-1]=7; break;          
                    case 'E':Cin[i-1]=9; break;
                    case 'F':Cin[i-1]=13; break;         
                    case 'G':Cin[i-1]=15; break;
                    case 'H':Cin[i-1]=17; break;
                    case 'I':Cin[i-1]=19; break;
                    case 'J':Cin[i-1]=21; break;
                    case 'K':Cin[i-1]=2; break;
                    case 'L':Cin[i-1]=4; break;          
                    case 'M':Cin[i-1]=18; break;
                    case 'N':Cin[i-1]=20; break;         
                    case 'O':Cin[i-1]=11; break;
                    case 'P':Cin[i-1]=3; break;          
                    case 'Q':Cin[i-1]=6; break;
                    case 'R':Cin[i-1]=8; break;          
                    case 'S':Cin[i-1]=12; break;
                    case 'T':Cin[i-1]=14; break;         
                    case 'U':Cin[i-1]=16; break;
                    case 'V':Cin[i-1]=10; break;         
                    case 'W':Cin[i-1]=22; break;
                    case 'X':Cin[i-1]=25; break;         
                    case 'Y':Cin[i-1]=24; break;
                    case 'Z':Cin[i-1]=23; 
                }
            }
        }
        
         for(CIN=i=0;i<15;i++)       
         {
            CIN=CIN+Cin[i];
		 }
    	CIN=CIN%26;         //calcolo di CIN
   	
//                                                         CODIFICA DI CIN    	
    	switch(CIN)
		{
            case 0:Codice[15]='A';       break;
            case 1:Codice[15]='B';       break;
            case 2:Codice[15]='C';       break;
            case 3:Codice[15]='D';       break;
            case 4:Codice[15]='E';       break;
            case 5:Codice[15]='F';       break;
            case 6:Codice[15]='G';       break;
            case 7:Codice[15]='H';       break;
            case 8:Codice[15]='I';       break;
            case 9:Codice[15]='J';       break;
            case 10:Codice[15]='K';      break;
            case 11:Codice[15]='L';      break;
            case 12:Codice[15]='M';      break;
            case 13:Codice[15]='N';      break;
            case 14:Codice[15]='O';      break; 
            case 15:Codice[15]='P';      break;
            case 16:Codice[15]='Q';      break;
            case 17:Codice[15]='R';      break;
            case 18:Codice[15]='S';      break;
            case 19:Codice[15]='T';      break;
            case 20:Codice[15]='U';      break;
            case 21:Codice[15]='V';      break;
            case 22:Codice[15]='W';      break;
            case 23:Codice[15]='X';      break;
            case 24:Codice[15]='Y';      break;
            case 25:Codice[15]='Z';      
        }
        	Codice[16]='\0';
	   		textcolor(11); gotoxy(3,20); printf("Il tuo codice fiscale %c",130 );  textcolor(6); printf(" --> ");
			textcolor(9); puts(Codice);
	   		
	   		getch();

			fflush(stdin);                              //ripetizione del programma
		do{
			gotoxy(1,23);
			printf("SE VUOI RIPETERE IL PROGRAMMA PREMI 'S'\n\nSE VUOI TERMINARE PREMI 'N'\n\n --> ");
			fflush(stdin);
			scanf("%c",& risp);
		} while(risp!='S' && risp!='s' && risp!='N' && risp!='n');
		
	}while(risp=='S' || risp=='s');               //fine ripetizione del programma
}

