#include <stdio.h>

void inputScore(int score[11]){
	for(int i = 0; i < 11; i++){
		printf("Enter Score of Player %d : ", i + 1);
		scanf("%d", &score[i]);
	}
}

void totalAndAverage(int score[11], int *total, float *average){
	*total = 0; *average = 0;
	for(int i = 0; i < 11; i++){
		*total += *(score + i);
	}
	*average = (float)*total/11;
}

void highestScorer(int score[11]){
	int high = score[0], index = 0;
	for(int i = 1; i < 11; i++){
		if(*(score + i) > high) {
			high = score[i];
			index = i;
		}
	}
	printf("Player %d scored the highest score of %d\n", index + 1, high);
}

int main(){
	int score[11], total;
	float average;
	inputScore(score);
	totalAndAverage(score, &total, &average);
	printf("Total runs score by 11 players : %d\n", total);
	printf("Average runs score by 11 players : %.2f\n", average);
	highestScorer(score);
	return 0;
}


