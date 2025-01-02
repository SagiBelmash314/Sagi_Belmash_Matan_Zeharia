#include <stdio.h>
#include <string.h>
#include "Customer.h"
#include "General.h"

#define MAX_LEN 255

void getNameFromUser(char* name) {
	/*
	int physSize = 2, actualSize = 0;
	input = (char*)calloc(physSize, sizeof(char));
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
	*/
	
	char temp[MAX_LEN];
	fgets(temp, MAX_LEN + 1, stdin);
	clearBuffer(temp);
	
	input = (char*)safeRealloc(input, 1 + actualSize * sizeof(char));
	input = strcpy(input, temp);
}

void initCustomer(Customer* c){
	char* firstname,lastName;
	printf("what is your first name?\n");
	setName(firstname);
	printf("what is your last name?\n");
	setName(lastName);

}
