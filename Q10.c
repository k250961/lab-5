//Question 10:
//The city traffic department has noticed that many drivers are confused about what to do at traffic signals during the night. To improve road safety, they want to develop a program that guides drivers based on the traffic signal colorand time of day. The system should follow these rules: ? If the signal is ‘R’ (Red) and the time is before 22:00, display “Stop and wait”.
//SAIRA AYUB 17? If the signal is ‘R’ (Red) and the time is 22:00 or later, display “Stop, but night caution allowed”. ? If the signal is ‘Y’ (Yellow), display “Get Ready”. ? If the signal is ‘G’ (Green), display “Go”. ? If the input signal is any other character, display “Invalid Signal”. Write a C program to implement this case 

#include <stdio.h>
int main (void)
{
	char signal;
	int time;
	
	printf("Enter signal: ");
	scanf(" %c", &signal);
	
	printf("Enter time: ");
	scanf("%d", &time);
	
	if ((signal == 'R' || signal == 'r') && time < 22)
	{
		printf("Stop and wait");
	}
	else if ((signal == 'R' || signal == 'r') && time >= 22)
	{
		printf("Stop, but night caution allowed");
	}
	else if (signal == 'Y' || signal == 'y')
	{
		printf("Get ready");
		
	}
	else if (signal == 'G' || signal == 'g')
	{
		printf("Go");
		
	}
	else 
	{
		printf("Invalid Signal");
	}
}
