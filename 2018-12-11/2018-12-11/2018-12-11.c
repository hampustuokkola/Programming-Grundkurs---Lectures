#include <stdio.h>

//void dub(int *x)
//{
//	*x = *x * 2;
//}

int _main() //1.
{
	int *y;
	y = malloc(sizeof(int));
	printf("%d\n", &y);
	//important to free memory when you're done so it doesnt memory leak. ex a while loop with malloc without close
	//would allocate new places of y but never clear the previous places
	free(y);
	printf("Y's position is: %d%d\n", &y);
	system("pause");
	exit(1);
}

//int _main()	//2.
//{
//	printf("kek\n");
//	int i;
//	dub(&i);
//	printf("%d\n", &i);
//}

int main() // 3.
{
	struct Person
	{
		char name[30];
		int age;
		long pers_num;
		char address[80];
	};
	struct Person p1;
}
