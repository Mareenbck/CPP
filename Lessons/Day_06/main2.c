#include <stdio.h>

int main(void)
{
	float a = 420.042f;

	void *b = &a;
	void *c = (void *)&a;

	void *d = &a;
	int *e = d;
	int *f = (int *)d;

	printf("%p, %f\n", &a, a);
	printf("%p\n", b);
	printf("%p\n", c);
	printf("%p\n", d);
	printf("%p, %d\n", e, *e);
	printf("%p, %d\n", f, *f);

	return 0;
}
