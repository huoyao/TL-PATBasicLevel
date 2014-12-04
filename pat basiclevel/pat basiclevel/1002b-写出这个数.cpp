#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <map>
using namespace std;



int main()
{
  int sum=0;
  char c;
  map<int,string> map_num;
  map_num[0]="ling";
  map_num[1]="yi";
  map_num[2]="er";
  map_num[3]="san";
  map_num[4]="si";
  map_num[5]="wu";
  map_num[6]="liu";
  map_num[7]="qi";
  map_num[8]="ba";
  map_num[9]="jiu";
  scanf("%c",&c);
  while(c!='\n')
  {
    sum+=(c-'0');
    scanf("%c",&c);
  }
  bool flag_hund=false;
  if (sum/100)
  {
    printf("%s ",map_num[sum/100].c_str());
    sum-=(sum/100*100);
    flag_hund=true;
  }
  if (sum/10 || flag_hund)
  {
    printf("%s ",map_num[sum/10].c_str());
  }
  printf("%s\n",map_num[sum%10].c_str());
  system("pause");
  return 0;
}