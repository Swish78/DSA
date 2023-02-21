
#include<bits/stdc++.h>
using namespace std;
#define NUM(s) sizeof(s)/sizeof(*s)
#define forl(i,n) for(int i = 0;i<n;i++)

int
solve (int s[], int n, int b[], int m)
{
  //code here
  set < int >sol;
  int cnt = 0;
  forl (i, n)
  {
    sol.insert (s[i]);
  }
  forl (i, m)
  {
    sol.insert (b[i]);
  }
  for (auto itr = sol.begin (); itr != sol.end (); itr++)
    {
      cnt++;
    }
  return cnt;
}

int
main ()
{
  int s[] = { 3, 7, 2, 9, 1, 6 };
  int n = NUM (s);
  int b[] = { 2, 6, 4, 10, 23, 99 };
  int m = NUM (b);
  cout << "The number of elements in the union between these two arrays: " <<
    solve (s, n, b, m) << "\n";
  return 0;
}

