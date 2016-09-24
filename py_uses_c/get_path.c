#include <stdlib.h>
#include <stdio.h>

#define N 5

void my_path(float x1, float y1, int *size, float **pathX, float **pathY, int **pathAction)
{
	int k;
	float *ptrX, *ptrY;
	int *ptrAction;
	ptrX = (float *)malloc(sizeof(float) * N);
	ptrY = (float *)malloc(sizeof(float) * N);
	ptrAction = (int *)malloc(sizeof(int) * N);
	for(k=0;k<N;k++)
	{
		ptrX[k] = x1 + k*0.5;
		ptrY[k] = y1 - k*0.5;
		ptrAction[k] = 1;
	}
	*size = N;
	*pathX = ptrX;
	*pathY = ptrY;
	*pathAction = ptrAction;
	
	printf("Done\n");
}

void cleanup(float *ptrX, float *ptrY, int *ptrAction)
{
	free(ptrX);
	free(ptrY);
	free(ptrAction);
}
