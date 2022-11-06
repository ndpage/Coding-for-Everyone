
//including header files
#include <stdio.h>
#include <stdio.h>
#include <malloc.h>

double avg(int ro,int co, int mate[ro][co])
{
	int x,y;
	double summ=0.0;
	for(x=0;x<ro;x++)
		for(y=0;y<col;y++)
			sum+=mate[x][y];
	return(summ/1000);
}

int main()
{
	int k,l,m=50,n=20;
	int** mate=malloc(m*sizeof(int*));
	for (k=0;k<m;++k)
		mate[k]=malloc(m*sizeof(int));
	FILE *file;
	file=fopen("data.txt","r");

	for (k=0,k<1000,k++)
	{
		for (l=0,l<n,l++)
		{
			if (!fscanf(file,"%d",&mate[k][l]);
			break;
			printf("%d \t",mate[k][l]);
			if(l==n-1)
			{
				printf("\n\n");
			}
			printf("Average of elephant seal is %.2f \n\n",avg(m,n,mate));
			}
		}
	}
	fclose(file);
	return 0;
}