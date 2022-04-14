 #include<stdio.h>

int main () {

	int a;
	int *p;
	a =10;
	p = &a; //&a => address of a
	printf("%d\n",p);
	printf("%d\n",*p); //*p => value at address pointes by p
	printf("%d\n", &a);
}