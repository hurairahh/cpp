#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

// Program 1: Finding Username from Email
void findUsernameFromEmail()
{
    string str;
    cout << "Enter the email: ";
    getline(cin, str);
    int n = str.find('@');
    string username = str.substr(0, n);
    cout << "USERNAME is " << username << endl;
    cout << "==============================" << endl;
}

// Program 2: Check if a String is Palindrome
void checkPalindrome()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    string rev = string(str.rbegin(), str.rend());
    if (str == rev)
        cout << "PALINDROME" << endl;
    else
        cout << "NOT PALINDROME" << endl;
    cout << "==============================" << endl;
}

// Program 3: Counting Vowels, Consonants, and Spaces
void countVowelsConsonantsSpaces()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int vowels = 0, consonants = 0, spaces = 0;
    for (char c : str)
    {
        if (isalpha(c))
        {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (c == ' ')
            spaces++;
    }
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << ", Spaces: " << spaces << ", Words: " << spaces + 1 << endl;
    cout << "==============================" << endl;
}

// Program 4: Convert String to Uppercase
void convertToUppercase()
{
    string s1 = "WElCoMe7";
    for (char &c : s1)
        c = toupper(c);
    cout << s1 << endl;
    cout << "==============================" << endl;
}

// Program 5: Convert String to Lowercase
void convertToLowercase()
{
    string s1 = "WElCoME";
    for (char &c : s1)
        c = tolower(c);
    cout << s1 << endl;
    cout << "==============================" << endl;
}

// Program 6: Print Each Character on a New Line
void printCharactersLineByLine()
{
    string s1 = "WAQAR HASSAN";
    for (char c : s1)
        cout << c << endl;
    cout << "==============================" << endl;
}

// Program 7: Reverse a String using Reverse Iterator
void reverseString()
{
    string s1;
    cout << "Enter the string: ";
    getline(cin, s1);
    for (auto it = s1.rbegin(); it != s1.rend(); ++it)
        cout << *it;
    cout << endl;
    cout << "==============================" << endl;
}

// Program 8: Convert Characters to Lowercase using Iterator
void convertToLowercaseUsingIterator()
{
    string s1;
    cout << "Enter the string: ";
    getline(cin, s1);
    for (string::iterator iter = s1.begin(); iter != s1.end(); ++iter)
    {
        *iter = tolower(*iter);
        cout << *iter << "\t";
    }
    cout << endl
         << "==============================" << endl;
}

// Program 9: Accessing the 7th Character
void accessSeventhCharacter()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    cout << str.at(6) << endl;
    cout << "==============================" << endl;
}

// Program 10: Accessing the First Character
void accessFirstCharacter()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    cout << str.front() << endl;
    cout << "==============================" << endl;
}

// Program 11: Accessing the Last Character
void accessLastCharacter()
{
    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    cout << str.back() << endl;
    cout << "==============================" << endl;
}

// Program 12: Concatenating Two Strings
void concatenateStrings()
{
    string str1, str2;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    cout << str1 + " " + str2 << endl;
    cout << "==============================" << endl;
}

// Call all programs in the main function
int main()
{
    findUsernameFromEmail();
    checkPalindrome();
    countVowelsConsonantsSpaces();
    convertToUppercase();
    convertToLowercase();
    printCharactersLineByLine();
    reverseString();
    convertToLowercaseUsingIterator();
    accessSeventhCharacter();
    accessFirstCharacter();
    accessLastCharacter();
    concatenateStrings();
    return 0;
}