#include<stdio.h>

int b[] = { 10, 20, 30, 40 };
int *bP = b;
int offset;

int main(void) {
	printf("Arrau b printed with :\nArray subcript notation\n");
	for (int i = 0; i < 4; i++) printf("b[%4d] = %d\n", i, b[i]);

	printf("\nPointer/offset notation where\n"
			"the pointer is the array name\n");
	for(offset = 0; offset < 4; offset++)
		printf("*(b + %d) = %d\n", offset, *(b + offset));
	
	printf("\nPointer subscript natation\n");
	for(int i = 0; i < 4; i++)
		printf("bP[%d] = %d\n", i, bP[i]);

	printf("Pointer/offset notation\n");
	for (offset = 0; offset < 4; offset++)
		printf("*(bP + %d) = %d\n", offset, *(bP + offset));

	return 0;
}