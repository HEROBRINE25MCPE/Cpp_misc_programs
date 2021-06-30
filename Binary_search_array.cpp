//binarySearch

#include <iostream>
using namespace std;

int
binarySearch (int arr[], int n, int num)
{
  int s = 0;
  int e = n;
  while (s <= e)
    {
      int mid = (s + e) / 2;

      if (arr[mid] == num)
	{
	  return mid;
	}
      else if (arr[mid] > num)
	{
	  e = mid - 1;
	}
      else
	{
	  s = mid + 1;
	}
    }
  return -1;
}

int
main ()
{

  int n, num, x;
  cout << "Enter the no of elements: ";
  cin >> n;

  int arr[n];
  cout << "\nEnter the array(Sorted): ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "\nEnter the number: ";
  cin >> num;

  x = binarySearch (arr, n, num);
  
  if(x!=-1)
    cout<<"\nThe no. is present at "<<x<<" index";
  else
    cout<<"\nNot found"; 

  return 0;
}
