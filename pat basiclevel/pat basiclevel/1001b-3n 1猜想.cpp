#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
  int n;
  scanf("%d",&n);
  int cnt=0;
  while(n!=1)
  {
    if (n%2)
    {
      n=(3*n+1)/2;
      ++cnt;
      
    }else
    {
      n/=2;
      ++cnt;
    }
  }
  printf("%d\n",cnt);
  system("pause");
  return 0;
}