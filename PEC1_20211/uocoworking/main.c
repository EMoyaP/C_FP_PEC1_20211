/*
*Author: Eugenio Moya
*Date: 24/09/2021
*Descripción: PEC1 2021 1
*Proyectn: UOCoworking
*/

/* System header files */
#include <stdio.h>
#include <stdbool.h>

/* User defined types */
typedef enum {STARTUPS, FREELANCERS, RURAL, SPECIALIZED, GENERALIST} typeCenter;

/* Main function */
int main() {

	/* Declaracition of variables */
	int id;
	typeCenter type;
	int category;
	int spaces;
	float price;
	float distanceFromCityCenter;
	bool kitchen;
	bool auditory;
	float occupation;
	
	/* Data input */
	printf("INPUT DATA\n");
	printf("ID? (AN INTEGER) >>\n");
	scanf("%d", &id);
	printf("CATEGORY? (AN INTEGER) >>\n");
	scanf("%d", &category);
	printf("SPACES? (AN INTEGER) >>\n");
	scanf("%d", &spaces);
	printf("PRICE [EUR]? (A REAL) >>\n");
	scanf("%f", &price);
	printf("DISTANCE FROM CITY CENTER [KM]? (A REAL) >>\n");
	scanf("%f", &distanceFromCityCenter);
	printf("OCCUPATION [PERCENT]? (A REAL) >>\n");
	scanf("%f", &occupation);
	
	/* Data output*/
	printf("RESULTS\n");
	printf("ID: %d\n", id);
	printf("CATEGORY: %d\n", category);
	printf("SPACES: %d\n", spaces);
	printf("PRICE [EUR]: %.2f\n", price); 
	printf("DISTANCE FROM CITY CENTER [KM]: %.2f\n", distanceFromCityCenter);
	printf("OCCUPATION [PERCENT]: %.2f\n", occupation);
	
	return 0;
	}


