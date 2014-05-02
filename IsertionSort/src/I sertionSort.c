/*
 ============================================================================
 Name        : I.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void InsertionSort(int *a, int n);

int main(void) {

	int a[100], i;
	void InsertionSort(int *arr, int n);
	int n;

	setbuf(stdout, NULL);

	printf("Enter number of elements : \n");
	scanf("%d",&n);

	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}

	InsertionSort(a, n);

	for(i = 0; i < n; i ++){
		printf("%d\t",a[i]);
	}



	return EXIT_SUCCESS;
}

void InsertionSort(int *a, int n){

	int current = 0, hold, walker;

	for( ; current < n; current++){

		hold = a[current];

		walker = current;

		for( ; walker > 0 && hold < a[walker - 1]; walker--){
			a[walker] = a[walker -1];
		}

		a[walker] = hold;

	}

}
