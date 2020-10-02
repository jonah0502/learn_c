// HelloC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//--------- Hello world starts here -----------
//	printf("Hello World");
	//------- Basic IO starts here ------

	char username[256]; // up to 255 chars
	int userAge = 0;
	printf("enter your name followed by your age\n");
	scanf("%s %d", username, &userAge); // expecting sting then decimal / & is used to pass age by reference so it can be modified () name is already an array so it is already an adress
	printf("hello %s. %d is a great age!", username, userAge); // not changeing varibale just reading from them
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
