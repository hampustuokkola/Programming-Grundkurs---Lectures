//#include <stdio.h>
//int main()
//{
//	char ch;
//	const char
//		input_file[] = "C:\GitHub Repositories\Programming Grundkurs - Lectures\2018-12-05\2018-12-05\",
//		temp_file[] = "temp.txt";
//	FILE *in = fopen(input_file, "r");
//	FILE *tmp = fopen(temp_file, "w");
//	if (in == NULL) {
//		printf("Could not open input.txt!\n");
//		system("pause");
//		exit(1);
//	}
//	if (tmp == NULL) {
//		printf("Could not open temp.txt!\n");
//		system("pause");
//		exit(1);
//	}
//	double n1, n2, n3, n4, n5;
//	while (fscanf(in, "%lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5) > 0) {
//		fprintf(tmp, "%g %g %g %g %g sum: %g\n", n1, n2, n3, n4, n5, n1 + n2 + n3 + n4 + n5);
//	}
//	fclose(in);
//	fclose(tmp);
//	in = fopen(input_file, "w");
//	tmp = fopen(temp_file, "r");
//	//instead of 4 above lines we could write the following 2 lines:
//	//freopen(input_file, "w", in);
//	//freopen(temp_file, "r", tmp);
//	while ((ch = fgetc(tmp)) != EOF)
//		fputc(ch, in);
//	fclose(in);
//	fclose(tmp);
//	remove(temp_file);
//	system("pause");
//	return 0;
//}