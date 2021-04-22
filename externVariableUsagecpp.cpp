#include<stdio.h>
#include "ArithmeticOperations.h"
int main(int argc, char* argv) {

	printf("sum(%d,%d):%d", var1, var2, get_sum(var1,var2));
	printf("diff(%d,%d):%d", var1, var2, get_diff(var1, var2));
	printf("prod(%d,%d):%d", var1, var2, get_prod(var1, var2));
	printf("mod(%d,%d):%d", var1, var2, get_mod(var1, var2));
}