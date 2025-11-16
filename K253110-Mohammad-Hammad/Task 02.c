#include <stdio.h>

void deposit(float *balances, int customer, float amount) {
    *(balances + customer) += amount;
}

void withdraw(float *balances, int customer, float amount) {
    if(*(balances + customer) >= amount)
        *(balances + customer) -= amount;
    else
        printf("Insufficient balance for customer %d!\n", customer + 1);
}

void averageBalance(float *balances, int customers) {
    float total = 0;
    for(int i = 0; i < customers; i++) {
        total += *(balances + i);
    }
    printf("Average Balance : %.2f\n", total/customers);
}

int main() {
    float balances[5] = {1000, 500, 20000, 10000, 2500}, amount;
    int customer, choice;
    printf("Enter '1' to deposit money, or to '2' to withdraw money or '3' to exit : ");
    scanf("%d", &choice);
    while(choice != 3){
	    switch(choice){
			case 1:{
				printf("Enter customer number to deposit [1-5] : ");
			    scanf("%d", &customer);
			    printf("Enter amount to deposit : ");
			    scanf("%f", &amount);
			    deposit(balances, customer - 1, amount);
				break;
			}
			case 2:{
			    printf("Enter customer number to withdraw [1-5]: ");
			    scanf("%d", &customer);
			    printf("Enter amount to withdraw: ");
			    scanf("%f", &amount);
			    withdraw(balances, customer - 1, amount);
				break;
			}
			case 3:{
				break;
			}
			default:{
				printf("Invalid Choice!\n");
				break;
			}
		}
		printf("\nEnter '1' to deposit money, or to '2' to withdraw money or '3' to exit : ");
	   	scanf("%d", &choice);
	}
    printf("\nUpdated balances:\n");
    for(int i = 0; i < 5; i++){
        printf("Customer %d: %.2f\n", i + 1, balances[i]);
    }
    averageBalance(balances, 5);
    return 0;
}

