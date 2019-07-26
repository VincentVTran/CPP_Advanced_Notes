#include "pch.h"
#include <iostream>

void pointerTest() {

	//To check memory, go to debug -> window -> memory 
	int var = 8;
	int* pointer = &var; //Stores var memory location into pointer (Type allows pointer to know how many bit of data is needed) (00 00 00 00) = 4 bit
	*pointer = 10; //Changes memory location data to integer value of 10 
}

void creatingSpaceWPointer() {
	char* string = new char[8]; //Allocating 8 bit of data for string (char = 1 bit of data)
	memset(string, 0, 8); //Setting memory location "String" with value of 0, 8 bits (00 00 00 00 00 00 00 00)
	delete[] string; 
	char** pointer = &string; //Pointer on the pointer (Grabs string memory address)
}