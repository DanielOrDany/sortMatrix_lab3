#include <stdio.h>
#include <math.h>

int g_mean(int array[5][5]);
void Old_a(int array[5][5]);
void New_a(int array[5][5]);
double a_mean(double ret);

int main() {
	int Array[5][5] = {
		{66,21,-3,-1,90},
	    {1,74,-2,80,-1},
	    {10,30,20,-50,91},
	    {2,4,5,81,0},
	    {33,69,-5,51,24}
	};

	Old_a(Array);
	New_a(Array);
	a_mean(g_mean(Array));
	system("pause");
}

int g_mean(int array[5][5]) {
	double Ret = 0;
	for (int i = 0; i < 5; i++) {
		int g_m = 1;

		for (int g = 0; g < 5; g++) {
			g_m = g_m * (array[i][g]);
		}

		double po = 0.0;

		if (g_m>=0) {
			po = pow(g_m*1.0, 0.2);
		}
		else {
			po = pow(fabs(g_m)*1.0, 0.2);
			po = (-1)*po;
		}

		printf("\n%d ", i+1);
		printf("GM: %f\n",  po);

		Ret = Ret + po;
		
	}
	printf("\n\n");
	return Ret;
}

double a_mean(double ret) {
	ret = ret / 5.0;
	printf("AM: %f \n\n", ret);
}

void Old_a(int array[5][5]) {
	printf("OLD ARRAY: \n\n");
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
}

void New_a(int array[5][5]) {
	int i, k, j, c;
	for (j = 0; j < 5; j++)
	{
		for (k = 5 - 1; k >= 0; k--)
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
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}

}