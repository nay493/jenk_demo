#include<stdio.h>

int add() {

	int a,b,c,d;
	a=2;
	b=4;
	c = a + b;
	d = a - b;
	printf("addition of %d & %d is %d\n",a,b,c);
	printf("subtraction of %d & %d is %d\n",a,b,d);
	return 0;
}

int main() {
add();
return 0;
}

