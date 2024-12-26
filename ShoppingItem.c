#include "ShoppingItem.h"

int calculatePrice(ShoppingItem* item) {
	return item->amount * item->price;
}