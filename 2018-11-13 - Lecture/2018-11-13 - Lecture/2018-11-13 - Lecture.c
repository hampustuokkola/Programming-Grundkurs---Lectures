#include <stdio.h>
#include <math.h>

int main()
{

	double x, y;

	printf("Enter a number\n");
	scanf("%lf", &x);

	y = x / 2 + x * 2 - 1;

	printf("y is %lf\n", y);
	printf("The size of x is %d\n", sizeof(x));


	system("pause");

}