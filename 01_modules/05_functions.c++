#include <iostream>
using namespace std;

// Function with no parameters and no return value
void greet()
{
  cout << "Hello, welcome to the C++ function demonstration!" << endl;
}

// Function with parameters (addition of two numbers)
int add(int num1, int num2) { return num1 + num2; }

// Function with return value (multiplication of two numbers)
float multiply(float num1, float num2) { return num1 * num2; }

// Function with default parameter
void printMessage(string message = "No message provided")
{
  cout << "Message: " << message << endl;
}

// Function overloading: Same function name but different parameters
int subtract(int num1, int num2) { return num1 - num2; }

float subtract(float num1, float num2) { return num1 - num2; }

// Function with reference parameter to modify the value of the passed argument
void increment(int &num) { num++; }

int main()
{
  int a, b;

  // Calling function with no parameters
  greet();

  // Calling function with parameters and printing the result
  cout << "\nEnter two integers to add: ";
  cin >> a >> b;
  cout << "Sum: " << add(a, b) << endl;

  // Calling function with return value
  cout << "\nEnter two numbers to multiply: ";
  cin >> a >> b;
  cout << "Product: " << multiply(a, b) << endl;

  // Calling function with default parameter
  cout << "\nCalling function with default message:" << endl;
  printMessage();
  cout << "\nCalling function with a custom message:" << endl;
  printMessage("Hello from function with a custom message!");

  // Function overloading: Calling the overloaded subtract functions
  cout << "\nEnter two integers to subtract: ";
  cin >> a >> b;
  cout << "Integer subtraction result: " << subtract(a, b) << endl;

  cout << "\nEnter two floating-point numbers to subtract: ";
  float x, y;
  cin >> x >> y;
  cout << "Floating-point subtraction result: " << subtract(x, y) << endl;

  // Demonstrating function with reference parameter
  cout << "\nEnter a number to increment: ";
  cin >> a;
  increment(a);
  cout << "After incrementing: " << a << endl;

  return 0;
}
