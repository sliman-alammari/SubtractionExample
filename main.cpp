#include<iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int Subtract(int firstNumber, int secondNumber)
{
	return firstNumber - secondNumber;
}

int Multiply(int firstNumber, int secondNumber)
{
	return firstNumber * secondNumber;
}

int main() {
   
	cout << "\n\nCalculater Application\n\n";

	int a, b;
	
	cout << "Add 2+4 = " << add(2, 4) << endl;

	cout << "10 - 4 = " << Subtract(10, 4) << '\n';

	cout << "10 * 4 = " << Multiply(10, 4) << '\n';

	return 0;
}