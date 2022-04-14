#include<stdio.h>

int main ()
{

	int a;
	int *p;
	a = 10;
	p = &a; //address of a in memory
	printf("a = %d\n",a);
	*p = 14; //dereferencing
	printf("a = %d\n",a);
}