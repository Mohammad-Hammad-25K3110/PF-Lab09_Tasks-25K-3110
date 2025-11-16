#include <stdio.h>

int main(){
	int search, rows, cols;
	printf("Enter number of rows: ");
	scanf("%d", &rows);
	printf("Enter number of columns: ");
	scanf("%d", &cols);
	
	int arr[rows][cols];
	printf("Enter %d elements:\n", rows * cols);
	for(int i = 0; i < rows; i++){
	    for(int j = 0; j < cols; j++){
	        scanf("%d", &arr[i][j]);
	    }
	}
	
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
