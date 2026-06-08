#include <cstring>
#include <iostream>
using namespace std;

int main()
{
  // 1. C++ String Declaration and Initialization
  string str1 = "Hello, World!";
  cout << "String 1: " << str1 << endl;

  // 2. C-style String (Character Array)
  char str2[] = "Hello, C-style string!";
  cout << "C-style String: " << str2 << endl;

  // 3. String Concatenation
  string str3 = "Welcome";
  string str4 = " to C++ programming!";
  string str5 = str3 + str4; // Concatenate two strings
  cout << "\nConcatenated String: " << str5 << endl;

  // 4. String Length
  cout << "\nLength of string str1: " << str1.length() << endl;

  // 5. Accessing Characters in a String
  cout << "\nFirst character of str1: " << str1[0] << endl;

  // 6. String Comparison
  string str6 = "apple";
  string str7 = "banana";
  if (str6 < str7)
  {
    cout << "\n"
         << str6 << " is lexicographically smaller than " << str7 << endl;
  }
  else
  {
    cout << "\n"
         << str6 << " is not smaller than " << str7 << endl;
  }

  // 7. String Manipulation (Substring, Find, Replace)
  string str8 = "C++ Programming is fun!";
  string subStr = str8.substr(0, 3); // Get substring from index 0, length 3
  cout << "\nSubstring of str8: " << subStr << endl;

  size_t found = str8.find("Programming"); // Find position of substring
  if (found != string::npos)
  {
    cout << "\n'Programming' found at position: " << found << endl;
  }

  str8.replace(0, 3, "Java"); // Replace part of string
  cout << "\nModified string str8: " << str8 << endl;

  // 8. C-style String Functions (using <cstring>)
  char cStr[] = "Hello, C-style!";
  cout << "\nLength of C-style string: " << strlen(cStr) << endl;
  cout << "Comparison of 'Hello' and 'Hello, C-style!': "
       << strcmp("Hello", cStr) << endl;

  // 9. Converting C++ string to C-style string
  const char *cStr2 = str1.c_str();
  cout << "\nC++ string converted to C-style string: " << cStr2 << endl;

  // 10. String to Integer Conversion
  string numStr = "12345";
  int num = stoi(numStr); // Convert string to integer
  cout << "\nConverted string to integer: " << num << endl;

  return 0;
}
