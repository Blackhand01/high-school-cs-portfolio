#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>
#include<iostream>


int main(){
	
	system("cls");
	
	float x,y;
	
	printf("\n\ninserire il valore dell'asse delle ascisse (x) --->  ");
	scanf("%f",&x);
	printf("\n\ninserire il valore dell'asse delle ordinate (y) ---> ");
	scanf("%f",&y);
	
	if(x>0 && y>0){
	printf("\n\nil punto %c nel primo quadrante\n\n",130);	
	}
	else{
	    if(x<0 && y>0){
	    printf("\n\nil punto %c nel secondo quadrante\n\n",130);
	    }
	else{
	    if(x<0 && y<0 ){
	    printf("\n\nil punto %c nel terzo quadrante\n\n",130);
	    }
	else{
		if(x>0 && y<0){
	    printf("\n\nil punto %c nel quarto quadrante\n\n",130);
		}
	else{
		if(x==0 && y!=0){
	    printf("\n\nil punto %c sull'asse delle ordinate\n\n",130);
		}
	else{
		if(y==0 && x!=0 ){
	    printf("\n\nil punto %c sull'asse delle ascisse\n\n",130);
		}
	else{
		if(y==0 && x==0){
		printf("\n\nil punto %c all' origine degli assi\n\n",130);
	}
	else{
		printf("\n\n        ATTENZIONE!\n\nNON HAI INSERITO VALORI NUMERICI!\n\n");

	}
		
		}
	}
	}
	}	
	}
	}
	system("PAUSE");

	}
