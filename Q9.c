//Question 9:
//An ATM asks the user for a 4-digit PIN. If the PIN is correct, ask for withdrawal amount. If the withdrawal amount is greater than the balance, display Insufficient Balance, otherwise deduct and show remaining balance. Write a C
//program for this case.

#include <stdio.h>

int main (void)
{
	int pin, correctPIN = 1234;
	float withdrawlAmount, totalAmount = 100000;
	
	printf("Enter 4 digit PIN: ");
	scanf("%i", &pin);
	
	if (pin != correctPIN)
	{
		printf("Incorrect PIN");
		
	}
	else 
	{
		printf("Enter withdrawl amount: ");
		scanf("%f", &withdrawlAmount);
		
		if (withdrawlAmount> totalAmount)
		{
			printf("Insufficient Balance");
		}
		else 
		{
			totalAmount = totalAmount - withdrawlAmount;
			printf("Remaining balance: Rs %.2f", totalAmount);
		}
		
	
	}
	return 0;
}
