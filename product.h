#pragma once
#include "date.h"

#define MAX_NAME_LEN 20
#define CODE_LEN 7


typedef enum { SH, FZ, FR, FV, NofTypes } Type;
const char* typeTitle[NofTypes];

typedef struct
{
	char name[MAX_NAME_LEN + 1];
	char code[CODE_LEN];
	Type type;
	float price;
	int amount;
	Date* expDate;
} Product;

int initProduct(Product* p);

void printProduct(const Product p);

void freeProduct(Product* p);