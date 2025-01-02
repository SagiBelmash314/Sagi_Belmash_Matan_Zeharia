#pragma once
#include "ShoppingCart.h"
#include "General.h"
#define ID_LEN 9

typedef struct
{
	char* ID[ID_LEN + 1];
	char* Name;
	ShoppingCart cart;
} Customer;