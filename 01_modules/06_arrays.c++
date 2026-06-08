#include <iostream>
using namespace std;

// Function to calculate sum of array elements
int calculateSum(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}

int main()
{
  // 1. Basic Array Declaration and Initialization
  int arr[5] = {1, 2, 3, 4, 5};

  cout << "Basic Array Elements: ";
  for (int i = 0; i < 5; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  // 2. Taking Array Input from User
  int userArr[5];
  cout << "\nEnter 5 integers to store in the array: ";
  for (int i = 0; i < 5; i++)
  {
    cin >> userArr[i];
  }

  cout << "\nYou entered: ";
  for (int i = 0; i < 5; i++)
  {
    cout << userArr[i] << " ";
  }
  cout << endl;

  // 3. Array of Strings
  string strArr[3] = {"Apple", "Banana", "Cherry"};
  cout << "\nArray of Strings: ";
  for (int i = 0; i < 3; i++)
  {
    cout << strArr[i] << " ";
  }
  cout << endl;

  // 4. Multidimensional Array (2D Array)
  int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
  cout << "\n2D Array (Matrix):" << endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // 5. Array of Floats
  float floatArr[4] = {3.14, 1.61, 2.71, 1.41};
  cout << "\nArray of Floats: ";
  for (int i = 0; i < 4; i++)
  {
    cout << floatArr[i] << " ";
  }
  cout << endl;

  // 6. Passing Array to a Function
  cout << "\nPassing array to a function and calculating sum:" << endl;
  int sum = calculateSum(arr, 5);
  cout << "Sum of elements in the array: " << sum << endl;

  return 0;
}
