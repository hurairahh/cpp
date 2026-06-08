#include <iostream>
#include <string>
#include <climits>
#include <cmath> // Use <cmath> instead of <math.h> for modern C++ coding style
using namespace std;

int main()
{

    // 1. REFERENCE FEATURE OF C++: THIS EXISTS ONLY IN THIS LANGUAGE
    cout << "=== REFERENCE FEATURE OF C++ ===" << endl;
    int x = 10;
    int &y = x;
    x++;
    y++;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << endl;
    cout << "x++: " << x++ << endl;
    cout << "y: " << y << endl;

    // 2. CREATING A CHANGEABLE ARRAY IN HEAP INSTEAD OF STACK
    cout << "=== CREATING A CHANGEABLE ARRAY IN HEAP ===" << endl;
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *P = new int[size];
    cout << "Enter new size of array: ";
    cin >> size;
    delete[] P; // Deallocate old memory
    P = new int[size];
    delete[] P; // Deallocate new memory when done

    // 3. DECLARING A POINTER AND THEN DELETING AFTER USING IT
    cout << "=== DECLARING A POINTER AND THEN DELETING AFTER USING IT ===" << endl;
    int *p = new int[10];
    p[0] = 12;
    p[1] = 13;
    cout << "p[1]: " << p[1] << endl;
    delete[] p;
    p = nullptr;

    // 4. RECEIVING THE SIZE OF ARRAY FROM USER
    cout << "=== RECEIVING THE SIZE OF ARRAY FROM USER ===" << endl;
    cout << "Enter the number of elements in array you want: ";
    cin >> size;
    int array[size];
    cout << "Size of array is " << sizeof(array) << endl;

    // 5. PRINTING CARTESIAN PRODUCT COUNTING
    cout << "=== PRINTING CARTESIAN PRODUCT COUNTING ===" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }

    // 6. PRINTING N x N MATRIX OF ASTERISKS
    cout << "=== PRINTING N x N MATRIX OF ASTERISKS ===" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }

    // 7. PRINTING UPPER RIGHT TRIANGLE
    cout << "=== PRINTING UPPER RIGHT TRIANGLE ===" << endl;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (i < j)
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    // 8. PRINTING LOWER LEFT TRIANGLE
    cout << "=== PRINTING LOWER LEFT TRIANGLE ===" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }

    // 9. PRINTING UPPER LEFT TRIANGLE
    cout << "=== PRINTING UPPER LEFT TRIANGLE ===" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << "*  ";
        }
        cout << endl;
    }

    // 10. PRINTING LOWER RIGHT TRIANGLE
    cout << "=== PRINTING LOWER RIGHT TRIANGLE ===" << endl;
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (i + j > 5)
            {
                cout << "*  ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    // 11. RECEIVING VALUES FROM USER AND FINDING SUM AND AVERAGE
    cout << "=== RECEIVING VALUES FROM USER AND FINDING SUM AND AVERAGE ===" << endl;
    int arr[50];
    int n;
    float average, sum = 0.0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value at " << i + 1 << " Index: ";
        cin >> arr[i];
        sum += arr[i];
    }
    average = sum / n;
    cout << "The sum of elements is: " << sum << endl;
    cout << "The average of elements is: " << average << endl;

    // 12. TRAVERSING A 2-DIMENSIONAL ARRAY
    cout << "=== TRAVERSING A 2-DIMENSIONAL ARRAY ===" << endl;
    int a[2][3] = {{3, 3, 12}, {20, 30, 50}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    // 13. ADDING TWO 2-D ARRAYS IN A NEW THIRD 2-D ARRAY
    cout << "=== ADDING TWO 2-D ARRAYS IN A NEW THIRD 2-D ARRAY ===" << endl;
    int b[2][3] = {{7, 17, 18}, {20, 30, 80}};
    int c[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }

    // 15. SEARCHING AN ELEMENT IN AN ARRAY
    cout << "=== SEARCHING AN ELEMENT IN AN ARRAY ===" << endl;
    int arr3[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Enter " << i + 1 << " value of array: ";
        cin >> arr3[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    for (int i = 0; i < 6; i++)
    {
        if (arr3[i] == key)
        {
            cout << "KEY Found at Index: " << i << endl;
            exit(0);
        }
    }
    cout << "KEY not Found" << endl;

    // 16. FINDING SUM OF ARRAY
    cout << "=== FINDING SUM OF ARRAY ===" << endl;
    int arr4[] = {10, 9, 11, 2, 3, 4, 6, 5};
    int sum2 = 0;
    int sizeOfArray = sizeof(arr4) / sizeof(arr4[0]);
    for (int i = 0; i < sizeOfArray; i++)
    {
        sum2 += arr4[i];
    }
    cout << "Sum of array elements: " << sum2 << endl;

    return 0;
}