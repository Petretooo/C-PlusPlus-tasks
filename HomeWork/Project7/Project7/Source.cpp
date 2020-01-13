#include<stdio.h>
int main(void)
{
	int n, num;//broi chisla
	int sum = 0;
	int sum1 = 0;
	printf("Vuvedi broi chisla: ");
	scanf("%d", &n);
	for (int i = 1; i <= n * 2; i++)
	{
		printf("Vuvedi chislo: ");
		scanf("%d", &num);
		if (i <= n) {
			sum += num;
		}
		else if (i > n && i <= n * 2) {
			sum1 += num;
		}
	}
	if (sum < sum1)
	{
		printf("Purvata suma e po malka ot vtorata");
	}
	else if (sum > sum1)
	{
		printf("Purvata suma e po golqma ot vtorata");
	}
	else if (sum = sum1)
	{
		printf("Purvata suma e ravna na vtorata");
	}
	return 0;
}
