// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//Declaring methods from pointer.cpp
void pointerTest();
void creatingSpaceWPointer();

//Declaring methods from forloop.cpp
void forLoopTest();

//Declaring methods from references.cpp
void testReferences();
void declaringInteger();
void Increment(int& value);

int main()
{
    std::cout << "Hello World!\n"; 

	//______Pointer______________
	//pointerTest();
	//creatingSpaceWPointer();

	//_________Loops______________
	//forLoopTest();

	//________References_____________
	//testReferences();
	declaringInteger();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
