#include <iostream>
using namespace std;

int main()
{
  int i, n;

  // For Loop: Printing numbers from 1 to n
  cout << "Enter a number for the 'for' loop: ";
  cin >> n;

  cout << "\nUsing 'for' loop to print numbers from 1 to " << n << ":\n";
  for (i = 1; i <= n; i++)
  {
    cout << i << " ";
  }
  cout << endl;

  // While Loop: Printing even numbers up to n
  cout << "\nUsing 'while' loop to print even numbers up to " << n << ":\n";
  i = 2; // Start from the first even number
  while (i <= n)
  {
    cout << i << " ";
    i += 2; // Increment by 2 to get the next even number
  }
  cout << endl;

  // Do-While Loop: Printing odd numbers up to n
  cout << "\nUsing 'do-while' loop to print odd numbers up to " << n << ":\n";
  i = 1; // Start from the first odd number
  do
  {
    cout << i << " ";
    i += 2; // Increment by 2 to get the next odd number
  } while (i <= n);
  cout << endl;

  // Nested For Loop: Printing a multiplication table for a number
  cout << "\nEnter a number to print its multiplication table: ";
  cin >> n;

  cout << "\nMultiplication table of " << n << ":\n";
  for (i = 1; i <= 10; i++)
  {
    cout << n << " * " << i << " = " << n * i << endl;
  }

  // Break and Continue in a loop: Using 'break' to exit a loop early
  cout << "\nUsing 'break' to stop the loop when reaching a number greater "
          "than 5:\n";
  for (i = 1; i <= 10; i++)
  {
    if (i > 5)
    {
      break; // Exit the loop when i becomes greater than 5
    }
    cout << i << " ";
  }
  cout << endl;

  // Using 'continue' to skip even numbers
  cout << "\nUsing 'continue' to skip even numbers:\n";
  for (i = 1; i <= 10; i++)
  {
    if (i % 2 == 0)
    {
      continue; // Skip the rest of the loop for even numbers
    }
    cout << i << " ";
  }
  cout << endl;
  // USING FOR EACH LOOP FOR PRINTING AN ARRAY IN ONCE
  int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (int x : A)
  {
    cout << x << "\t";
  }

  // WRITING AUTO IS OPTIONAL
  float A[] = {0, 1.2, 2.3, 3.8, 4.5, 5.9, 6.4, 7, 8, 9};
  for (auto x : A)
  {
    cout << x << "\t";
  }

  // A COMPLETE 5 STEP PROGRAM CODE TO PRINT ALL ARRAY VALUES AUTOMATICALLY
  int arr[] = {54, 87, 4, 34, 3, 43, 46, 5};
  int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
  // PRINTING USING FOR LOOP
  for (int i = 0; i < sizeOfArray; i++)
  {
    cout << arr[i] << "\t";
  }
  cout << endl;
  // PRINTING A NEW VALUE OF ++ BY PASSING COPY TO X
  for (auto x : arr) // this lines reads as = for each x in arr
  {
    cout << ++x << "\t";
  }
  cout << endl;
  // PRINTING THE CURRENT VALUE AFTER THE ABOVE CHANGE IN VALUE
  for (auto x : arr)
  {
    cout << x << "\t";
  }
  cout << endl;
  // PRINTING A NEW VALUE OF ++ BY PASSING ADDRESS/REFRENCE TO X
  for (auto &x : arr)
  {
    cout << ++x << "\t";
  }
  cout << endl;
  // PRINTING THE CURRENT VALUE AFTER THE ABOVE CHANGE IN ADDRESS/REFRENCE
  for (auto x : arr)
  {
    cout << x << "\t";
  }

  return 0;
}
