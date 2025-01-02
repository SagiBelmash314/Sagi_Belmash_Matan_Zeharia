#pragma once
#include "ShoppingItem.h"

typedef struct {
	ShoppingItem** itemList;
	int totalAmount;
}ShoppingCart;

void initCart(ShoppingCart* cart);
void addItem(ShoppingItem** item, ShoppingCart * cart);
int calculateTotal(ShoppingCart * cart);
