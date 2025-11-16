#include <stdio.h>

void inputAttendance(int attendance[4][5]){
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 5; j++){
			printf("Enter attendance status of student %d in class %d : ", i + 1, j + 1);
			scanf("%d", &attendance[i][j]);
		}
		printf("\n");
	}
}

void checkAttendance(int attendance[4][5]){
	for(int i = 0; i < 4; i++){
		int present = 0;
		for(int j = 0; j < 5; j++){
			if(*(*(attendance + i) + j) == 1) present++;
		}
		if(((float)present/5) < 0.75) printf("Student %d has attendance below 75%.\nAttendance : %.2f\n", i + 1,((float)present/5)*100);
	}
}

int main(){
	int attendance[4][5];
	inputAttendance(attendance);
	checkAttendance(attendance);
	return 0;
}
