//linear search in array
#include <iostream>
using namespace std;

int
main ()
{
  int n, num, index;
  bool x;

  cout << "Enter the no. of elements: ";
  cin >> n;

  int arr[n];


  cout << "\nEnter the array:";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "\nEnter the element: ";
  cin >> num;


  for (int i = 0; i < n; i++)
    {
      if (arr[i] == num)
	{
	  x = 1;
	  index = i;
	}

    }

  if (x == 1)
    {
      cout << "\nThe number is present at " << index << " index";
    }

  else
    {
      cout << "\nnumber not found";
    }


  return 0;
}
