#include<stdio.h>
void fun(int var1, int var2)
int main(int argc, char argv[]) {//auto variables

	int var1;//auto variables
	int var2 = 0;//auto variables stored in stack

	fun(var1, var2);//function exit address stored in stack


	return 0;

}