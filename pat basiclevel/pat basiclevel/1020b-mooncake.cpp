#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct moon{
  double stock;  //pay attention to "double"
  double total_price;  //pay attention to "double"
  double price;
};

bool comp(const moon &moon1,const moon &moon2)
{
  if (moon1.price>moon2.price)
  {
    return true;
  }else{
    return false;
  }
  return false;
}

int main()
{
  int n,idx;
  double d;
  vector<moon> vec_moon;
  vec_moon.reserve(1001);
  scanf("%d %lf",&n,&d);
  idx=n;
  moon temp_moon;
  while(idx)
  {
    scanf("%lf",&temp_moon.stock);
    vec_moon.push_back(temp_moon);
    --idx;
  }
  idx=0;
  while(idx!=n)
  {
    scanf("%lf",&vec_moon[idx].total_price);
    vec_moon[idx].price= 1.f*vec_moon[idx].total_price/vec_moon[idx].stock;
    ++idx;
  }
  sort(vec_moon.begin(),vec_moon.end(),comp);
  idx=0;
  double sum_price=0.f;
  while(d>0 && idx!=n)
  {
     if (d>=vec_moon[idx].stock)
     {
       d-=vec_moon[idx].stock;
       sum_price+=vec_moon[idx].total_price;
     }else if (d<vec_moon[idx].stock)
     {
       sum_price+=(d*vec_moon[idx].price);
       d=0;
       break;
     }
     ++idx;
  }
  printf("%.2lf\n",sum_price);
  system("pause");
  return 0;
}