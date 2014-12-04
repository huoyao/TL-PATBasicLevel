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
  int idx=0;
  int num,zero_pos=0;
  vector<int> input_list;
  input_list.reserve(50);
  //deal with the zero element
  scanf("%d",&num);
  if (num)
  {
    zero_pos=num;
    while(num)
    {
      input_list.push_back(idx);
      --num;
    }
  }
  ++idx;
  while(idx!=10)
  {
    scanf("%d",&num);
    while(num)
    {
      input_list.push_back(idx);
      --num;
    }
    ++idx;
  }
  if (input_list.size()==0 || input_list.size()==zero_pos)
  {
    printf("0\n");
    return 0;
  }
  if (zero_pos)
  {
    printf("%d",*(input_list.begin()+zero_pos));
    input_list.erase(input_list.begin()+zero_pos);
  }
  for (vector<int>::const_iterator cit=input_list.cbegin();cit!=input_list.cend();++cit)
  {
    printf("%d",*cit);
  }
  printf("\n");
  system("pause");
  return 0;
}