#include "Customer.h"
#include <stdio.h>
#include <string.h>

void* safeRealloc(void* base, size_t newByteCount) {
	void* temp = realloc(base, newByteCount);
	if (!temp)
		free(base);
	return temp;
}

void setName(char* input) {

	int physSize = 2, actualSize = 0;
	char* input = (char*)calloc(physSize, sizeof(char));
	char* temp = (char*)calloc(physSize, sizeof(char));
	while (1) {
		scanf("%c", temp);
		if (!*temp)
			break;
		if (physSize == actualSize) {
			physSize *= 2;
			temp = (char*)safeRealloc(temp, physSize * sizeof(char));
		}
		actualSize++;
	}
	*temp=
	input = (char*)safeRealloc(input, 1 + actualSize * sizeof(char));
	input = strcpy(input, temp);
}

void initCustomer(Customer* c){

	printf("what is your first name?");
	char* firstname,lastName;
	setName(firstname);
	setName(lastName);

}
