#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float account, begin_balance, charges, credits, limits;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%f", &account);
		if (account == -1)
			break;
		printf("Enter beginning balance: ");
		scanf_s("%f", &begin_balance);
		printf("Enter total charges: ");
		scanf_s("%f", &charges);
		printf("Enter total credits: ");
		scanf_s("%f", &credits);
		printf("Enter credits limit: ");
		scanf_s("%f", &limits);
		if (begin_balance + charges - credits > limits)
		{
			printf("Account:         \%.0f\n", account);
			printf("Credit limit :   \%.2f\n", limits);
			printf("Balance:         \%.2f\n", begin_balance + charges - credits);
			printf("Credit Limit Exceed.\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}