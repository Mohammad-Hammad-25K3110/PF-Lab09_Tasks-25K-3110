#include <stdio.h>

void printData(void *ptr, char type){
	switch(type){
		case 'i' : printf("%d", *(int*)ptr); break;
		case 'f' : printf("%.2f", *(float*)ptr); break;
		case 'c' : printf("%c", *(char*)ptr); break;
	}
}

int main(){
	//HARD CODING Product ID (int), Price (float), Category code (char)
	int productID = 10;
	float price = 20.5;
	char categoryCode = 'A', type;
	void *ptr;
	printf("Enter 'i' to display to display Product ID or 'f' to display Price or 'c' to display Category Code : ");
	scanf(" %c", &type);
	switch(type){
		case 'i' : printData(&productID, type); break;
		case 'f' : printData(&price, type); break;
		case 'c' : printData(&categoryCode, type); break;
		default: printf("Invalid Input!"); break;
	}
	return 0;
}
