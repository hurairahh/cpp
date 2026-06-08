#include <iostream>
using namespace std;

int main()
{
  // Arithmetic operators
  int x = 10, y = 5;
  cout << "x + y = " << x + y << endl;
  cout << "x - y = " << x - y << endl;
  cout << "x * y = " << x * y << endl;
  cout << "x / y = " << x / y << endl;
  cout << "x % y = " << x % y << endl;

  // Relational operators
  cout << "x > y: " << (x > y) << endl;
  cout << "x < y: " << (x < y) << endl;
  cout << "x == y: " << (x == y) << endl;
  cout << "x != y: " << (x != y) << endl;

  // Logical operators
  bool a = true, b = false;
  cout << "a && b: " << (a && b) << endl;
  cout << "a || b: " << (a || b) << endl;
  cout << "!a: " << (!a) << endl;

  // Bitwise operators
  int c = 7, d = 11;
  cout << "c & d: " << (c & d) << endl;
  cout << "c | d: " << (c | d) << endl;
  cout << "c ^ d: " << (c ^ d) << endl;
  cout << "~c: " << (~c) << endl;
  cout << "c << 2: " << (c << 2) << endl;
  cout << "d >> 1: " << (d >> 1) << endl;

  return 0;
}