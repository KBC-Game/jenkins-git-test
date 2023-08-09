#include <stdio.h>
#include "plus_minus.h"
#include "multi_div.h"

// コメント追加
int main(void)
{
	int a, b;

	a = 8;
	b = 4;

	printf("a = %d, b = %d\n\n", a, b);

	printf("a + b = %d\n", plus(a, b));

	printf("a - b = %d\n", minus(a, b));

	printf("a * b = %d\n", multi(a, b));

	printf("a / b = %d\n", div(a, b));

	return 0;
}