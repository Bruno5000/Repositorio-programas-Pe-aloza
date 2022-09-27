#include<stdio.h>

int main()
{
	int t_archivo, per_pixel;
	int uno=0000;
	int dos=0000;

	scanf_s("%i",&t_archivo);
	scanf_s("%i",&per_pixel);
	
	printf("BM%08X%04X%04X%08X",t_archivo, uno, dos, per_pixel);

	return 0;
}