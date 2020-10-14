#include <string.h>
#include <iostream>

using namespace std;
//prototye

//function procedure and sub routines

int addNumbers(int, int);


int main() 
{
	std::cout << addNumbers(3, 8) << endl;
}

int addNumbers(int Number1, int Number2) 
{
	return Number1 + Number2;
}