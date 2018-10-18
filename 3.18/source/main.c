#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float sells, salary;
	while(1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &sells);
		if (sells == -1)
			break;
		salary = sells * 0.09 + 200;
		printf("Salary is %.2f\n", salary);
	}
	system("pause");
	return 0;
}