/*
 ============================================================================
 Name        : zad1.c
 Author      : MS
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int zmienna1=125;
char zmienna2='A';
unsigned char zmienna3='Z';
//zmienne wskaznikowe
int *wsk1;
char *wsk2;
unsigned char *wsk3;

int main(void) {
	//przypisanie do wskazników adresów zmiennych
	wsk1=&zmienna1;
	wsk2=&zmienna2;
	wsk3=&zmienna3;
	//wyswietlenie wartości oraz rozmiarów zmiennych
	printf("zmienna1 : rozmiar:  %ld [B] wartość: %d \n",sizeof(zmienna1),zmienna1);
	printf("zmienna2 : rozmiar:  %ld [B] wartość: %c\n",sizeof(zmienna2),zmienna2);
	printf("zmienna3 : rozmiar:  %ld [B] wartość: %c\n",sizeof(zmienna3),zmienna3);
	printf("wsk1 : rozmiar:  %ld [B] wartość: %X \n",sizeof(wsk1),wsk1);
	printf("wsk2 : rozmiar:  %ld [B] wartość: %X\n",sizeof(wsk2),wsk2);
	printf("wsk3 : rozmiar:  %ld [B] wartość: %X\n",sizeof(wsk3),wsk3);
	//przypisanie wartości przez wskażnik
	*wsk1=256;
	*wsk2='N';
	*wsk3='J';
	printf("\n----Wartosci zmienione przez wskaznik---- \n\n");
	printf("zmienna1 : rozmiar:  %ld [B] wartość: %d \n",sizeof(zmienna1),zmienna1);
	printf("zmienna2 : rozmiar:  %ld [B] wartość: %c\n",sizeof(zmienna2),zmienna2);
	printf("zmienna3 : rozmiar:  %ld [B] wartość: %c\n",sizeof(zmienna3),zmienna3);
	printf("wsk1 : rozmiar:  %ld [B] wartość: %X \n",sizeof(wsk1),wsk1);
	printf("wsk2 : rozmiar:  %ld [B] wartość: %X\n",sizeof(wsk2),wsk2);
	printf("wsk3 : rozmiar:  %ld [B] wartość: %X\n",sizeof(wsk3),wsk3);
	return EXIT_SUCCESS;
}

/* bez względu na jaką wartość wskazuje wskaźnik zawsze zajmuje tyle samo miejsca 8B */
