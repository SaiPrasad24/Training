#include<stdio.h>

int main(int argc, char *argv[]) {

	static int var1;
	static float var2;
	static char var3;
	static double var4;

	printf("var1:%d \nvar2:%f \nvar3:%c \nvar4:%lf", var1, var2, var3, var4);
	return 0;
}