#include <stdio.h>
#include "add.h"

int sub(int a, int b);

int main() {

	printf("Hello!\n");

	printf("5 + 6 = %d\n", add(5, 6));
	printf("10 - 6 = %d\n", sub(10, 6));

	return 0;
}

int sub(int a, int b)
{
	return a - b;
}
