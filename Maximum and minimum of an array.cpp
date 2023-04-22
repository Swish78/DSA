#include<bits/stdc++.h>
using namespace std;
#define forl(i,n) for(int i = 0;i<n;i++)
#define NUM(s) sizeof(s)/sizeof(*s)

// Function to print array
void
print (int arr[], int size)
{
  forl (i, size) cout << arr[i] << "\t";
}

// Function to find min and max
// void
// MINnMAX (int arr[] , int size)
// {
//   sort (arr, arr + size);
//   cout << "\n" << "MIN-> " << arr[0] << "\n";
//   cout << "MAX-> " << arr[size - 1] << "\n";
// }
 // Driver function
int
main ()
{
//   int min,max;
  int arr[] = { 44, 257, 95, 21, 56, 869 };
  int size = NUM (arr);

  //Printing og array
  print (arr, size);

  // finding Min and Max element
  MINnMAX (arr, size);
//   MINnMAX (arr, size,min,max);
//   cout<<min<<"\t"<<max;

  return 0;
}



/*
If you want min and max elements to returned to main then the aforementions Function can be transformed a bit;
void MINnMAX (int arr[] , int size,int &min,int &max) // min and max should be 2 new variables in driver function 
{
  sort (arr, arr + size);
  cout << "\n" << "MIN-> " << arr[0] << "\n";
  cout << "MAX-> " << arr[size - 1] << "\n";
  min = arr[0],max = [size-1];
}

*/
