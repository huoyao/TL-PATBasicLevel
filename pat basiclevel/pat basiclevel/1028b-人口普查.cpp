#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct people
{
  char name[6];
  int y;
  int m;
  int d;
};

bool cmp(const people &p1,const people &p2)
{
  if (p1.y<p2.y)
  {
    return true;
  }else if(p1.y==p2.y)
  {
    if (p1.m<p2.m)
    {
      return true;
    }else if (p1.m==p2.m)
    {
      if (p1.d<p2.d)
      {
        return true;
      }else
      {
        return false;
      }
    }else
    {
      return false;
    }
  }else
  {
    return false;
  }
  return false;
}

int main()
{
  vector<people> vec_people;
  int n;
  scanf("%d",&n);
  people p;
  for (int i=0;i!=n;++i)
  {
    scanf("%s %d/%d/%d",p.name,&p.y,&p.m,&p.d);
    if (p.y==1814 &&p.m>=9)
    {
      if (p.m>9)
      {
        vec_people.push_back(p);
      }else
      {
        if (p.d>=6)
        {
          vec_people.push_back(p);
        }
      }
      continue;
    }
    if (p.y==2014 && p.m<=9)
    {
      if (p.m<9)
      {
        vec_people.push_back(p);
      }else
      {
        if (p.d<=6)
        {
          vec_people.push_back(p);
        }
      }
      continue;
    }
    if (p.y>1814 && p.y<2014)
    { 
      vec_people.push_back(p);
      continue;
    }
  }

  sort(vec_people.begin(),vec_people.end(),cmp);
  
  if (vec_people.size())
  {
    printf("%d %s %s\n",vec_people.size(),(*vec_people.begin()).name,(*(vec_people.end()-1)).name);
  }else
  {
    printf("%d\n",vec_people.size());
  }

  system("pause");
  return 0;
}