/* 
 * Copyright 2022 Cristovão Lima
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
	
	char arr[5] = {9, 2, 1, 4, 6};
	
	int i, mediana = 0;
	
	for(i = 0; i < 5; i++){
		if(arr[i] < arr[i + 1]){
			mediana = arr[i];
		}
	}
	 
	
	printf("Mediana = %d\n\n", mediana);
		
	
	system("PAUSE");
	return 0;
}

