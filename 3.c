#include <stdio.h>

int main(){

	char arr[5];

	printf("\n\tInput the five chars:  ");
	scanf("%s", arr);

	int size = sizeof(arr) / sizeof(char) -1;
	

	while (size >= 0){
			
		printf("\t%c", arr[size]);
		--size;
	}
	printf("\n");
}
