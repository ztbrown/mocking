#include <stdlib.h>
#include <stdio.h>

static char *p;

void *__wrap_malloc(int size) {
	printf("I AM A MOCK (of malloc)!\n");

	return p;
}

void __wrap_free(void *p) {
	printf("I AM A MOCK (of free)!\n");
}

int main() {

	printf("Hello Max Gains!\n");

	char *a = malloc(100);

	free(a);

	return 0;
}
