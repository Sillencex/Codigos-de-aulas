#include<stdio.h>
#include<locale.h>
/*Chico tem 1,50 metros e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metros e
cresce 3 cent�metros por ano. Construa um algoritmo que calcule e imprima quantos anos
ser�o necess�rios para que Z� seja maior que Chico. */
main(){
	setlocale(LC_ALL,"");
	float chico = 1.50, ze = 1.10;
	int ano = 1;
	
	while(ze<=chico)
	{
		printf("\naltura de chico = %.2f",chico);
		printf("\naltura de ze = %.2f",ze);
		printf("\nano = %i",ano);
		printf("\n\n");
		chico+=0.02;
		ze+=0.03;
		ano++;
	}
	
	printf("\nVai levar %i anos",ano);
}

