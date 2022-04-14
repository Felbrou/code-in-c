#include <stdio.h>
int main()
{
	int a;
	int *p;
	p = &a; //address of a
	printf("%d\n",p);
	printf("%d\n",*p);// *p - value at address pointed by p
}