#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <unordered_set>
using namespace std;

int main()
{
  char input_a[81],input_b[81];
  scanf("%s",input_a);
  scanf("%s",input_b);
  int a_idx=0,b_idx=0;
  unordered_set<char> set_str;
  vector<char> vec_str;
  while(input_a[a_idx]!='\0')
  {
    if (input_a[a_idx]!=input_b[b_idx])
    {
      if (set_str.find(toupper(input_a[a_idx]))==set_str.end())
      {
        set_str.insert(toupper(input_a[a_idx]));
        vec_str.push_back(toupper(input_a[a_idx]));
        ++a_idx;
      }else
      {
        ++a_idx;
      }
      
    }else
    {
      ++a_idx;
      ++b_idx;
    }
  }
  for (vector<char>::const_iterator cit=vec_str.cbegin();cit!=vec_str.cend();++cit)
  {
    printf("%c",*cit);
  }
  system("pause");
  return 0;
}