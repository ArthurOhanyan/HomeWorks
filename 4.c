#include <stdio.h>

int main(){

	int input = 0;
	printf("\n\tInput the number: ");
	scanf("%d", &input);
	
	for (int i = 0; i < input; ++i){
	

	for (int j = 0; j < input; ++j){
		
		if (i == 0 || i == input-1){
		
		printf("* ");
		
		} else {
		
		if(j == 0 || j == input-1){
		
		printf("* ");

		}else {
		
		printf("  ");
		}
		
		}
			
	}
	printf("\n");
	}
}
