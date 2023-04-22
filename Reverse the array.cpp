// We are supposed to reverse a array
// In C++
#include <bits/stdc++.h>
using namespace std;
#define forl(i,n) for(int i = 0;i<n;i++)
#define NUM(a) (sizeof(a) / sizeof(*a))
void
Rarray (int arr[], int left, int right)
{
  if (right <= left)
    return;

  int tmp = arr[left];
  arr[left] = arr[right];
  arr[right] = tmp;

  // Recursive Function calling
  Rarray (arr, left + 1, right - 1);
}

int
main ()
{
  int arr[] = {50, 40, 30, 20 ,10};
  int size = NUM (arr);

  // Original array
  forl (i, size) 
    cout<<arr[i]<<"\t";

  // Function calling
  Rarray(arr,0,size-1);

  cout<<"\n"<<"Reversed array is"<<"\n";
  //Reversed array
  forl (i, size)    
    cout<<arr[i]<<"\t";

  return 0;
}
