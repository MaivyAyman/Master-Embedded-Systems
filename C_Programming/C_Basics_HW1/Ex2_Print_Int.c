/*
 * main.c
 *
 *  Created on: Oct 30, 2024
 *      Author: Maivy Ayman
 */

#include "stdio.h"

void main() {
	int num;
	printf("Enter an integer :");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &num);
	printf("\nYou entered: %d ", num);

}

