#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void srtingReverse(const char* const sPtr);

int main(void)
{
	char string1[SIZE];

	printf("Please enter a string:\n");
	scanf_s("%s", &string1,SIZE);
	srtingReverse(string1);
	printf("\n");
	system("pause");
	return 0;
}

void srtingReverse(const char* const sPtr)
{
	if ('\0' == sPtr[0])
	{
		return;
	}
	else
	{
		srtingReverse(&sPtr[1]);
		printf("%c", sPtr[0]);
	}
		
}