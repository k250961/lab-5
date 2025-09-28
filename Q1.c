#include <stdio.h>

int main (void)
{
	char c1, c2, c3;
    int vowels = 0, consonants = 0;

    printf("Enter first character: ");
    scanf(" %c", &c1);

    printf("Enter second character: ");
    scanf(" %c", &c2);

    printf("Enter third character: ");
    scanf(" %c", &c3);
    
    if ((c1>='A' && c1<='Z') || (c1>='a' && c1<='z'))
    {
    	if (c1 == 'A' || c1 == 'E' || c1 == 'I' ||c1 == 'O' ||c1 == 'U' ||c1 == 'a' ||c1 == 'e' ||c1 == 'i' ||c1 == 'o' || c1 == 'u')
    	{
    		vowels++;
		}
		else 
		{
			consonants++;
			
		}
	}
	
	if ((c2 >= 'A' && c2 <= 'Z') || (c2 >= 'a' && c2 <= 'z'))
    {
        if (c2=='A'||c2=='E'||c2=='I'||c2=='O'||c2=='U'||c2=='a'||c2=='e'||c2=='i'||c2=='o'||c2=='u')
        {
        	vowels++;
		}
        else
        {
        	consonants++;
		}
            
    }
    
    if ((c3 >= 'A' && c3 <= 'Z') || (c3 >= 'a' && c3 <= 'z'))
    {
        if (c3=='A'||c3=='E'||c3=='I'||c3=='O'||c3=='U'||c3=='a'||c3=='e'||c3=='i'||c3=='o'||c3=='u')
        {
        	vowels++;
		}
        else
        {
        	consonants++;
		}
    }
    
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    
    return 0;
}
