#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int num, i, score[88] = {0},temp,best=0,worst=0,max=100,min=0;
	printf("Enter num of student:\n");
	scanf_s("%d", &num);
	for (i = 0; i < num; i++)
	{
		scanf_s("%d", &score[i]);
	}
	for (i = 0; i < num; i++)
	{
		for (int j = 0; j < (num-1) - i; j++)
		{
			if (score[j]>score[j+1])
			{
				temp = score[j+1];
				score[j + 1] = score[j];
				score[j] = temp;
			}
		}
	}
	printf("[");
	for (int i = 0; i < num; i++)
	{
		printf("%d,", score[i]);
	}
	printf("\b]");
	for (int i = 0; i < num; i++)
	{
		if (score[i]>=60)
		{
			best++;
			if (score[i]<max)
			{
				max = score[i];
			}
		}
		if (score[i] < 60)
		{
			worst++;
			min = score[i];
		}
	}
	if ( min == 0)
	{
		printf("\nbest case");
	}
	if (min != 0)
	{
		printf("\n%d", min);
	}
	if (max == 100)
	{
		printf("\nworst case");
	}
	if (max != 100)
	{
		printf("\n%d", max);
	}
	printf("\n");
	system("pause");
	return 0;
}
