#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{

	int size = 5;
	int sum = 0;
	int sum1 = 0;
	int arr[size][size];
	srand(time(NULL));
	for(int i = 0; i < size ; ++i)
	{
		for(int j = 0; j < size; ++j)
		{
			arr[i][j] = random() % 6;
			printf("%d ", arr[i][j]);

		}
		sum += arr[i][i];
		sum1 += arr[i][size - 1 - i];
		printf("\n");
		
	}
	printf("\tThe sum of general ankyunagic: %d\n", sum);
	printf("\tThe sum of ojandak ankyunagic: %d\n", sum1);


}
