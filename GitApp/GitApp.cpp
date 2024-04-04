#include <iostream>
using namespace std;

double add(double a, double b)
{
	return a + b;
}
double subtract(double a, double b) 
{
	return a - b;
}
double divide(double a, double b) 
{
	if (b != 0) 
	{
		return a / b;
	}
	else 
	{
		cerr << "Помилка: Ділення на нуль!" << endl;
		return 0; 
	}
}
double multiply(double a, double b) 
{
	return a * b;
}


int main()
{
	// Some Changes 1
	// Some Changes 2
	// Some Changes 3
	// Some Changes 4
	// Some Changes 5
}


