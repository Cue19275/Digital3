/*
 ============================================================================
 Name        : LAB2CODE.c
 Author      : Carlos Cuellar
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	for (int i =1; i<=20; i++){
	printf("%d\n", i);
	fflush(stdout);
	sleep(1);

	}
	printf("El programa ha terminado");
	return 0;
}
