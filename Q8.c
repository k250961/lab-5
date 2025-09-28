//Question 8:
//Restaurant Management System (Coffee Shop Scenario)
//A local restaurant wants to automate its ordering process. The restaurant has three sections: Coffee Shop, Burger Hub, Ice Cream Parlour. ? If a customer chooses Burger Hub or Ice Cream Parlour, the system should simply display a message that their order will be handled by that section. ? If the customer chooses Coffee Shop, then the system should:
//1. Ask the customer to choose a coffee size (Small, Medium, Large).
//2. Ask how many coffees they want. If the number is greater than 1, show "Check our combo offers!".3. Apply combo offers where applicable.
//4. Ask for coffee type (Regular, Cappuccino, Latte).
//5. Display the final bill. Write a C program to implement this case 


#include <stdio.h>

int main(void)
{	
	char section, size, type;
	int quantity;
	float price = 0 , total = 0;
	
	printf("WELCOME TO OUR RESTAURANT\n");	
	printf("Choose any one section (C = Coffee Shop, B = Burger Hub, I = Ice Cream Parlour):  ");
	scanf(" %c", &section);
	
	if (section == 'B' || section == 'b')
	{
		printf("Your order will be handled by Burger Hub.");
				
	}
	else if(section == 'I' || section == 'i')
	{
		printf("Your order will be handled by Ice cream Parlour.");
	}
	else 
	{
		printf("Enter coffee size (S = Small, M = Medium, L = Large): ");
		scanf(" %c", &size);
		
		if (size == 'S' || size == 's')
		{
            price = 150;
        }
		else if (size == 'M' || size == 'm') 
		{
            price = 250;
        } 
		else if (size == 'L' || size == 'l') 
		{
            price = 350;
        } 
		else 
		{
            printf("Invalid size.\n");
            
            return 0;
        }
		
		printf("How many coffees you want? ");
		scanf("%d", &quantity);
		
		if (quantity>1)
		{
			printf("Check out our combo offers\n");
			
			total = (price*quantity) * 0.9;
		}
		else 
		{
			total = (price*quantity);
			
		}
		
		printf("Enter coffee type (R = Regular, C= Cappuccino, L = Latte): ");
		scanf(" %c", &type);
		
		if (type == 'R' || type == 'r') 
		{
            printf("Coffee Type: Regular\n");
        } 
		else if (type == 'C' || type == 'c') 
		{
            printf("Coffee Type: Cappuccino\n");
        } 
		else if (type == 'L' || type == 'l') 
		{
            printf("Coffee Type: Latte\n");
        } else 
		{
            printf("Invalid coffee type.\n");
            return 0;
        }
        
        printf("Total Bill: Rs %.2f\n", total);
		
		
	}
	
	
	
	return 0;
}
