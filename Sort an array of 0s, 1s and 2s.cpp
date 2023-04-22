#include<bits/stdc++.h>
using namespace std;

#define NUM(s) sizeof(s)/sizeof(*s)
void
sort012 (int a[], int n)
{
  // sort(a,a+n); -> TC(NlogN)
  int lower = 0;
  int higher = n - 1;
  int mid = 0;
  while (mid <= higher)
    {
      if (a[mid] == 0)
	{
	  swap (a[mid], a[lower]);
	  mid++;
	  lower++;
	}
      else if (a[mid] == 1)
	{
	  mid++;
	}
      else
	{
	  swap (a[mid], a[higher]);
	  higher--;
	}
    }
}

int main ()
{
  int N = 5;
  int arr[5] = {0,2,1,2,0};
  sort012 (arr, N);
  cout<<"\n";
  for (int i = 0; i < N; i++)
    {
      cout << arr[i] << "\t";
    }
  return 0;
}
