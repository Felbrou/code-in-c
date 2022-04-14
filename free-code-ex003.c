#include<stdio.h>

int main ()
{

	int a; int *p;
	a = 10;
	p = &a; // &a = adress of a

	printf("Address of P is %d\n",p);
	printf("Value at p is %d\n",*p);

	int b = 20;
	*p = b; //the address in p change to point b
	printf("Address of P is %d\n",p);
	printf("Value at p is %d\n",*p);
}