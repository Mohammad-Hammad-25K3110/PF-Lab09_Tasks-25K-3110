#include <stdio.h>

int main(){
	int search;
	//creating 2d array of 3x5
	int arr[3][5] = {{1,2,3,4,5},	
					{6,7,8,9,10},
					{11,12,13,14,15}};
	printf("Enter Number to search in 2d array : ");
	scanf("%d", &search);
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 5; j++){
			if(*(*(arr+i) + j) == search){
				printf("%d found at row %d and column %d", search, i + 1, j + 1);
			}
		}
	}
}
