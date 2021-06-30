//reversing array
#include <iostream>
using namespace std;

int
main ()
{
  int n;

  cout << "Enter the no of elements: ";
  cin >> n;

  int arr[n];
  int array[n];

  cout << "\nEnter the array:";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "\nReversed array is: ";


  for (int i = n - 1, j = 0; i >= 0; i--, j++)
    {
      array[j] = arr[i];
    }


  for (int i = 0; i <= n - 1; i++)
    cout << array[i] << " ";


  return 0;
}
