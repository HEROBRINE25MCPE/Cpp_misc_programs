//delete from an array

#include <iostream>
using namespace std;

int
Delete (int arr[], int n, int x)
{
    int i,count=0;

 for(i=0; i<n; i++)
        {
                if(arr[i]==x)
                {
                        for(int j=i; j<(n-1); j++)
                        {
                                arr[j]=arr[j+1];
                        }
                        count++;
                        break;
                }
        }
        if(count==0)
        {
                cout<<"\nElement not found\n";
        }
        else
        {
                cout<<"\nElement deleted successfully\n";
                cout<<"\nNow the new array is: ";
                for(i=0; i<(n-1); i++)
                {
                        cout<<arr[i]<<" ";
                }
        }

}

int
main ()
{

  int x, position, n, arr[n];

  cout << "Enter the no of elements: ";
  cin >> n;

  cout << "\nEnter the array:";
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "\nenter the number to be deleted: ";
  cin >> x;

  cout << endl;

  Delete (arr, n, x);

  return 0;
}
