#define _CRT_SECURE_NO_WANINGS
#include <stdio.h>
#include "date.h"

int main()
{
	Date d;
	setDate(&d);
	printf("%d/%d/%d", d.day, d.month, d.year);
}