//Question 5: Largest of Three Numbers (Ternary Operator Case)
//You are developing a program for a teacher who wants to quickly find the highest marks among three students. The teacher inputs the marks of three students, and the system should print the largest mark using nested ternary operators only.

#include <stdio.h>

int main(void)
{
	int a, b , c;
	
	printf("Enter student 1 marks: ");
	scanf("%d",&a);
	printf("Enter student 2 marks: ");
	scanf("%d",&b);
	printf("Enter student 3 marks: ");
	scanf("%d",&c);
	
	(a>b && a>c)? printf("Student 1 has highest marks %d",a) : (b>a && b>c)?  printf("Student 2 has highest marks %d",b):  printf("Student 3 has highest marks %d",c);
	return 0;
}
