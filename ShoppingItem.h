#pragma once

typedef struct {
	char* Barcode[7];
	float price;
	int amount;
}
ShoppingItem;

int calculatePrice(ShoppingItem* item);
