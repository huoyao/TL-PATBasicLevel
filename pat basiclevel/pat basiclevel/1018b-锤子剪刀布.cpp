#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <map>
using namespace std;

struct bcj
{
  int win;
  int tie;
  int lose;
  map<char,int> times;
};


char cmp(int a[3])
{
  if (a[0]==a[1] && a[0]==a[2])
  {
    return 'B';
  }
  if (a[0]>a[1])
  {
    if (a[0]>a[2])
    {
      return 'B';
    }else if (a[0]==a[2])
    {
      return 'B';
    }else
    {
      return 'C';
    }
  }else if (a[0]==a[1])
  {
    if (a[0]>a[2])
    {
      return 'B';
    }else if (a[0]<a[2])
    {
      return 'C';
    }
  }else
  {
    if (a[1]<=a[2])
    {
      return 'C';
    }else{
      return 'J';
    }
  }
}


int main()
{
  bcj a,b;
  a.win=0;
  a.tie=0;
  a.lose=0;
  b.win=0;
  b.lose=0;
  b.tie=0;
  int n;
  char c_a,c_b;
  scanf("%d",&n);
  char line_break;
 // scanf("%c",&line_break);
  int diff;
  while(n)
  {
    scanf("%c",&line_break);
    scanf("%c %c",&c_a,&c_b);
    diff=c_a-c_b;
    if (diff==0)
    {
      ++a.tie;
      ++b.tie;
    }else if (diff <0)
    {
      if (c_a=='B' && c_b=='J')
      {
        ++b.win;
        b.times[c_b]++;
        ++a.lose;
      }else
      {
        ++a.win;
        ++a.times[c_a];
        ++b.lose;
      }
    }else
    {
      if (c_a=='J' && c_b=='B')
      {
        ++a.win;
        ++a.times[c_a];
        ++b.lose;
      }else
      {
        ++b.win;
        b.times[c_b]++;
        ++a.lose;
      }
    }
   --n;
  }
  printf("%d %d %d\n",a.win,a.tie,a.lose);
  printf("%d %d %d\n",b.win,b.tie,b.lose);
  int cnt[3];
  cnt[0]=a.times['B'];
  cnt[1]=a.times['J'];
  cnt[2]=a.times['C'];
  char result_c=cmp(cnt);
  printf("%c ",result_c);
  cnt[0]=b.times['B'];
  cnt[1]=b.times['J'];
  cnt[2]=b.times['C'];
  result_c=cmp(cnt);
  printf("%c\n",result_c);
  system("pause");
  return 0;
}