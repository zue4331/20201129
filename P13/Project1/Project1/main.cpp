#include<stdio.h>

void c(int &a) {
	a = a * a * a;
}
int n = 5;

int main(void) {
	printf("The original value of number is %d\n", n);
	c(n);

	printf("The new value of number is %d\n", n);
	return 0;
}