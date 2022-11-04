
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>

double Avg(int *p , int sz)
{
	int i = 0;
	double sum = 0;
	for (i = 0; i < sz; i++)
	{
		sum = sum + *(p+i);
	}
	return sum / sz;
}

int main()
{
	FILE* fp = fopen("elephant_seal_data.txt", "r");
	if (fp == NULL)
		return 0;
	else
	{
		int* p = (int*)malloc(2*sizeof(int));
		if (p == NULL)
		{
			printf("%s\n", strerror(errno));
		}
		else
		{
			int num = 0;
			int i = 0;
			double avg = 0;
			int sz = 0;
			int c = 0;
			while ((c = fgetc(fp)) != EOF)
			{
				if (i == 0)
				{
					rewind(fp);
				}
				fscanf(fp, "%d", &num);
				*(p + i) = num;
				i++;
				int* p2 = (int*)realloc(p, (i + 1) * sizeof(int));
				if (p2 != NULL)
				{
					p = p2;
				}
			}
			int* p2 = (int*)realloc(p, (i) * sizeof(int));
			if (p2 != NULL)
			{
				p = p2;
			}
			avg = Avg(p, i);
			printf("avg = %lf\n", avg);
			printf("sample number is %d\n", i);
			free(p);
			p = NULL;
		}
	}
	fclose(fp);
	fp = NULL;
	return 0;
}