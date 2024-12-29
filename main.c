#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>
#include "product.h"

int main()
{
	Product p;
	initProduct(&p);
	printProduct(&p);
}