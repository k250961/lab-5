//Question 7:
//An online examination portal wants to ensure only eligible students can appear in the final exam. The eligibility
//criteria are as follows: ? First, ask the student for their attendance percentage.
//o If attendance is less than 75%, the student is not eligible.
//o Otherwise, continue. ? Next, ask the student if they have cleared the midterm exam (P for Pass, F for Fail).
//o If failed, the student is not eligible.
//o If passed, continue. ? Finally, ask the student if they have paid the exam fee (Y for Yes, N for No).
//o If yes, display "You are eligible for the Final Exam".
//o If no, display "Please clear your dues to appear in the Final Exam".
//Write down the C code to implement the above 


#include <stdio.h>

int main (void)
{
	float percentage;
	char midexam, fee;
	
	printf("Enter your attendance percentage: ");
	scanf("%f", &percentage);
	
	if (percentage<75)
	{
		printf("You are not eligible for the test");
		
	}
	else
	{
		printf("Have you cleared the midterm exam?(P/F): ");
		scanf(" %c", &midexam);
		
		if (midexam == 'F' || midexam == 'f')
		{
			printf("You are not eligible for the test");
			
			
		}
		else 
		{
			printf("Have you paid the exam fee? (Y/N): ");
			scanf(" %c", &fee);
			
			if (fee == 'Y' || fee == 'y')
			{
				printf("You are eligible for the test");
				
			}
			else 
			{
				printf("Please clear your dues to appear in the Final Exam");
			}
			
		}
	 }
	 return 0;
	
}
