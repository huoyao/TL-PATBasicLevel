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
  int a,b,c,tag;
  vector<int> result_num;
  scanf("%d %d %d",&a,&b,&tag);
  c=a+b;
  int temp;
  do 
  {
    temp=c%tag;
    result_num.push_back(temp);
    c/=tag;
  } while (c);
  for (vector<int>::const_reverse_iterator crit=result_num.crbegin();crit!=result_num.crend();++crit)
  {
    printf("%d",*crit);
  }
  printf("\n");
  system("pause");
  return 0;
}