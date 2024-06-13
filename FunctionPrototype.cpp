#include <iostream>

/*
	If you want to declare a function after the main code, you need to
	type its header because the codes are compiled from top to bottom.
	If the function code is bellow the main it won't be recognized without
	the header.
*/
float Sum(float num1, float num2); // Header of function Sum 

int main() // Main code
{
	std::cout << "100.5 + 500.9 = " << Sum(100.5, 500.9) << "\n";
}

float Sum(float num1, float num2) // Code of function Sum
{
	return (num1 + num2);
}