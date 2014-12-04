#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

void convert(const int &d,vector<int> &vec)
{
  vec.clear();
  int a,b,c,t;
  a=d/1000;
  vec.push_back(a);
  b=(d-a*1000)/100;
  vec.push_back(b);
  c=d%100/10;
  vec.push_back(c);
  t=d%10;
  vec.push_back(t);
}

int main()
{
  vector<int> input_four;
  input_four.reserve(4);
  int input_data,result_l=0,result_r=0,result_;
  scanf("%d",&input_data);
  convert(input_data,input_four);
  while(1)
  {
    result_l=0;
    result_r=0;
    sort(input_four.begin(),input_four.end());
    for (vector<int>::const_reverse_iterator cit=input_four.crbegin();cit!=input_four.crend();++cit)
    {
      result_l=result_l*10+*cit;
      int step=cit-input_four.crbegin();
      result_r+=((*cit)*pow(10.,step));
    }
    result_=result_l-result_r;
    if (result_==0)
    {
      printf("%04d - %04d = 0000\n",result_l,result_r);
      return 0;
    }
    printf("%04d - %04d = %04d\n",result_l,result_r,result_);
    if (result_==6174)
    {
      return 0;
    }
    convert(result_,input_four);
  }
  
  system("pause");
  return 0;
}