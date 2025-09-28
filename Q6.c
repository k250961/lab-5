//Question 6: Bitwise Logic Puzzle (Case)
//A computer engineer is teaching students how bitwise operators work in C.
//The expression given is:
//(a & b) | (a ^ b)
//The program should:
//
//1. Show step-by-step evaluation of the expression.
//2. Display binary values for each operation (&, ^, |).
//3. Prove the final result with one numeric example.

#include <stdio.h>


void printBinary(int n) {
	int i;
    for (i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
}

int main(void)
{
    int a, b, c, d, e;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    
    printf("\na = %d, Binary: ", a);
    printBinary(a);
    printf("\n");

    printf("b = %d, Binary: ", b);
    printBinary(b);
    printf("\n");

    
    c = a & b;
    printf("\nStep 1: (a & b) = %d, Binary: ", c);
    printBinary(c);
    printf("\n");

  
    d = a ^ b;
    printf("Step 2: (a ^ b) = %d, Binary: ", d);
    printBinary(d);
    printf("\n");

  
    e = c | d;
    printf("Step 3: (a & b) | (a ^ b) = %d, Binary: ", e);
    printBinary(e);
    printf("\n");


    printf("\nDirect Expression (a & b) | (a ^ b) = %d\n", (a & b) | (a ^ b));

    return 0;
}

