//Question 3: Operator Precedence (Expression Evaluation Case)
//A mathematics tutor wants to demonstrate how operator precedence works in C programming.
//The tutor uses the following expression:
//x + y * z > 10 && x - z < y || !(y % z)
//The system should evaluate this expression step by step without running the program.
//The output must show:
//1. The order of evaluation according to C operator precedence.
//2. Intermediate values of each subexpression.
//3. The final result (0 or 1).
//Write a C program that evaluates the above expression (hardcoded).

#include <stdio.h>

int main (void)
{
	int x = 0, y = 5, z= 2, s1, s2, s3, s4, s5, s6, s7, s8, s9;
	
	printf("Expression to evaluate:\n");
    printf("  x + y * z > 10 && x - z < y || !(y %% z)\n\n");
    printf("Hardcoded values: x = %d, y = %d, z = %d\n\n", x, y, z);
	
	s1= y*z;
	printf("Step 1: y*z= %d\n", s1);
	
	
	s2= x+s1;
	printf("Step 2: x + y * z= %d\n", s2);
	
	s3= (s2>10);
	printf("Step 3: x + y * z > 10 = %d\n", s3);
	
	s4= x-z;
	printf("Step 4: x - z = %d\n", s4);
	
	s5= s4<y;
	printf("Step 5: x - z < y = %d\n", s5);
	
	s6= s3 && s5;
	printf("Step 6: x + y * z > 10 && x - z < y = %d\n", s6);
	
	s7= y%z;
	printf("Step 7: (y %% z)= %d\n", s7);
	
	s8 = !s7;
	printf("Step 8: !(y %% z) = %d\n", s8);
	
	s9= s6 || s8;
	printf("Step 9 : x + y * z > 10 && x - z < y || !(y %% z) = %d || %d = %d\n", s6, s8, s9);
	
	printf("Final Result: %d", s9);
	
	return 0;
	
}
