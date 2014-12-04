#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
  int n;
  char c;
  scanf("%d %c",&n,&c);
  int n_=(n+1)/2;
  int cnt=static_cast<int>(sqrt(static_cast<double>(n_)));
  int remain=n-2*cnt*cnt+1;
  int blank_space=0;
  int idx=2*cnt-1;
  while(idx>=1)
  {
    string str(idx,c);
    string blank(blank_space,' ');
    printf("%s%s\n",blank.c_str(),str.c_str());
    ++blank_space;
    idx-=2;
  }
  idx=3;
  blank_space-=2;
  while(idx<=2*cnt-1)
  {
    string str(idx,c);
    string blank(blank_space,' ');
    printf("%s%s\n",blank.c_str(),str.c_str());
    --blank_space;
    idx+=2;
  }
  printf("%d\n",remain);
  system("pause");
  return 0;
}

