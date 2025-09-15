//Question 2:
//Write a C program using nested ternary operators only.
//Number Classification
//A teacher wants a program to classify an integer entered by the user:
//If the number is divisible by 2 ? display "Even".
//Else if divisible by 3 ? display "Divisible by 3".
//Otherwise ? display "Odd and not divisible by 3".


#include <stdio.h>

int main (void)
{
	int a;
	
	printf("Enter a number");
	scanf("%d", &a);
	
	(a%2 == 0)? (printf("Even")): (a%3 == 0)? (printf("Divisible by 3")): (printf("Odd and not divisible by 3"));
	return 0;
}
