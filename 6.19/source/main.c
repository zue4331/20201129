#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice(void);

int main(void)
{
	int Sums[36000];
	int count_7=0;

	srand(time(NULL));

	for (int i = 0; i < 36000; i++)
	{
		Sums[i] = rollDice();
		if (Sums[i] == 7)
			count_7++;
	}

	for (int i = 0; i < 36000; i++)
	{
		printf("%2d%c", Sums[i],(i+1)%10==0 ? '\n':'\t');
	}
	printf("\n�X�{7������:%d\n", count_7);
	printf("�X�{���Ʊ����`���Y���ƪ��������@�A�X�z\n");
	
	system("pause");
	return 0;
}

int rollDice(void)
{
	int dice1;
	int dice2;
	int Sum;

	dice1 = 1 + (rand() % 6);
	dice2 = 1 + (rand() % 6);
	Sum = dice1 + dice2;

	return Sum;
}