#include <iostream>
#include <string>
#include <climits>
#include <cmath> // Use <cmath> instead of <math.h> for modern C++ coding style
using namespace std;

int main()
{
    // FINDING NET SALARY OF AN EMPLOYEE
    cout
        << "== FINDING NET SALARY OF AN EMPLOYEE ==\n";
    float basic, percentAllownace, percentDeduct, netSalary;
    cout << "Enter the basic salary: ";
    cin >> basic;
    cout << "Enter the allowance amount: ";
    cin >> percentAllownace;
    cout << "Enter the deducted charges: ";
    cin >> percentDeduct;
    netSalary = basic + (basic * percentAllownace / 100) - (basic * percentDeduct / 100);
    cout << "The Net Salary is = " << netSalary << endl;

    cout << "====================\n";

    // CHECKING MAXIMUM OF AN ARRAY
    cout << "== CHECKING MAXIMUM OF AN ARRAY ==\n";
    int arr[] = {10, 9, 11, 2, 3, 4, 6, 5};
    int max = arr[0];
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Max of array is: " << max << endl;

    cout << "====================\n";

    // FINDING GCD OF GIVEN TWO NUMBERS
    cout << "== FINDING GCD OF GIVEN TWO NUMBERS ==\n";
    int m, n;
    cout << "Enter value of n: ";
    cin >> n;
    cout << "Enter value of m: ";
    cin >> m;
    while (n != m)
    {
        if (n > m)
        {
            n -= m;
        }
        else if (m > n)
        {
            m -= n;
        }
    }
    cout << "GCD of given number is " << m << endl;

    cout << "====================\n";

    // CHECKING IF A NUMBER IS PALINDROME OR NOT
    cout << "== CHECKING IF A NUMBER IS PALINDROME OR NOT ==\n";
    int n, r, m, rev = 0;
    cout << "Enter n: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << "Reversed number is " << rev << endl;
    if (rev == m)
    {
        cout << "It's a PALINDROME\n";
    }
    else
    {
        cout << "It's not a PALINDROME\n";
    }

    cout << "====================\n";

    // REVERSING A NUMBER
    cout << "== REVERSING A NUMBER ==\n";
    int number;
    cout << "Enter n: ";
    cin >> number;
    int rev_number = 0;
    while (number > 0)
    {
        r = number % 10;
        number = number / 10;
        rev_number = rev_number * 10 + r;
    }
    cout << "Reversed number is " << rev_number << endl;

    cout << "====================\n";

    // CHECKING WHETHER A NUMBER IS ARMSTRONG OR NOT
    cout << "== CHECKING WHETHER A NUMBER IS ARMSTRONG OR NOT ==\n";
    int sum = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + (r * r * r);
    }
    cout << "Sum is " << sum << endl;
    if (sum == m)
    {
        cout << "It is Armstrong Number\n";
    }
    else
    {
        cout << "It is not Armstrong Number\n";
    }

    cout << "====================\n";

    // FINDING LAST DIGITS OF A GIVEN NUMBER REVERSELY
    cout << "== FINDING LAST DIGITS OF A GIVEN NUMBER REVERSELY ==\n";
    cout << "Enter the value of n: ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << endl;
    }

    cout << "====================\n";

    // REMAINDER AND NUMBER, A VERY IMPORTANT CONCEPT IN PROGRAMMING
    cout << "== REMAINDER AND NUMBER, A VERY IMPORTANT CONCEPT IN PROGRAMMING ==\n";
    int number_2 = 1724;
    for (int i = 1; i < 5; i++)
    {
        r = number_2 % 10;
        number_2 = number_2 / 10;
        cout << "Remainder is " << r << endl;
        cout << "Number is " << number_2 << endl;
        cout << endl;
    }

    cout << "====================\n";

    // CHECKING IF A NUMBER IS PRIME OR NOT
    cout << "== CHECKING IF A NUMBER IS PRIME OR NOT ==\n";
    int count = 0;
    cout << "Enter the number n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Prime number\n";
    }
    else
    {
        cout << "Not prime number\n";
    }

    cout << "====================\n";

    // FINDING WHETHER A NUMBER IS A COMPLETE NUMBER OR NOT
    cout << "== FINDING WHETHER A NUMBER IS A COMPLETE NUMBER OR NOT ==\n";
    int sum_of_factors = 0;
    cout << "Enter the number n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum_of_factors += i;
            cout << "Factors are: " << i << endl;
        }
    }
    cout << "Sum is = " << sum_of_factors << endl;
    if (sum_of_factors == (n * 2))
    {
        cout << sum_of_factors << " = " << n << " * 2" << endl
             << "SO IT'S A COMPLETE NUMBER\n";
    }
    else
    {
        cout << sum_of_factors << " != " << n << " * 2" << endl
             << "SO IT'S NOT A COMPLETE NUMBER\n";
    }

    cout << "====================\n";

    // FINDING FACTORS OF A NUMBER
    cout << "== FINDING FACTORS OF A NUMBER ==\n";
    cout << "Enter the number n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Factors are: " << i << endl;
        }
    }

    cout << "====================\n";

    // FINDING FACTORIAL USING FOR LOOP
    cout << "== FINDING FACTORIAL USING FOR LOOP ==\n";
    int fact = 1;
    cout << "Enter value of n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of first " << n << " numbers is = " << fact << endl;

    cout << "====================\n";

    // TABLE PRINTING USING FOR LOOP
    cout << "== TABLE PRINTING USING FOR LOOP ==\n";
    int TableLength, TableNumber;
    cout << "Enter Table Number: ";
    cin >> TableNumber;
    cout << "Enter Table Length: ";
    cin >> TableLength;
    for (int i = 1; i <= TableLength; i++)
    {
        cout << TableNumber << " X " << i << " = " << TableNumber * i << endl;
    }

    cout << "====================\n";

    // BILL AMOUNT DISCOUNT PROGRAM
    cout << "== BILL AMOUNT DISCOUNT PROGRAM ==\n";
    float BillAmount, discount = 0.0;
    cout << "Enter the total bill amount: ";
    cin >> BillAmount;
    if (BillAmount < 100)
    {
        cout << "NO DISCOUNT\n";
    }
    else if (BillAmount >= 100 && BillAmount < 500)
    {
        discount = BillAmount * 10 / 100;
    }
    else if (BillAmount >= 500)
    {
        discount = BillAmount * 20 / 100;
    }
    cout << "BILL AMOUNT IS = " << BillAmount << endl;
    cout << "DISCOUNT IS = " << discount << endl;
    cout << "DISCOUNTED BILL IS = " << BillAmount - discount << endl;

    cout << "====================\n";
    return 0;
}