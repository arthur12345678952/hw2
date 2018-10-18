#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float principal, rate, days, charge;
	while (1)
	{
		printf("Enter loan principle (-1 to end):");
		scanf_s("%f", &principal);
		if (principal == -1)
			break;
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the laon in days: ");
		scanf_s("%f", &days);
		charge = principal * rate*days / 365;
		printf("The interest charge is $%.2f", charge);
		printf("\n");
		printf("\n");
	}
	
	system("pause");
	return 0;
}