#include <stdio.h>

int main(){


	char arr[10];
	int i = 0;
	int count = 0;
	printf("\n\tInput the chars array: ");
	scanf(" %s", arr);

	while (arr[i] != '\0'){

		if (arr[i] > 47 && arr[i] < 58){

			printf("\n\t%c\n", arr[i]);
			++count;
		}
		++i;
	}
	if (count == 0){
	
		printf("\n\tThere is no number axper jan !!!\n");
	}
//	printf("%s", arr);


}

