#include <iostream>
using namespace std;

int main()
{
  // Declare variables
  int age = 25;
  float height = 5.9;
  char grade = 'A';
  string name = "John";

  // Display initial values
  cout << "Initial Values:" << endl;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Height: " << height << endl;
  cout << "Grade: " << grade << endl;

  // Take user input
  cout << "\nEnter your name: ";
  cin >> name;

  cout << "Enter your age: ";
  cin >> age;

  cout << "Enter your height: ";
  cin >> height;

  cout << "Enter your grade: ";
  cin >> grade;

  // Display updated values
  cout << "\nUpdated Values:" << endl;
  cout << "Name: " << name << endl;
  cout << "Age: " << age << endl;
  cout << "Height: " << height << endl;
  cout << "Grade: " << grade << endl;

  return 0;
}
