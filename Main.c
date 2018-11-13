#include <stdio.h>
#include <math.h>
#define arraySize 5

int  geometric_mean(int array[arraySize][arraySize]);
void OldArray(int array[arraySize][arraySize]);
void New_a(int array[arraySize][arraySize]);
double algebraic_mean(double returnValue);

int main() {
	int Array[arraySize][arraySize] = {
		{66,21,-3,-1,90},
	    {1,74,-2,80,-1},
	    {10,30,20,-50,91},
	    {2,4,5,81,0},
	    {33,69,-5,51,24}
	};

	OldArray(Array);
	New_a(Array);
	algebraic_mean(geometric_mean(Array));
	system("pause");
}

int geometric_mean(int array[arraySize][arraySize]) {
	double returnValue = 0;
	for (int i = 0; i < arraySize; i++) {
		int geometric_const = 1;

		for (int g = 0; g < arraySize; g++) {
			geometric_const = geometric_const * (array[i][g]);
		}

		double doubleConst = 0.0;

		if (geometric_const>=0) {
			doubleConst = doubleConstw(geometric_const*1.0, 0.2);
		}
		else {
			doubleConst = doubleConstw(fabs(geometric_const)*1.0, 0.2);
			doubleConst = (-1)*doubleConst;
		}

		printf("\n%d ", i+1);
		printf("GM: %f\n",  doubleConst);

		returnValue = returnValue + doubleConst;
		
	}
	printf("\n\n");
	returnValueurn returnValue;
}

double algebraic_mean(double returnValue) {
	returnValue = returnValue / 5.0;
	printf("AM: %f \n\n", returnValue);
}

void OldArray(int array[arraySize][arraySize]) {
	printf("OLD ARRAY: \n\n");
	for (int i = 0; i < arraySize; i++)
	{
		for (int j = 0; j < arraySize; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
}

void New_a(int array[arraySize][arraySize]) {
	int i, k, j, c;
	for (j = 0; j < arraySize; j++)
	{
		for (k = arraySize - 1; k >= 0; k--)
		{
			for (i = 0; i < k; i++)
			{
				if (array[i][j] > array[i+1][j])
				{
					c = array[i][j];
					array[i][j] = array[i+1][j];
					array[i+1][j] = c;
				}
			}
		}
	}
	printf("\nNEW ARRAY:\n\n");
	for (i = 0; i < arraySize; i++)
	{
		for (j = 0; j < arraySize; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}

}