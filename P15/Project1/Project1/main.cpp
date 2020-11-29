#include<stdio.h>
#define SIZE 10

int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

void swap(int *eP, int*e2P) {
	int hold = *eP;
	*eP = *e2P;
	*e2P = hold;
}

void bs(int * const array, const int size) {
	for (int i = 0; i < (size - 1);  i++) {
		
		for (int j = 0; j < (size - 1); j++) {
			if (array[j] > array[j + 1]) swap(&array[j], &array[j + 1]);
		}
	}
}



int main(void) {
	printf("Data items in orginal order\n");
	for (int i = 0; i < SIZE; i++) printf("%4d", a[i]);

	bs(a, SIZE);
	printf("\nData items in ascending order\n");

	for (int i = 0; i < SIZE; i++) printf("%4d", a[i]);
	
	return 0;
}