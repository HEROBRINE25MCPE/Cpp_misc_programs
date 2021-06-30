//inserting and element in an array
#include <iostream>
using namespace std;

int *
insert (int arr[], int n, int x, int position)
{

  int i;
  n = n + 1;

  for (i = n; i >= position; i--)
    {
      arr[i] = arr[i - 1];
    }

  arr[position - 1] = x;

  return arr;
}

int
main ()
{

  int x, position, n;



  cout << "Enter the no of elements: ";
  cin >> n;

  int arr[n];

  cout << "\nEnter the array:";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "\nenter the number to be inserted: ";
  cin >> x;

  cout << "\nEnter the position: ";
  cin >> position;
  cout << endl;

  insert (arr, n, x, position);

  for (int i = 0; i < n + 1; i++)
    cout << arr[i] << " ";


  return 0;
}
