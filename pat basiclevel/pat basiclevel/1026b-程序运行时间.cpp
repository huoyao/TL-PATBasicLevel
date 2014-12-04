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
  int first_time,second_time;
  double last_time;
  scanf("%d %d",&first_time,&second_time);
  last_time=(second_time-first_time)*1.0/100;
  int h=0,m=0,s=0;
  h=last_time/3600;
  if (h)
  {
    last_time-=(h*3600);
  }
  m=last_time/60;
  if (m)
  {
    last_time-=(m*60);
  }
  s=static_cast<int>(last_time+0.5);
  printf("%02d:%02d:%02d\n",h,m,s);
  system("pause");
  return 0;
}