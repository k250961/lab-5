//Question 4: Circle Properties (Math Library Case)
//A civil engineer wants a program that can help calculate the properties of a circular water tank.
//The program should:
//Take the radius of the tank from the user.
//Calculate the area (pr²), circumference (2pr), and the square root of the radius using functions from <math.h>.
//Display all results with two decimal places.

#include <stdio.h>
#include <math.h>

int main(void)
{
	float radius;
	
	
	printf("Enter the radius of the circle : ");
	scanf("%f", &radius);
	
	float area = M_PI * pow(radius, 2);
	float circumference = 2 * M_PI * radius;
	
	float sqroot = sqrt(radius);
	
	printf(" Radius : %.2f \n Area : %.2f \n Circumference: %.2f \n Square root of radius: %.2f", radius, area, circumference, sqroot);
	
	
	return 0;
}
