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
  map<char,int> input_data;
  char c;
  scanf("%c",&c);
  while(c!='\n')
  {
    ++input_data[c];
    scanf("%c",&c);
  }
  for (map<char,int>::const_iterator cit=input_data.cbegin();cit!=input_data.cend();++cit)
  {
    printf("%c:%d\n",cit->first,cit->second);
  }
  system("pause");
  return 0;
}