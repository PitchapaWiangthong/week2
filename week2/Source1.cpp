#include<stdio.h>
int main()
{
	int num, x = 2;
	scanf_s("%d", &num);
	while (num != 1)
	{
		while (num % x == 0)
		{
			printf("%d ", x);
			num = num / x;
		}
		x++;
	}
	return 0;
}
