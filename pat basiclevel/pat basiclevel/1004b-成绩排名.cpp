#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdio>
using namespace std;

struct stu_info
{
  char name[11];
  char stu_id[11];
  int score;
};

bool cmp(const stu_info &stu1,const stu_info &stu2)
{
  return stu1.score>stu2.score;
}

int main()
{
  int n;
  scanf("%d",&n);
  vector<stu_info> vec_stu;
  stu_info stu;
  while(n--)
  {
     scanf("%s %s %d",stu.name,stu.stu_id,&stu.score);
     vec_stu.push_back(stu);
  }
  sort(vec_stu.begin(),vec_stu.end(),cmp);
  printf("%s %s\n%s %s\n",vec_stu.front().name,vec_stu.front().stu_id,vec_stu.back().name,vec_stu.back().stu_id);
  system("pause");
  return 0;
}