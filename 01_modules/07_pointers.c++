#include <iostream>
using namespace std;

void modifyValue(int *p)
{
  *p = 20; // Modifying value of num through pointer
}

int main()
{
  // 1. Basic Pointer Declaration and Dereferencing
  int num = 10;
  int *ptr = &num; // Pointer that holds the address of 'num'

  cout << "Value of num: " << num << endl;
  cout << "Address of num: " << &num << endl;
  cout << "Pointer ptr holding address of num: " << ptr << endl;
  cout << "Dereferencing ptr: " << *ptr << endl;

  // 2. Pointer Arithmetic
  int arr[5] = {1, 2, 3, 4, 5};
  int *arrPtr = arr; // Pointer to the first element of the array

  cout << "\nArray elements accessed using pointer arithmetic: ";
  for (int i = 0; i < 5; i++)
  {
    cout << *(arrPtr + i) << " "; // Accessing array elements using pointer
  }
  cout << endl;

  // 3. Pointer with Arrays
  cout << "\nArray elements using pointer and index notation: ";
  for (int i = 0; i < 5; i++)
  {
    cout << *(arr + i) << " "; // Accessing array elements using pointer
  }
  cout << endl;

  // 4. Passing Pointers to Functions
  cout << "\nPassing pointer to a function and modifying value:" << endl;
  modifyValue(ptr);
  cout << "Value of num after modifyValue function: " << num << endl;

  // 5. Pointer to Pointer
  int **pptr = &ptr; // Pointer to a pointer
  cout << "\nValue of pptr (pointer to pointer): " << pptr << endl;
  cout << "Dereferencing pptr to get the address of ptr: " << *pptr << endl;
  cout << "Dereferencing pptr twice to get the value of num: " << **pptr
       << endl;

  return 0;
}
