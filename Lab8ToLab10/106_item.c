/* Q. 106. Program to read details of an item and calculate its amount and display
Author : Sohan */
#include <stdio.h>
struct item {
	char name[80];
	int quantity;
	int price;
	int amount;
};
void readItem(struct item);
int main() {
	struct item i;
	readItem(i);
	return 0;
}
void readItem(struct item i) {
	printf("Enter item name : ");
	scanf("%s", i.name);
	printf("Enter quantity : ");
	scanf("%d", &i.quantity);
	printf("Enter price : ");
	scanf("%d", &i.price);
	i.amount = i.quantity * i.price;
	printf("\nItem name = %s\n", i.name);
	printf("Quantity = %d\n", i.quantity);
	printf("Price = %d\n", i.price);
	printf("Amount = %d\n", i.amount);
}
