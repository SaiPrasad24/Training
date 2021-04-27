// Stack always allocates from "Higher address -> Lower address" ==> It will shrink
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    int var1 = 0;
    int var2 = 0;
    int var3 = 0;
    int var4 = 0;
    
    printf("Address of variables\n");
    printf("&var1: 0x%x\n", &var1);
    printf("&var2: 0x%x\n", &var2);
    printf("&var3: 0x%x\n", &var3);
    printf("&var4: 0x%x\n", &var4);
	return 0;
}

//o/p:

/*stack allocates from Higher address -> Lower Address */

/*
Address of variables
&var1: 0x62fe1c
&var2: 0x62fe18
&var3: 0x62fe14
&var4: 0x62fe10
*/

//2. Data segment always allocates from "Lower Address -> Higher address" ==> It will Grow

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
    static int var1 = 0;
    static int var2 = 0;
    static int var3 = 0;
    static int var4 = 0;
    
    printf("Address of variables\n");
    printf("&var1: 0x%x\n", &var1);
    printf("&var2: 0x%x\n", &var2);
    printf("&var3: 0x%x\n", &var3);
    printf("&var4: 0x%x\n", &var4);
	return 0;
}

/*data segment allocates from lower address -> Higher Address */

/*
Address of variables
&var1: 0x407030
&var2: 0x407034
&var3: 0x407038
&var4: 0x40703c
*/

//3. ***********memory allocation for different variables ***************************

#include <stdio.h>
#include <stdlib.h>

int var1; //Global variable, Uninitialized --> BSS segment
int var2 = 10; //Global variable, Initialized --> Data segment
static int var3; //Global static variable, Uninitialized -> BSS segment
static int var4 = 60; //Global static variabel, Initialized --> Data segment

int main(int argc, char *argv[]) 
{
    int var5; //Local variable --> Stack memory
    register int var6; //Local register variable --> General Purpose registers of controller
    static int var7; //Local static variable, Uninitialized --> BSS segment
    static int var8 = 10; //Local static variable, Initialized --> Data segment
    int *ptr = (int *)malloc(sizeof(int)); //Local pointer created in "stack memory" but it points to memory allocated in "Heap memory"
    static int *ptr1 = (int *) malloc(sizeof(int)); //Local pointer created in "data segment" but it points to memory allocated in "Heap memory"
	return 0;
}
