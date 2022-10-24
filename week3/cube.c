#include <stdio.h>

double cube(double value){
	return value*value*value;
}

int main(){
	double val;
	
	printf("Enter value to calculate cube: ");
	scanf("%lf", &val);

	printf("\nCube of %lf is %lf\n", val,cube(val));
	return 0;
}
