#include<stdio.h>
int main()
{
	int score, sum[5] = { 0 }, max = 0, winner;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf_s("%d", &score);
			sum[i] += score;
		}
	}

	max = sum[0];
	for (int i = 0; i < 5; i++)
	{
		if (sum[i] >= max)
		{
			max = sum[i];
			winner = i + 1;
		}
	}
	printf("%d %d", winner, max);
}