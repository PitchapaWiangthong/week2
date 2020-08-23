#include<stdio.h>
#include<math.h>
int main3()
{
	float a, b, sum, ans;
	scanf_s("%f %f", &a, &b);
	sum = (a * a) + (b * b);
	ans = sqrt(sum);
	printf("%f", ans);
	return 0;
}