#include "pch.h"
#include <iostream>

void testReferences() {
	int a = 2;
	int& referenceToA = a; //int& declares reference to A
	referenceToA = 3;
	std::cout << a;
}

//Manipulating across functions through references
void Increment(int& value) { //Recieving memory address
	value++; //Adding to memory address
}

void declaringInteger() {
	int i = 4;
	int& ref = i; //Pointer is holding memory address of i
	Increment(ref); //Passing ememory address along with value
	std::cout << i;
}

/*
________Manipulating across functions through pointer__________
void Increment(int* value) { //Recieving memory address
	(*value)++; //Dereferences the pointer * gets the value from the variable rather then the memory address
}

void declaringInteger() {
	int i = 4;
	int* ptr = i; //Pointer is holding memory address of i
	Increment(ptr); //Passing ememory address along with value
	std::cout << i;
}
*/
