#include <stdio.h>

int main(){

	int arr[5];
	int i = 0;
	printf("\n\tInput five numbers: ");
	while (i < 5){
	
	scanf(" %d", &arr[i]);
	++i;
	}
	i = 0;
	while (i < 5){
	
	printf("\tarr[%d] = %d\n", i, arr[i]);
	++i;

	}

}
