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
  char a[11],a_,b[11],b_;
  scanf("%s %c %s %c",a,&a_,b,&b_);
  int pa=0,pb=0;
  int i=0;
  while(a[i])
  {
    if (a[i]==a_)
    {
      pa=(pa*10+a_-'0');
    }
    ++i;
  }
  i=0;
  while(b[i])
  {
    if (b[i]==b_)
    {
      pb=(pb*10+b_-'0');
    }
    ++i;
  }
  printf("%d\n",pa+pb);
  system("pause");
  return 0;
}