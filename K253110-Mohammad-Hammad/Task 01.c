#include <stdio.h>

void recordStatus(int *wards[3]){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			printf("Enter Status of Ward %d and bed %d : ", i + 1, j + 1);
			scanf("%d", &wards[i][j]);
		}
	}
}

int countOccupied(int *wards[3]){
	int i, j, count = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			if(wards[i][j])count++;
		}
	}
	return count;
}

int countAvailable(int *wards[3]){
	int i, j, count = 0;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			if(!wards[i][j])count++;
		}
	}
	return count;
}

void displayStatus(int *wards[3]){
	int i, j;
	printf("\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			printf("%d ", wards[i][j]);
		}
		printf("\n");
	}
}


int main(){
	int General[5];
	int ICU[5];
	int Private[5];
	int *wards[] = {General, ICU, Private};
	recordStatus(wards);
	int occupied = countOccupied(wards);
	int available = countAvailable(wards);
	displayStatus(wards);
	printf("\nBeds occupied : %d", occupied);
	printf("\nBeds available : %d", available);
	return 0;
}
