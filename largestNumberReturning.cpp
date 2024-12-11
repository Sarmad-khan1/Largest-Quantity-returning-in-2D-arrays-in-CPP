#include <iostream>
using namespace std;
int largestquant(int cars[5][5]);
int main()
{
	int cars[5][5] =
		{
			{12, 13, 941, 51, 15},
			{11, 2, 3, 5, 6},
			{1, 2, 3, 4, 5},
			{6, 77, 8, 9, 10},
			{11, 22, 4, 55, 0}};

	int largestCarsQuantity = largestquant(cars);
	cout << largestCarsQuantity << endl;

	return 0;
}
int largestquant(int cars[5][5])
{
	int max = cars[0][0];
	for (int row = 0; row < 5; row++)
	{
		for (int col = 0; col < 5; col++)
		{
			if (max < cars[row][col])
			{
				max = cars[row][col];
			}
		}
	}
	return max;
}