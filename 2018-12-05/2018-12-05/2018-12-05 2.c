#include <stdio.h>

int main()
{
	int *y; //*y is a pointer variable, = variable that contains an adress in memory
	int i;
	int *p = NULL; //always declare pointer as NULL in initialize so it wont point to a random location in memory
	p = &i; //Now p and i are pointing at the same adress
	*p = 6; //Changing the value of where pointer p is pointing
	printf("%d", i);

	double x;
	double *d = NULL;

	y = x + 2;
	y = *d + 2; // with * it becomes a "normal" variable to where it points
	// *d = content of d


	// *d = 56; is not possible
	//malloc(number_of_bytes);
	//malloc(5); //It passes this to the memory management system and tries to find 5 free byte next to eachother.
			   //will return the adress of the first byte

	d = malloc(sizeof(double));
	if (d == NULL)
	{
		puts("Memory couldnt be allocated");
		exit(1);
	}
	*d = 56
	


	double ch;
	printf("%p", &ch);
	printf("\n\n");
	system("pause");
	return 0;

}