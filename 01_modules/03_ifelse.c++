#include <iostream>
using namespace std;

int main()
{
  int num1, num2;
  char operation;

  // If-Else Statement: Checking if a number is positive or negative
  cout << "Enter a number: ";
  cin >> num1;

  if (num1 > 0)
  {
    cout << "The number is positive." << endl;
  }
  else if (num1 < 0)
  {
    cout << "The number is negative." << endl;
  }
  else
  {
    cout << "The number is zero." << endl;
  }

  // If-Else Ladder: Checking if a number is small, medium, or large
  cout << "\nEnter a number to classify as small, medium, or large: ";
  cin >> num2;

  if (num2 < 10)
  {
    cout << "The number is small." << endl;
  }
  else if (num2 >= 10 && num2 <= 50)
  {
    cout << "The number is medium." << endl;
  }
  else
  {
    cout << "The number is large." << endl;
  }

  // Switch Statement: Basic calculator (addition, subtraction, multiplication,
  // division)
  cout << "\nEnter two numbers: ";
  cin >> num1 >> num2;

  cout << "Enter the operation (+, -, *, /): ";
  cin >> operation;

  switch (operation)
  {
  case '+':
    cout << "Result: " << num1 + num2 << endl;
    break;
  case '-':
    cout << "Result: " << num1 - num2 << endl;
    break;
  case '*':
    cout << "Result: " << num1 * num2 << endl;
    break;
  case '/':
    if (num2 != 0)
    {
      cout << "Result: " << num1 / num2 << endl;
    }
    else
    {
      cout << "Error! Division by zero." << endl;
    }
    break;
  default:
    cout << "Invalid operation!" << endl;
  }

  // Nested if-else: Checking whether a number is divisible by both 2 and 3
  int number;
  cout << "\nEnter a number to check divisibility by 2 and 3: ";
  cin >> number;

  if (number % 2 == 0)
  {
    if (number % 3 == 0)
    {
      cout << "The number is divisible by both 2 and 3." << endl;
    }
    else
    {
      cout << "The number is divisible by 2 but not by 3." << endl;
    }
  }
  else
  {
    cout << "The number is not divisible by 2." << endl;
  }

  // Ternary Operator: Using ternary for a simple condition check
  cout << "\nEnter a number to check if it is even or odd: ";
  cin >> number;

  (number % 2 == 0) ? cout << "The number is even." << endl
                    : cout << "The number is odd." << endl;

  return 0;
}