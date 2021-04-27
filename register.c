include <stdio.h>
void fun(int var) 
{
    int sum = 0;
    sum = sum + var;
    printf("When var is %d, sume is %d\n", var, sum);
}//sum will not retain its value because it will be removed from "stack" memory every time when function execution over

int main(int argc, char *argv[]) //auto variables
{
    register int i = 0;
    for (; i < 5; i++)
    {
        fun(i);
    }
    return 0;
} 

/* Since registers are limited numbers in microcontroller, the number of register variables declared must be limited
If we declare more variables than available number of registers - automatically variables moved to "Stack" memory

Note:
-----
- The address of registers can't used because they are stored in "General purpose registers"
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char *argv[]) 
{
	register int var = 0;
	printf("Enter value of var\n");
	scanf("%d", &var);  !!!ERROR
	return 0;
}
*/
