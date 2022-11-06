#include<stdio.h>

void arrayReadingData(int sizeP, int weightP[]) //array to read in the weight of the elephant seals
{
    
    for(int i = 0; i < sizeP; i++)
    {
        printf("Elephant seal %d weight is: ", i);
        scanf("%d", &weightP[i]);
    }
}

void printArray(const int sizeP, int weightP[])
{
    
    for(int i = 0; i < sizeP; i++)
    {
        printf("%d\n", weightP[i]);
    }
}

int main(void)
{
    
    int size;
    int weight[size];
    printf("How many seals do you want to calculate theaverage weightfor:");
    scanf("%d", &size);

    arrayReadingData(size, weight);
    printArray(size, weight);
}

